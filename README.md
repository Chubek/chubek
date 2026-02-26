Hey ya'll good folks. I'm currently employed as a *language tooling & toolchain engineer* for Poyan Afzar. My job consists of developing new *tooling* and *toolchain*, and *extending* existing tools for static and dynamic analysis, compiling, and so on. A "language tooling & toolchain engineer" must ask him or herself "does there exist a mature tooling and toolchain for what people need, that fulfills their needs in this *specific way* that I intend?" --- and, if it exists -- and is mature enough to have an *extensibility substrate* (e.g. a plugin API) I provide extensions for it, or tools for extending it. If it exists, and is not mature enough, or does not exist at all, I build a tooling that does what the customer, or the market wants. But sometimes, if the tooling or toolchain exists, I'll provide an alternative that is packed with more features. My bread and butter is *extensibility* and *domain-driven design* --- and these two sometimes conflate. Think, a compiler were we specify optimizations via a declarative domain-specific language.

Welcome to my protfolio. These are the programs I've written over the years, that are presentable to a degree. Even the ones marked as "Terminated" still have useful code in them. 

Curse down below to find ways to contact me.

## Notable Work, Categorized by Language

### Multiple
|Topic|Assembly|C|Rust|Go|Python|Nim|JS|Repo|Description|Status|
|--|--|---|--|--|--|--|--|--|--|--|
|**Cryptography**|Neither|✓|✓|✓|✓|✓|✓|[PoxHash](https://github.com/chubek/PoxHash)|A block hash algorithm with high avalanche effect|Finished|
|**Bioinformatics**|Aarch64, x86-64|✓|✓|✘|✓|✘|✘|[TransGatacca](https://github.com/chubek/TransGatacca)|DNA/Protein [Reverse] Translator|Terminated|
|**Network**|x86-64|✓|✘|✘|✘|✘|✘|[Panah](https://github.com/Chubek/Panah)|A packet wrangler and tunnel|Suspended|

### Assembly
|Topic|x86-64|AArch64|Repo|Description|Status|
|-----|----|---|---|---|--|
|**Utility/Snippet**|✓|✓|[DJB2 Hash](https://gist.github.com/Chubek/22fe39609b13832626af153083f71043)|DJB2, a non-cryptographic hash function|Finished|
|**Metaprogramming**|✓|✓|[SpudMacs](https://gist.github.com/Chubek/36bdb1ff95d1633993f9ac18e3cdc44a)|Cross-architecture (x64 an a64) macros for GAS|Finished|
|**Utility/Subroutine**|✓|✓|[XUtils-1](https://gist.github.com/Chubek/ef006014a105f90bc6ac654ff0b10cd5)|PRNG for x86-64 Assembly and Hash for Aarch64 Assembly|Finished|
|**Metaprogramming**|✓|✘|[PommeMacs](https://gist.github.com/Chubek/c70554c88130b0ff665c7ceec684119a)|C Preprocessor macros to make cross-programming C and x64 Assembly easier|Finished|
|**Metaprogramming**|✓|✘|[MangoMacs](https://gist.github.com/Chubek/bc96fc7cff2d90cb255ccd973c5ca9e8)|Macros and Assembly Wrappers for Linux Syscalls|FInished|
|**Math/Calculus**|✓|✘|[Newton-Rhapson Intrinsics](https://gist.github.com/Chubek/7c62f186b5589cef16050c5e552d827e) | Newton-Rhapson method with Intel Intrinsics in C and Assembly| Finished |


### C

|Topic|Repo|Description|Status|
|---------|----|-----------|---|
|**Toolchain**|[CppheckData-Shims](https://github.com/Chubek/cppcheckdata-shims) | A shims library providing additional features to Cppcheck Addon API, plug *liblint*, a collection of over 40 addons for Cppcheck built with the library | Stable |
|**Programming Languages**|[Diyrbal](https://github.com/Chubek/diyrbal) | An interpreted language, for writing compilers, and doin' math | Daily Progress |
|**Deamons**| [LyKron](https://github.com/Chubek/lykron) | An implementation of `crond` | Nearly Done |
|**VMs**| [LyVM](https://gist.github.com/Chubek/f3d7268d873c3a6e7564565a69b92806) | A very small VM | Finished |
|**DSLs**| [ZephyrASDL](https://github.com/Chubek/ZephyrASDL) | An implementation of ZephyrASDL language, in C, targeting C | Finished |
|**Terminal/CLI**|[Mukette](https://github.com/Chubek/Mukette) | A Markdown pager in C | Finished |
|**Lex/Parse**|[SexpParse](https://gist.github.com/Chubek/d2f0ac9067521716d2ab31c93948e885) | An S-Expression Parser in C | Finished |
|**LanguageDev**| [YaccBoilerplate](https://gist.github.com/Chubek/f97c665d83bcd300ff9e7b2dd38022a5) | A Boilerplate for Yacc grammars | Finished |
|**Bioinformatics/LP**|[DynoGram](https://github.com/Chubek/DynoGram) | Nucleotide to Peptide translation using Lex/Yacc | Finished |
|**Memory**|[GCX](https://gist.github.com/Chubek/9b635453ec0efd79e3f50f3abff0dc45) | A header-only garbage collector, reference counting| Finished |
|**CompilerDev**|[Batmite](https://github.com/Chubek/Batmite) | A half-finished compiler project | Abandoned |
|**LanguageDev**| [Ekipp](https://github.com/Chubek/Ekipp) | A macro preprocessor language | Finished |
|**LanguageDev**| [Squawk](https://github.com/Chubek/Squawk) | A feature-rich AWK interpreter | WIP |
|**Grammars**|[ShibaJS1.h](https://gist.github.com/Chubek/17523b0c6c5f3aa86e69dcff99d8c3df)| A quick 'n dirty JSON parser|Finished|
|**Systems/Network**|[Slitherbrain](https://github.com/Chubek/Slitherbrain)|Pythcode code runner in C++|Suspended|
|**Graphics Programming**|[Bedlam Noise Apparatus](https://github.com/Chubek/Bedlam-Noise-Apparatus)|Noise-generating After Effects plugin|Finished|
|**Bioinformatics**|[pylibfastcompare](https://github.com/Chubek/pylibfastcompare)|Lazy-hamming multi-threaded DNA sequence deduper|Terminated|
|**Bioinformatics**|[pylibfastadedupe](https://github.com/Chubek/pylibfastadedupe)|Same as above, C++ version with updated perforomance|Terminated|
|**Network**|[HDTP](https://github.com/Chubek/HDTP)|WIP, Hyper Data Transfer Protocol spec and implementation|Indefinite Development|
|**Network**|[Kaibash](https://github.com/Chubek/Kaibash)|Very WIP proxy|Rough Draft|
|**Math**|[CUDA Gaussian Elimination](https://gist.github.com/Chubek/21fd8da623e2fdeb270530d2ec274150)|Gaussian elimination in CUDA|Finished|
|**System/Linux**|[xvDSO](https://gist.github.com/Chubek/3baffe48e8d57524d4924c75429a9eff) | Manually loading the vDSO by looking up auxillary vectors and parsing the ELF | Finished |
|**Systems/Tracing** | [Profiterole](https://github.com/Chubek/Profiterole) | An overhead-free profiler in C with native interface for Python | Mostly Done |
|**System/Shell**|[Broshelli](https://github.com/Chubek/Broshelli) | A shell for the browser (mostly experimental)|Experimental|
|**Memory**|[sGrant](https://gist.github.com/Chubek/6fa5cb170dd513a56e61460306b6d02f) | Static memory region grants based on A. Tannenbaum's paper | Finished |
|**System/Memory**|[Stackls](https://github.com/Chubek/Stackls) | List process stack frame in Win32 API and Linux | Finished |
|**UNIX/POSIX**|[Squash](https://github.com/Chubek/Squash) | A POSIX-ly shell | Terminated |
|**LKMs/Embedded**| [ClemoreVirtualDevice](https://gist.github.com/Chubek/c7ae971e37754a2e690ecddeb1ee8692) | Virtual keyboard driver for my keyremapper, Clemore | Finished |
|**Interpreters**| [Ruse](https://github.com/Chubek/ruse) | An implementation of Scheme, half-done, I wish to start over | To Startover |

### Rust

|Topic|Repo|Description|Status|
|---------|----|-----------|--|
|**Terminal/CLI**|[Nevermore](https://github.com/Chubek/nevermore)| A minimal terminal pager |Finished|
|**Electronics**|[Scheesim](https://github.com/Chubek/Scheesim)|Electronics circuit simulator similar to SPICE|Indefinite Development|
|**Network**|[Samovar](https://github.com/Chubek/Samovar)|HTTP 1.1 framework, WIP|Revision Considered|
|**Network**|[rusty-csv-protcol](https://github.com/Chubek/rusty-csv-protocol)|Application-level protcol|Finished|
|**Cryptography**|[hmac-tree](https://github.com/chubek/hmac-tree)|Merkle trees with HMAC|Finished|
|**Network**|[rusty-you-dee-pee](https://github.com/chubek/rusty-you-dee-pee)|UDP implementation, WIP|Indefinite Development|
|**Bioinformatics**|[pn2codon](https://github.com/chubek/pn2codon)|Revese-Translate Protein to DNA|Finished|
|**Graphics Programming**|[Rusty Random Pattern Generator](https://github.com/Chubek/rusty-random-pattern-generator)|Pattern generator|Finished|
|**Graphics Programming**|[NaqshSmit Renderer](https://github.com/Chubek/NaqshSmith-Renderer)|Software rendered, concept|Terminated|
|**Automation**|[rusty-bot-swarm](https://github.com/Chubek/rusty-bot-swarm)|Prototype for Twitter bot pre-Musk|Terminated|
|**Graphics Programming**|[Expelligraphicus](https://github.com/Chubek/Expelligraphicus)|Another concept for a rasterizer|Finished|
|**Automation**|[Upsc3ne](https://github.com/Chubek/upsc3ne)|An early Rust code, an obscenity detector|Terminated|
|**Math**|[auster-integer](https://github.com/Chubek/auster-integer)|Big math WIP|Indefinite Development|
|**Bioinformatics**|[PhyMMR Tools](https://github.com/Chubek/blosum_distance)|FFI tools for PhyMMR, some by me|Stale|
|**Classical Vision**|[SummerSavory](https://github.com/Chubek/SummerSavory)|Shape irregularity index score, WIP|Stale|

### OCaml
|Type|Repo|Description|Status|
|----|----|-----------|------|
|**Combinatory Logic**|[GourmetParsec](https://gist.github.com/Chubek/bf29e6671cdc9637c401becca90c7bdf)|A parser combinator in OCaml|Finished|
|**Formalism**| [Pascal-Syntax](https://gist.github.com/Chubek/65220b27f5dcc0cd696b84e166b8ab90) | Pascal syntax formalization in OCaml |Non-Exec| 
|**LISP**| [the Guillmet Scheme](https://github.com/Chubek/Guillmet) | A subset of Scheme | Super-adctive Development! |
|**Biology**| [Punnette.ml](https://gist.github.com/Chubek/40e67b2bddd15d6c08b1e62cb9a03789) | Computing the Punnette square | One-off |

### Python

|Topic|Repo|Description|Status|
|---------|----|-----------|---|
|**AI Vision**|[PuertoRECO](https://github.com/Chubek/PuertoRECO)|Face recognition framework|Finished|
|**Automation**|[potpourri](https://github.com/Chubek/potpourri) |Web scraping framework|Finished|
|**AI NLP**|[WillSh3B33](https://github.com/Chubek/will-sh3-b33)|AI model deployed with a frontend|Finished|
|**AI Classical**|[Arriv-O-Pred](https://github.com/Chubek/Arriv-O-Pred)|Train time arrival prediction|Finished|
|**Automation**|[PerioDetect](https://gist.github.com/Chubek/0a2b0e858e12a74fdb1ea1375ef8cb26)|Period (I mean dot!) detection script|Finished|
|**AI Auditory**|[SongOfSprockets](https://github.com/Chubek/SongOfTheSprockets)|Voice conversion tool|Finished|
|**AI NLP**|[ClickBait Generator](https://github.com/Chubek/clickbait-generator)|Very simple clickbait AI model Colab notebook|Finished|
|**Vision Classical**|[intresignia](https://github.com/chubek/intresignia)|Red traffic sign detection|Finished|
|**Math**|[pyramid-anomaly-detection](https://github.com/Chubek/pyramid-anomally-detection)|Anomaly detection tool for Python, vetorized|Finished|
|**Network**|[Stinky](https://gist.github.com/Chubek/fd67206b69d69862d756a5b82310a9ce)|Simple Python API with custom HTTP backend|Finished|
|**Math**|[BitwiseWord](https://gist.github.com/Chubek/0753f01ff53b2e083325441db3d13f88)|Bitwise operations on word-sized binary lists|Finished|
|**Linux Utility**|[Delphia Scripts](https://gist.github.com/Chubek/5e45ae19565980cb3d7dd6e452c9357a)|Sripts for my brother|Active Development|
|**Byte Utils**|[LazySplit](https://gist.github.com/Chubek/efa7f74dda28507ffafd395bff5a56fd)|Lazy string/bytearray splitting in Python|Finished|
|**Bioinformatics**|[CodonEncode](https://gist.github.com/Chubek/cf634f200b33fef537bd8c2f04063d90)|Assembly-friendly Cododn encoding|Finished|
|**Bioinformatics**|[ProteinToCodonTranslator](https://github.com/Chubek/ProteinToCodoneTranslator)|Frontend for pn2codon|Finished|
|**Zinteger**|[Zinteger](https://gist.github.com/Chubek/27eec6435df6b30684dee201dc5edf4b#other-projects)|Dynamically-generated typed integers|Finished|
|**Internet Protocol**|[DNSRezulf](https://gist.github.com/Chubek/1fb8997bed45d744342a8a28fdcde749) | A DNS Resolver in Python | Finished

### Go

|Topic|Repo|Description|Status|
|---------|----|-----------|--|
|**Network**|[mathcord](https://github.com/Chubek/mathcord)|Discord bot with everything written from scratch|Finished|
|**Automation**|[CroonJoobGoo](https://github.com/Chubek/CroonJoobGoo)|SQL cron job|Finished|
|**Network**|[ProtoGen](https://github.com/Chubek/Protogen)|Application-layer protocols in Go|Expansion Considered|

### Perl

|Topic|Repo|Description|Status|
|-----|----|-----------|------|
|**Lexical/Syntactic Recognition** | [AurocksLL](https://gist.github.com/Chubek/294547e247061bbaccf04e0377425a90) | An LL(1) parser and lexer generator in Perl | Definite Development |
| **Domain-Specific Language** | [AllocPP](https://gist.github.com/Chubek/b2846855e5bb71a67c7e3effc6beefd6) | A Perl script that preprocesses C and prepares for static heap allocation (Note: AllocPPx superceeds it) | Finished
| **Domain-Specific Language** | [ErrorPP](https://gist.github.com/Chubek/db1e1084ce4439ba40eb8f758b774b46) | A Perl script that preprocesses C and generates warning/error functions | Finished |
| **Domain-Specific Language** | [AllocPPx](https://gist.github.com/Chubek/73d842c21cd5aa6cff8feb1fc8a602a6) | A preprocessor for C written in Perl, that adds garbage collection heaps with reference counting and mark and sweep | Finished |
| **Domain-Specific Language** | [Preprocess.pl](https://gist.github.com/Chubek/c1e7520d1f13c4a7b487578d4e3d5acf) | Preprocess files | Finished |
| **Documentation Languages** | [PostScript-ManPages](https://github.com/Chubek/postscript-manpages) | Manpages for Postscript --- Please also see [PostScript Dossier](https://github.com/Chubek/postscript-dossier) | Finished |

### Ruby

|Topic|Repo|Description|Status|
|-----|----|-----------|------|
| **Domain-Specific Language** | [Witty](https://gist.github.com/Chubek/1fa1c037d280dfc7952676cb4ee89e11) | A .git/index file parser | Finished |
| **Lex/Parse** | [J2Sexp](https://gist.github.com/Chubek/60f91a50147103e0c989a9b755376cd9) | Convert JSON files to S-Expressions | Finished |

### Scheme

|Topic|Repo|Description|Status|
|-----|----|-----------|------|
| **Tokenizers**|[EBNF Tokenizer](https://gist.github.com/Chubek/4442bf73f284eabfe87a72dcdc1d8ebe)| A tokenizer for EBNF meta-language | Finished |
| **Domain-Specigic Language** | [FewlPP](https://gist.github.com/Chubek/987e12ec0a2da7ba1ae01fccc6968578) | A Racket script that preprocesses C and generates Fork-Exec-Wait loops | Finished |
| **Hygenic Macros** | [Schemeroni](https://gist.github.com/Chubek/b8318a2e68d9a54f2291d98cdb6bfd08) | Useful Scheme macros | Always Active |

### D

|Topic|Repo|Description|Status|
|-----|-----|----|----|
|**Lexing & Parsing**|[Ramkal](https://gist.github.com/Chubek/c4f23698d883bc2968f64bbf4174e6b7)|A recursive-descent, hand-rolled parser for the ISO variant of the Pascal language|Experimental|
| **Systems** | [Zwyn](https://github.com/Chubek/Zwyn) | A Version Control System in D | Terminated |

### ECMA-262 and Variants
|Language|Topic|Repo|Description|Status|
|--------|-----|----|-----------|---|
|Mobile ECMA-262 ('VanillaJS')|**Browser Addon**|[FourChidori](https://github.com/Chubek/FourChidori)|A browser add-on for 4chan|Finished|
|Resident ECMA-262 ('NodeJS')|**Databases**|[Mongoose Jumblator](https://github.com/Chubek/mongoose-jumblator)|A plugin for Mongoose for encrpyting MongoDB|Finished|
|AdobeExtendScript|**Extensions**|[cep-panel](https://github.com/Chubek/cep-panel-for-carlo) and its [backend](https://github.com/Chubek/backend-carlo)|Concept projects for an Adobe | Stillborn |

### TeX/LaTeX
| Topic | Repo | Description | Status |
| ------ | ----- | ----- | ----- |
| **Configuration Management** | [SimpleCNF](https://gist.github.com/Chubek/ea179729b796debb5afe129639ad1889) | INI-like configuration management in LaTeX | Finished |
| **Special Typesetting**| [SimpleTRS](https://gist.github.com/Chubek/1f191c859e9a6af45a1d34a752b31e05) | A small LaTeX package for typesetting Term-rewriting systems | Finished|


## Other Languages

|Language|Topic|Repo|Description|Status|
|--------|-----|----|-----------|---|
|AWK | **Bioinformatics** |[TripCount](https://gist.github.com/Chubek/db779e5d92aadccbca1a8a25b4a55e20)| Nucleotide triplet counter in AWK | Finished |
|Bash|**System Script**|[DynoFiler](https://gist.github.com/Chubek/f81cfd71825f8db5eea7146b5030df7f)|Script for wrapaping line_profiler around PhyMMR|Finished|
|Nim|**ClassicalLearning**|[Pong Q-Learning](https://github.com/Chubek/pong-q-learning-nim)|A test project in Nim|Finished|
|VimScript | **Utility** | [EBNFVim](https://gist.github.com/Chubek/886580036f37bda5d6023595821afa51) | VimScript specifications for EBNF | Finished |
|Lua|**Combinatory Logic**| [Combinatory Logic Zoo](https://gist.github.com/Chubek/7b8118f44a2ae80fd864121cdc6692f4)|A small zoo of combinatory logic|Finished|

## My AI-Generated Projects
- [luaROFF](https://github.com/Chubek/luaROFF) --- a preprocessor for GROFF that embeds Lua

## How to Contact Me

* Homepage -> https://let-over-lambda.com
* Discord -> [.chubak](https://discord.com/users/358017130408706069)
* Telegram -> [@bidpaafx](https://t.me/bidpaafx)
* Email -> sami.dena93@gmail.com | chubakbidpaa@riseup.net


Thanks, and please take care.

