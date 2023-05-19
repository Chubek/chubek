# Chubak Bidpaa's Libre Project Showcase

Welcome to my Github profile, where I host git repositoriies of my libre projects. Please use the menu below to navigate to the several interweaving sections of this document. All the repos listed in this page are released under either GPLv3 or MIT license.

* [Introduction](#introduction)
* [Special Showcase](#special-showcase)
* [Projects by Topic](#projects-by-topic)
* * [Eclectic Engineering](#eclectic-engineering)
* * * [Electronics and Embedded Programming](#electronics-and-embedded-programming)
* * * [Math](#math)
* * * [Cryptography](#cryptography)
* * * [Bioinformatics](#bioinformatics)
* * * [Machine Learning, Auditory and Vision](#machine-learning-auditory-and-vision)
* * [Systems and Network](#systems-and-network)
* * * [Web and System Automation](#web-and-system-automation)
* * * [Networking, Internet, and Web](#networking-internet-and-web)
* * [Graphics Programming and Gaming](#graphics-programming-and-gaming)
* * [Small Projects in Gist](#small-projects-in-gist)
* * [Projects I Contribute to](#projects-i-contribute-to)
* [Codes and Projects by Language](#codes-and-projects-by-language)
* * [Multilingual](#multilingual)
* * [Assembly](#assembly)
* * [C](#c)
* * [Rust](#rust)
* * [Python](#python)
* * [Go](#go)
* * [Misc.](#misc)
* [Hiring Rates](#hiring-rates)
* [Donation](#donation)
* [Sites and Social Media](#sites-and-social-media)


# Introduction

I have had a long journey in programming, started at 16 by making simple games, jumped around a bit, went to college for a while, and started work a few years back.

My main focus is **systems programming**, **network programming** and **scientific programming**. My systems and scientific applications are coded in **x86-64/Aarch64 Assembly** and **C**, my network applications are coded in **Rust** and **Go** and I use **Python** and **Bash** for scripting system utilities. Other languages I have often worked with are JavaScript and Nim. 

My discipline is code optimization. I have been brought to projects with poor-performing code and I boosted them up in terms of speed and performance. I achieve speed in every language by writing FFIs in lower-level languages. For C, I use Assembly. For Rust and Go, I use C and Assembly. And for Python I use C and Rust. I have a good understanding of virtual memory, the parts of which a process in a Unix-like system are made, linking and compiling. I also follow strict rulse for documentation etiquette and providing an easy interface for the user.

My experience is exlusively with Linux, and totem pro parte, all Unix-like and/or POSIX-compliant operating systems. 

This profile serves as a place for all my Github projects, and as a portfolio for potential employers. If I am available, I am free to do projects. You can view my current rates [below](#hiring-rates).

Also, I do own several bench-top electronics equipment. An ocilloscope, a bench-top PSU, a function generator, and I own several hundreds of pieces of electronics equipment, and some embedded hardware such as an Arduino --- my knowledge of both CISC and RISC architectures combined with my knowledge of systems can be levereged to yield embedded projects, preferably ones heavy on hardware. If you have such project I am willing to accept a considerable cut in payment.

# Special Showcase

Below are some of my curated sizable projects that you will find more details about in the latter sections, and inside their repository as well:

* [PoxHash](https://github.com/chubek/PoxHash) -> A custom block hashing algorithm implemented in C, Rust, Go, Nim, Python and JS
* [TransGatacca](https://github.com/chubek/TransGatacca) -> A DNA/Protein [Reverse] Translator, ABI in Aarch64 and x86-64 Assembly with C/Rust/Python API
* [mathcord](https://github.com/Chubek/mathcord) -> A Discord bot in Go with Shunting Yard, SHA-512 and Edwards-512 implemented manually
* [PuertoRECO](https://github.com/Chubek/PuertoRECO) -> A face recognition system with liveness decetion in Python
* [ProtoGen](https://github.com/Chubek/Protogen) -> A series of generic application-layer protocols in Go
* [Samovar](https://github.com/Chubek/Samovar) -> A WIP web framework in Rust
* [Slitherbain](https://github.com/Chubek/Slitherbrain) -> A WIP C project, is a Python code executor API with custom HTTP framework

And below are some of my special small code pieces in Github Gist form:

* [DJB2-ASM](https://gist.github.com/Chubek/22fe39609b13832626af153083f71043) -> An implementation DJB2 hash in Aarch64 and x86-64 assembly languages
* [CodonEncode](https://gist.github.com/Chubek/cf634f200b33fef537bd8c2f04063d90) -> A way to encode Codon table in 8bit and 64bit integers
* [Go MD5](https://gist.github.com/Chubek/8a41b8f1b624ab9312190521d5596757) -> An implementation of MD5 in Go
* [DynoFiler](https://gist.github.com/Chubek/f81cfd71825f8db5eea7146b5030df7f) -> A metaprogram in Bash for Python's line_profiler
* [XUtils-1](https://gist.github.com/Chubek/ef006014a105f90bc6ac654ff0b10cd5) -> PRNG for x86-64 Assembly and Hash for Aarch64 Assembly
* [DNSRezulf](https://gist.github.com/Chubek/1fb8997bed45d744342a8a28fdcde749) -> A DNs Resolver in Python

I have many more projects you can view below.

# Projects by Topic

## Eclectic Engineering

### Electronics and Embedded Programming

* [Scheesim](https://github.com/Chubek/Scheesim) -> A WIP electronics circuit simulator written entirely in Rust. As of this moment, the linear an algebraic equation solution systems have been written. Parser is at work. Next is the element stamps. Is it like SPICE? Well, kind of! You be the judge when it's done.

### Math
* [auster-integer](https://github.com/Chubek/auster-integer) [WIP] -> Big Math library. Right now contains implementations for binary operations only.

### Cryptography

* [PoxHash](https://github.com/chubek/PoxHash) -> My very own block hashing algorithm implemented in Go, Rust, Python, Nim, JS, and C.

### Bioinformatics
* [ProteinToCodonTranslator](https://github.com/Chubek/ProteinToCodoneTranslator) and [pn2codon](https://github.com/Chubek/pn2codon) -> Translating Amino Acid PEPs to Dash-Aligned Codons, FFI for Python in Rust.
* [pylibfastcompare](https://github.com/Chubek/pylibfastcompare) -> Lazy Hamming written in C for Python for bioinformatics.
* [pylibfastadedupe](https://github.com/Chubek/pylibfastadedupe) -> Successor to pylibfastcompare (note: one is 'fast'compare one is 'fasta'dedupe.
* [PhyMMR Tools](https://github.com/Chubek/blosum_distance) -> Tools for PhyMMR in Rust. Most of it is done by @mvalentine but I did some stuff too.

### Machine Learning, Auditory and Vision

* [PuertoRECO](https://github.com/Chubek/PuertoRECO) -> Despite the lame pun, this is a very intricate face recognition API. It's in Python so it's not very fast. In the recent months I have decided to do less and less projects in Python because of how slow and inefficient it is. But if you are going to give me a job in Python I will do it. I especially like training using Python and predicting and doing the MLOps in Rust or Go.
* [WillSh3B33](https://github.com/Chubek/will-sh3-b33) -> Basically a backend and a fronted for a model I made. This shows my skills in MLOps. The model itself, it's not very strong but I have learned a lot about training and structuring models since then.
* [Arriv-O-Pred](https://github.com/Chubek/Arriv-O-Pred) -> Basic train time arrival tool which Felix helped me make in my early days. After Tanami, I owe most my professional life to Felix. This man's a behemoth of ML!
* [SongOfSprockets](https://github.com/Chubek/SongOfTheSprockets) -> A voice conversion tool using GMM, a fork of Sprocker-VC with a UI using Dear Imgui.
* [ClickBait Generator](https://github.com/Chubek/clickbait-generator) -> A very simple click-bait generator project.
* [pyramid-anomaly-detection](https://github.com/Chubek/pyramid-anomally-detection) -> Anomaly detection in Python that makes heavy use of vectorization.
* [intresignia](https://github.com/chubek/intresignia) -> Traffic sign detection.
* [SummerSavory](https://github.com/Chubek/SummerSavory) -> Shape irregularity index score, contains implementation of several algorithms in classical vision, WIP

## Systems and Network

### Web and System Automation
* [Upsc3ne](https://github.com/Chubek/upsc3ne) -> An obscenity detector written in Rust. It's kinda incomplete but already contains implementation for Levenshtein distance and fuzzy string matching.
* [mathcord](https://github.com/Chubek/mathcord) -> My pride and joy. A Discord math bot that includes CUSTOM implementation of Edwards-25519, SHA-512, Shunting Yard and communication with Discord API.
* [potpourri](https://github.com/Chubek/potpourri) -> A webscraper library for Python. Can search Google too. Can do a lot of stuff.
* [CroonJoobGoo](https://github.com/Chubek/CroonJoobGoo) -> A cron job automator written entirely in Go. Right now it only does SQL queries/commands.
* [rusty-bot-swarm](https://github.com/Chubek/rusty-bot-swarm) -> Intricate bot project.
* [Kaibash](https://github.com/Chubek/Kaibash) -> Very WIP Proxy in C
* [ProtoGen](https://github.com/Chubek/Protogen) -> A couple of application-layer potocols in Go. First is ProtoQuore (TCP) and the second is ProtoDir (
UDM). I will add a UDP one soon I just need an idea.
* [Slitherbain](https://github.com/Chubek/Slitherbrain) -> Python code runner in C++. It is WIP but nearly done.

### Networking, Internet, and Web
* [Samovar](https://github.com/Chubek/Samovar) -> A full-fledged Web Framework in Rust that I keep working on until it becomes viable.
* [Mongoose Jumblator](https://github.com/Chubek/mongoose-jumblator) -> A Typescript NPM package that encrypts MongoDB database content.
* [rusty-csv-protcol](https://github.com/Chubek/rusty-csv-protocol) -> A protocol in the application layer of OSI.
* [hmac-tree](https://github.com/chubek/hmac-tree) -> Merkle Trees, but with HMAC! Also contains the implementation of SHA-512 and HMAC besdies MT.
* [rusty-you-dee-pee](https://github.com/chubek/rusty-you-dee-pee) -> UDP implementation in Rust with a TAP/TUN interface, includes implementation of IPv4 too, sends packets without a link layer.
* [FourChidori](https://github.com/Chubek/FourChidori) -> A browser extension for 4chan.
* [HDTP](https://github.com/Chubek/HDTP) -> A WIP application-layer protocol in C. The spec document is not exactly going to be what it's going to be. But it should give you a clear idea. It's almost 40% complete, the lexer/parser is done for config files.
* [Panah](https://github.com/Chubek/Panah) -> A packet wrangler and tunnel in C and Assembly.

## Graphics Programming and Gaming
* [Expelligraphicus](https://github.com/Chubek/Expelligraphicus) -> Software rasterizer [WIP]
* [Bedlam Noise Apparatus](https://github.com/Chubek/Bedlam-Noise-Apparatus) -> A pretty solid After Effects plugin that generates noise using OpenGL and GLSL. I think it's one of the few FOSS After Effects plugins out there.
* [Rusty Random Pattern Generator](https://github.com/Chubek/rusty-random-pattern-generator) -> A simple pattern generator in Rust.
* [Pong Q-Learning](https://github.com/Chubek/pong-q-learning-nim) -> This is a composite of ML and Game Dev. It uses Reinforcement learning to play Pong. Written in Nim using SDL.
* [cep-panel](https://github.com/Chubek/cep-panel-for-carlo) and its [backend](https://github.com/Chubek/backend-carlo) -> Invisible Adobe Premiere Panel and its backend.
* [NaqshSmit Renderer](https://github.com/Chubek/NaqshSmith-Renderer) -> A software renderer, it's currently WIP and right now I am just following tutorials to get a foothold in rendering algos. But soon it will spiral into something worthwhile.


## Small Projects in Gist
* [CUDA Gaussian Elimination](https://gist.github.com/Chubek/21fd8da623e2fdeb270530d2ec274150)
* [DynoFiler](https://gist.github.com/Chubek/f81cfd71825f8db5eea7146b5030df7f) -> A wrapper for line_profiler around PhyMMR for easier profiling.
* [PerioDetect](https://gist.github.com/Chubek/0a2b0e858e12a74fdb1ea1375ef8cb26) -> For removing period-terminated sequences from FASTA files (made for PhyMMR but anyone can use it).
* [Stinky](https://gist.github.com/Chubek/fd67206b69d69862d756a5b82310a9ce) -> An extremely small Morse Code translator API with a custom HTTP framework, built upon Python Streaming API
* [BitwiseWord](https://gist.github.com/Chubek/0753f01ff53b2e083325441db3d13f88) -> A small script, bitwise operations in Python on words, on binary lists of size 16
* [Delphia Scripts](https://gist.github.com/Chubek/5e45ae19565980cb3d7dd6e452c9357a) -> Utility for my brother
* [Go MD5](https://gist.github.com/Chubek/8a41b8f1b624ab9312190521d5596757) -> MD5 Implementation in Go
* [LazySplit](https://gist.github.com/Chubek/efa7f74dda28507ffafd395bff5a56fd) -> Lazy string/bytearray splitting in Python.
* [CodonEncode](https://gist.github.com/Chubek/cf634f200b33fef537bd8c2f04063d90) -> Assembly-friendly encoding for Codons tables and their frequency.
* [Zinteger](https://gist.github.com/Chubek/27eec6435df6b30684dee201dc5edf4b#other-projects) -> Typed ctypes integers wrappers, dynamically-generated.
* [DJB2-ASM](https://gist.github.com/Chubek/22fe39609b13832626af153083f71043) -> An implementation DJB2 hash in Aarch64 and x86-64 assembly languages.
* [SpudMacs](https://gist.github.com/Chubek/36bdb1ff95d1633993f9ac18e3cdc44a) -> Cross-architecture (x64 an a64) macros for GAS.
* [XUtils-1](https://gist.github.com/Chubek/ef006014a105f90bc6ac654ff0b10cd5) -> PRNG for x86-64 Assembly and Hash for Aarch64 Assembly
* [DNSRezulf](https://gist.github.com/Chubek/1fb8997bed45d744342a8a28fdcde749) -> A DNs Resolver in Python


## Projects I Contribute to
* [Cherry-Node](https://github.com/CherryNetwork/Cherry-Node) -> for my work in Cherry.
* [PhyMMR](https://github.com/Thernn88/PhyMMR/) -> A bioinformatics project that I actively participate to for my work.

# Codes and Projects by Language

## Multilingual
|Topic|Assembly|C|Rust|Go|Python|Nim|JS|Repo|Description|Status|
|--|--|---|--|--|--|--|--|--|--|--|
|**Cryptography**|Neither|✓|✓|✓|✓|✓|✓|[PoxHash](https://github.com/chubek/PoxHash)|A block hash algorithm with high avalanche effect|Finished|
|**Bioinformatics**|Both|✓|✓|✘|✓|✘|✘|[TransGatacca](https://github.com/chubek/TransGatacca)|DNA/Protein [Reverse] Translator|Active Development|
|**Network**|x64|✓|✘|✘|✘|✘|✘||[Panah](https://github.com/Chubek/Panah)|A packet wrangler and tunnel|Suspended|

## Assembly
|Topic|x86-64|Aarh64|Repo|Description|Status|
|-----|----|---|---|---|--|
|**Utility/Snippet**|✓|✓|[DJB2 Hash](https://gist.github.com/Chubek/22fe39609b13832626af153083f71043)|DJB2, a non-cryptographic hash function|Finished|
|**Metaprogramming**|✓|✓|[SpudMacs](https://gist.github.com/Chubek/36bdb1ff95d1633993f9ac18e3cdc44a)|Cross-architecture (x64 an a64) macros for GAS|Finished|
|**Utility/Subroutine**|✓|✓|[XUtils-1](https://gist.github.com/Chubek/ef006014a105f90bc6ac654ff0b10cd5)|PRNG for x86-64 Assembly and Hash for Aarch64 Assembly|Finished|

## C

|Topic|Repo|Description|Status|
|---------|----|-----------|---|
|**Systems/Network**|[Slitherbrain](https://github.com/Chubek/Slitherbrain)|Pythcode code runner in C++|Indefinite Development|
|**Graphics Programming**|[Bedlam Noise Apparatus](https://github.com/Chubek/Bedlam-Noise-Apparatus)|Noise-generating After Effects plugin|Finished|
|**Bioinformatics**|[pylibfastcompare](https://github.com/Chubek/pylibfastcompare)|Lazy-hamming multi-threaded DNA sequence deduper|Terminated|
|**Bioinformatics**|[pylibfastadedupe](https://github.com/Chubek/pylibfastadedupe)|Same as above, C++ version with updated perforomance|Terminated|
|**Network**|[HDTP](https://github.com/Chubek/HDTP)|WIP, Hyper Data Transfer Protocol spec and implementation|Indefinite Development|
|**Network**|[Kaibash](https://github.com/Chubek/Kaibash)|Very WIP proxy|Rough Draft|
|**Math**|[CUDA Gaussian Elimination](https://gist.github.com/Chubek/21fd8da623e2fdeb270530d2ec274150)|Gaussian elimination in CUDA|Finished|

## Rust

|Topic|Repo|Description|Status|
|---------|----|-----------|--|
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
|**Bioinformatics**|[PhyMMR Tools](https://github.com/Chubek/blosum_distance)|FFI tools for PhyMMR, some by me|Active Development|
|**Classical Vision**|[SummerSavory](https://github.com/Chubek/SummerSavory)|Shape irregularity index score, WIP|Active Development|


## Python

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
|**Internet Protocol**|[DNSRezulf](https://gist.github.com/Chubek/1fb8997bed45d744342a8a28fdcde749) | A DNs Resolver in Python | Finished

## Go

|Topic|Repo|Description|Status|
|---------|----|-----------|--|
|**Network**|[mathcord](https://github.com/Chubek/mathcord)|Discord bot with everything written from scratch|Finished|
|**Automation**|[CroonJoobGoo](https://github.com/Chubek/CroonJoobGoo)|SQL cron job|Finished|
|**Network**|[ProtoGen](https://github.com/Chubek/Protogen)|Application-layer protocols in Go|Expansion Considered|

## Misc.

|Language|Topic|Repo|Description|Status|
|--------|-----|----|-----------|---|
|VanillaJS|**Browser Addon**|[FourChidori](https://github.com/Chubek/FourChidori)|A browser add-on for 4chan|Finished|
|NodeJS|**Databases**|[Mongoose Jumblator](https://github.com/Chubek/mongoose-jumblator)|A plugin for Mongoose for encrpyting MongoDB|Finished|
|AdobeExtendScript|**Extensions**|[cep-panel](https://github.com/Chubek/cep-panel-for-carlo) and its [backend](https://github.com/Chubek/backend-carlo)|Concept projects for an Adobe Premiere panel|Terminated|
|Bash|**System Script**|[DynoFiler](https://gist.github.com/Chubek/f81cfd71825f8db5eea7146b5030df7f)|Script for wrapaping line_profiler around PhyMMR|Finished|
|Nim|**ClassicalLearning**|[Pong Q-Learning](https://github.com/Chubek/pong-q-learning-nim)|A test project in Nim|Finished|

# Hiring Rates

All prices listed below are entirely negotiable, within reason, of course.

|Length|Type|Minimum|Maximum|
|------|----|-------|-------|
|Long|Systems|400 USD Bi-weekly|800 USD Bi-weekly|
|Long|Network|350 USD Bi-weekly|650 USD Bi-weekly|
|Long|Scientific Programming|450 USD Weekly|500 USD Bi-weekly|
|Medium|Systems|300 USD Weekly|400 USD Weekly|
|Medium|Network|200 USD Weekly|350 USD Weekly|
|Medium|Scientific Programming|250 USD Weekly|450 USD Weekly|
|Short|Systems|100 USD Daily|300 USD Daily|
|Short|Network|50 USD Daily|150 USD Daily|
|Short|Scientific Programming|200 USD Daily|300 USD Daily|

Bi-weekly means every two weeks.

# Donation

If you like my work, please consider donating any amount to these wallets:

Ethereum and Binance Network:
```
0x503A3B99c0c086fD81186a0d5ac815eBd15e5983
```

TRX:
```
TABihfZH9tHWJnCDAK3tkpFwmSxocgn25A
```

BTC:
```
13xM3LbEFjbjwMSAs9Ybz4T6pdmJtB8F9m
```

BEP2 address and tags:
```
BEP2 Address -> bnb13eqrynp3rls3m6dsw58d3y5l7z6zfdw5zj3sdy
BEP2 Tag -> 136103027
```

Your donation is appreciated, and is delegated towards development of stiff libre software. Thanks in advance in case you make a donation!

# Sites and Social Media

* Website -> https://chubakbidpaa.com
* Twitter -> [@gvlside](https://twitter.com/gvlside)
* Discord -> [Chubak#7400](https://discord.com/users/358017130408706069)
* Telegram -> [@bidpaafx](https://t.me/bidpaafx)
* Email -> chubakbidpaa@gmail.com


Thanks, and please take care.

