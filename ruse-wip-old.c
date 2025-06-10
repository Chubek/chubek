#include <assert.h>
#include <limits.h>
#include <signal.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

#define KNUTH_GOLD_CONST 2654435761u

#define MAX_HASHTBL_BUCKETS 128
#define SYMTBL_GROWTH_RATE 8196
#define HEAP_GROWTH_RATE 66536
#define MEM_ALIGN 16

#define TAG_CELL 0
#define TAG_FORWARD 1
#define TAG_SYMBOL 2
#define TAG_STRING 3
#define TAG_NUMBER 4
#define TAG_CHARACTER 5
#define TAG_VECTOR 6
#define TAG_NATIVE 7
#define TAG_CLOSURE 8
#define TAG_BOOLEAN 9
#define TAG_NIL 10
#define TAG_BYTEBUF 11
#define TAG_HASHTBL 12

#define TAGCELL uintptr_t
#define TAGCELL_ADDR uintptr_t
#define TAGCELL_TAG int8_t
#define TAGCELL_ALIGN 16
#define TAGCELL_ADDRWIDTH 60
#define TAGCELL_TAGWIDTH 4
#define TAGCELL_TAGMASK 15
#define TAGCELL_PTRMASK (~TAGCELL_TAGMASK)

#define TAGCELL_Create(addr, tag) ((TAGCELL)addr | (tag & TAGCELL_TAGMASK))
#define TAGCELL_IsCell(tcell) (!TAGCELL_GetTag(tcell))
#define TAGCELL_IsNil(tcell) (TAGCELL_GetTag(tcell) == TAG_NIL)
#define TAGCELL_GetAddr(tcell) ((void*)(tcell & TAGCELL_PTRMASK))
#define TAGCELL_GetTag(tcell) ((TAGCELL)tcell & TAGCELL_TAGMASK)
#define TAGCELL_GetCar(tcell)                                                  \
  (TAGCELL_IsCell(tcell) ? ((struct Cell*)TAGCELL_GetAddr(tcell))->car         \
                         : NilCell)
#define TAGCELL_GetCdr(tcell)                                                  \
  (TAGCELL_IsCell(tcell) ? ((struct Cell*)TAGCELL_GetAddr(tcell))->cdr         \
                         : NilCell)

#define BYTEBUF_GetLen(tcell)                                                  \
  (*(uint32_t*)((uint8_t*)TAGCELL_GetAddr(tcell) - (sizeof(uint32_t) * 2)))
#define BYTEBUF_GetCap(tcell)                                                  \
  (*(uint32_t*)((uint8_t*)TAGCELL_GetAddr(tcell) - (sizeof(uint32_t))))
#define BYTEBUF_GetBuf(tcell) ((uint8_t*)TAGCELL_GetAddr(tcell))
#define BYTEBUF_IsImmutable(tcell) (BYTEBUF_GetCap(tcell) == 0)

typedef int envid_t;
typedef uint32_t objref_t;
typedef uint32_t symref_t;
typedef uint16_t bufhash_t;

struct Cell
{
  TAGCELL car;
  TAGCELL cdr;
  bool marked;
};

struct Vector
{
  TAGCELL* cells;
  size_t num_cells;
};

struct Environ
{
  struct Binding
  {
    symref_t name;
    TAGCELL value;
    envid_t capref; // only `if` captured
  }** bindings;
  size_t num_bindings;
  symref_t env_name;
  envid_t id, parent_id;
};

struct Hashtbl
{
  struct Entry
  {
    TAGCELL key;
    TAGCELL value;
    objref_t hash;
    bool occupied;
    struct Entry *next, *prev;
  } buckets[MAX_HASHTBL_BUCKETS];
  size_t current_bucket;
};

struct Symtbl
{
  const uint8_t const* symbol;
  symref_t hash;
  struct Symtbl *next, *prev;
};

static struct Cell* Heap = NULL;
static struct Cell* FreeList = NULL;
static struct Symtbl* Symbols = NULL;
static const TAGCELL NilCell = TAGCELL_Create(0, TAGCELL_NIL);

static size_t SymtblSize = SYMTBL_GROWTH_RATE;
static size_t HeapSize = HEAP_GROWTH_RATE;

static inline objref_t
hash_object(TAGCELL msg);
static inline symref_t
hash_symbol(const uint8_t* msg);
static inline bufhash_t
hash_buffer(TAGCELL msg);

static void*
aligned_malloc(size_t alignment, size_t size);
static inline void
aligned_free(void* ptr);

static TAGCELL
bytebuf_make(const size_t cap);
static TAGCELL
bytebuf_immut_from(const uint8_t* src, uint32_t len);
static TAGCELL
bytebuf_append(TAGCELL buf_tag, uint8_t* new_data, uint32_t n);
static TAGCELL
bytebuf_concat(TAGCELL a, TAGCELL b);
static void
bytebuf_free(TAGCELL buf_tag);

// %% %% %% //

objref_t
hash_object(TAGCELL msg)
{
  objref h = KNUTH_GOLD_CONST;
  return TAGECLL_GetAddr(msg) * h;
}

symref_t
hash_symbol(const uint8_t* msg)
{
  symref_t h = 0;
  uint8_t c = 0;
  while ((c = *msg++))
    h = (h << 5) + h + c;
  return h;
}

bufhash_t
hash_buffer(TAGCELL msg)
{
  size_t size = BYTEBUF_GetLen(msg);
  uint8_t* buffer = BYTEBUF_GetBuf(msg);
  bufhash_t h = 0;
  uint8_t c = 0;
  for (size_t i = 0, c = buffer[i]; i < size; i++)
    hash = c + (h << 6) + (h << 16) - h;
  return h;
}

void*
aligned_malloc(size_t alignment, size_t size)
{
  if (alignment < sizeof(void*)) {
    alignment = sizeof(void*);
  }

  // Allocate extra memory to store the original pointer and ensure alignment
  void* original = malloc(size + alignment + sizeof(void*));
  if (!original) {
    return NULL;
  }

  // Calculate aligned pointer location
  void* aligned = (void*)(((uintptr_t)original + alignment + sizeof(void*)) &
                          ~(alignment - 1));

  // Store the original pointer at index -1 of the aligned pointer
  ((void**)aligned)[-1] = original;

  return aligned;
}

void
aligned_free(void* ptr)
{
  if (!ptr) {
    return;
  }

  // Retrieve the original pointer stored at index -1
  void* original = ((void**)ptr)[-1];
  free(original);
}

TAGCELL
bytebuf_make(uint32_t cap)
{
  size_t total = (sizeof(uint32_t) * 2) + cap;
  uint8_t* raw = aligned_malloc(MEM_ALIGN, total);

  // Set length and capacity at start
  *(uint32_t*)(raw + 0) = 0;   // length = 0
  *(uint32_t*)(raw + 4) = cap; // capacity

  // Pointer to actual data
  uint8_t* buf = raw + 8;

  // Return tcell pointer with TAG_BYTEBUF
  return TAGCELL_Create((uintptr_t)buf, TAG_BYTEBUF);
}

TAGCELL
bytebuf_append(TAGCELL buf_tag, uint8_t* new_data, uint32_t n)
{
  uint32_t len = BYTEBUF_GetLen(buf_tag);
  uint32_t cap = BYTEBUF_GetCap(buf_tag);
  uint8_t* buf = BYTEBUF_GetBuf(buf_tag);

  // Check immutability
  if (cap == 0)
    return 0;

  // Grow if needed
  if (len + n > cap)
    return 0; // refuse to grow immutable buffers

  memcpy(buf + len, new_data, n);
  BYTEBUF_GetLen(buf_tag) += n;

  return buf_tag;
}

TAGCELL
bytebuf_concat(TAGCELL a, TAGCELL b)
{
  uint32_t len_a = BYTEBUF_GetLen(a);
  uint32_t len_b = BYTEBUF_GetLen(b);
  uint32_t total = len_a + len_b;

  // Create a new buffer (mutable)
  TAGCELL newbuf = bytebuf_make(total);
  if (!newbuf)
    return 0;

  memcpy(BYTEBUF_GetBuf(newbuf), BYTEBUF_GetBuf(a), len_a);
  memcpy(BYTEBUF_GetBuf(newbuf) + len_a, BYTEBUF_GetBuf(b), len_b);

  BYTEBUF_GetLen(newbuf) = total;
  return newbuf;
}

TAGCELL
bytebuf_immut_from(const uint8_t* src, uint32_t len)
{
  TAGCELL tcell = bytebuf_make(len);
  if (!tcell)
    return 0;

  memcpy(BYTEBUF_GetBuf(tcell), src, len);
  BYTEBUF_GetLen(tcell) = len;
  BYTEBUF_GetCap(tcell) = 0; // now it's immutable!
  return tcell;
}

void
bytebuf_free(TAGCELL buf_tag)
{
  if (!buf_tag)
    return;

  // Immutable buffers (cap == 0) may be shared or static — don't free
  if (BYTEBUF_IsImmutable(buf_tag))
    return;

  // The actual allocation starts 8 bytes before the data
  void* raw = (uint8_t*)TAGCELL_GetAddr(buf_tag) - 8;
  free(raw);
}
