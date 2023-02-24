# Chubak Bidpaa: The GentleChud's GentleChud

Welcome to my Github profile. Please use the menu below to navigate to the several interweaving sections of this document. 

* [Introduction](#introduction)
* [Markdown Codicies and Parchments](#markdown-codices-and-parchments)
* [Donation ❤️](#donation-%EF%B8%8F)
* [Projects by Topic](#projects-by-topic)
* * [Eclectic Engineering](#eclectic-engineering)
* * * [Electronics and Embedded Programming](#electronics-and-embedded-programming)
* * * [Math](#math)
* * * [Bioinformatics](#bioinformatics)
* * * [Machine Learning, Auditory and Vision](#machine-learning-auditory-and-vision)
* * [Systems and Network](#systems-and-network)
* * * [Web and System Automation](#web-and-system-automation)
* * * [Networking, Internet, and Web](#networking-internet-and-web)
* * [Graphics Programming and Gaming](#graphics-programming-and-gaming)
* * [Small Projects in Gist](#small-projects-in-gist)
* * [Projects I Contribute to](#projects-i-contribute-to)
* [Codes and Projects by Language](#codes-and-projects-by-language)
** [C/C++](#cc++)
** [Rust](#rust)
** [Python](#python)
** [Go](#go)
** [Misc.](#misc)
* [Sites and Social Media](#sites-and-social-media)


# Introduction

My name is Chubak. Notice that it's not my real name but it's the name I want to go by. I am a systems and network programmer with interest in AI, automation and graphics. I wish to have a sidegig in electronics that is why I am writing an electronics simulator. I code in C/C++, Go, Rust, Python, Nim, and JS.

This profile serves as a place for all my Github projects, and as a portfolio for potential employers.

# Markdown Codicies and Parchments

My [MDCodices](https://github.com/Chubek/mdcodices) repository serves as a safekeep for all my scribblings about programming and electronics. I call them 'Markdown Codicies & Parchments' because I imagine myself as a 12th century monk and ascribe, or a 10th century Persian polymath, or a -3rd century Greek philosopher, you get the gist, scribbling on a paper for the future scholars to decode. 

# Donation ❤️
I would like to think there are some people who have made good use of my projects, and may wanna buy me a coffee or stuff like that. I don't have access to international banking but you can always make a donation to my physical wallet address, BEP-20 and ERC-20 (Binance and Etherum) supported. I will soon add my Payeer account as well. Here it is:
`0x503A3B99c0c086fD81186a0d5ac815eBd15e5983`

# Projects by Topic

## Eclectic Engineering

### Electronics and Embedded Programming

* [Scheesim](https://github.com/Chubek/Scheesim) -> A WIP electronics circuit simulator written entirely in Rust. As of this moment, the linear an algebraic equation solution systems have been written. Parser is at work. Next is the element stamps. Is it like SPICE? Well, kind of! You be the judge when it's done.

### Math
* [auster-integer](https://github.com/Chubek/auster-integer) [WIP] -> Big Math library. Right now contains implementations for binary operations only.

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
* [intresignia](https://github.com/chubek/intresignia) Traffic sign detection.

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

### Networking, Internet, and Web
* [Samovar](https://github.com/Chubek/Samovar) -> A full-fledged Web Framework in Rust that I keep working on until it becomes viable.
* [Mongoose Jumblator](https://github.com/Chubek/mongoose-jumblator) -> A Typescript NPM package that encrypts MongoDB database content.
* [rusty-csv-protcol](https://github.com/Chubek/rusty-csv-protocol) -> A protocol in the application layer of OSI.
* [hmac-tree](https://github.com/chubek/hmac-tree) -> Merkle Trees, but with HMAC! Also contains the implementation of SHA-512 and HMAC besdies MT.
* [rusty-you-dee-pee](https://github.com/chubek/rusty-you-dee-pee) -> UDP implementation in Rust with a TAP/TUN interface, includes implementation of IPv4 too, sends packets without a link layer.
* [FourChidori](https://github.com/Chubek/FourChidori) -> A browser extension for 4chan.
* [HDTP](https://github.com/Chubek/HDTP) -> A WIP application-layer protocol in C. The spec document is not exactly going to be what it's going to be. But it should give you a clear idea. It's almost 40% complete, the lexer/parser is done for config files.


## Graphics Programming and Gaming
* [Expelligraphicus](https://github.com/Chubek/Expelligraphicus) -> Software rasterizer [WIP]
* [Bedlam Noise Apparatus](https://github.com/Chubek/Bedlam-Noise-Apparatus) -> Oh BOY I love this one! A pretty solid After Effects plugin that generates noise using OpenGL and GLSL. I think it's one of the few FOSS After Effects plugins out there.
* [Rusty Random Pattern Generator](https://github.com/Chubek/rusty-random-pattern-generator) -> A simple pattern generator in Rust.
* [Pong Q-Learning](https://github.com/Chubek/pong-q-learning-nim) -> This is a composite of ML and Game Dev. It uses Reinforcement learning to play Pong. Written in Nim using SDL.
* [cep-panel](https://github.com/Chubek/cep-panel-for-carlo) and its [backend](https://github.com/Chubek/backend-carlo) -> Invisible Adobe Premiere Panel and its backend.
* [NaqshSmit Renderer](https://github.com/Chubek/NaqshSmith-Renderer) -> A software renderer, it's currently WIP and right now I am just following tutorials to get a foothold in rendering algos. But soon it will spiral into something worthwhile.


## Small Projects in Gist
* [CUDA Gaussian Elimination](https://gist.github.com/Chubek/21fd8da623e2fdeb270530d2ec274150)
* [DynoFiler](https://gist.github.com/Chubek/f81cfd71825f8db5eea7146b5030df7f) -> A wrapper for line_profiler around PhyMMR for easier profiling.
* [PerioDetect](https://gist.github.com/Chubek/0a2b0e858e12a74fdb1ea1375ef8cb26) -> For removing period-terminated sequences from FASTA files (made for PhyMMR but anyone can use it).
* [Stinky](https://gist.github.com/Chubek/fd67206b69d69862d756a5b82310a9ce) -> An extremely small Morse Code translator API with a custom HTTP framework, built upon Python Streaming API

## Projects I Contribute to
* [Cherry-Node](https://github.com/CherryNetwork/Cherry-Node) -> for my work in Cherry.
* [PhyMMR](https://github.com/Thernn88/PhyMMR/) -> A bioinformatics project that I actively participate to for my work.

# Codes and Projects by Language

## C/C++

|Topic|Repo|Description|
|---------|----|-----------|
|**Graphics Programming**|[Bedlam Noise Apparatus](https://github.com/Chubek/Bedlam-Noise-Apparatus)|Noise-generating After Effects plugin|
|**Bioinformatics**|[pylibfastcompare](https://github.com/Chubek/pylibfastcompare)|Lazy-hamming multi-threaded DNA sequence deduper|
|**Bioinformatics**|[pylibfastadedupe](https://github.com/Chubek/pylibfastadedupe)|Same as above, C++ version with updated perofromance|
|**Network**|[HDTP](https://github.com/Chubek/HDTP)|WIP, Hyper Data Transfer Protocol spec and implementation|
|**Network**|[Kaibash](https://github.com/Chubek/Kaibash)|Very WIP proxy
|**Math**|[CUDA Gaussian Elimination](https://gist.github.com/Chubek/21fd8da623e2fdeb270530d2ec274150)|Gaussian elimination in CUDA|

## Rust

|Topic|Repo|Description|
|---------|----|-----------|
|**Electronics**|[Scheesim](https://github.com/Chubek/Scheesim)|Electronics circuit simulator similar to SPICE|
|**Bioinformatics**|[ProteinToCodonTranslator](https://github.com/Chubek/ProteinToCodoneTranslator)|Translate Protein to DNA|
|**Network**|[Samovar](https://github.com/Chubek/Samovar)|HTTP 1.1 framework, WIP|
|**Network**|[rusty-csv-protcol](https://github.com/Chubek/rusty-csv-protocol)|Application-level protcol|
|**Cryptography**|[hmac-tree](https://github.com/chubek/hmac-tree)|Merkle trees with HMAC|
|**Network**|[rusty-you-dee-pee](https://github.com/chubek/rusty-you-dee-pee)|UDP implementation, WIP|
|**Graphics Programming**|[Rusty Random Pattern Generator](https://github.com/Chubek/rusty-random-pattern-generator)|Pattern generator|
|**Graphics Programming**|[NaqshSmit Renderer](https://github.com/Chubek/NaqshSmith-Renderer)|Software rendered, concept|
|**Automation**|[rusty-bot-swarm](https://github.com/Chubek/rusty-bot-swarm)|Prototype for Twitter bot pre-Musk|
|**Graphics Programming**|[Expelligraphicus](https://github.com/Chubek/Expelligraphicus)|Another concept for a rasterizer|
|**Automation**|[Upsc3ne](https://github.com/Chubek/upsc3ne)|An early Rust code, an obscenity detector|
|**Math**|[auster-integer](https://github.com/Chubek/auster-integer)|Big math WIP|
|**Bioinformatics**|[PhyMMR Tools](https://github.com/Chubek/blosum_distance)|FFI tools for PhyMMR, some by me|

## Python

|Topic|Repo|Description|
|---------|----|-----------|
|**AI Vision**|[PuertoRECO](https://github.com/Chubek/PuertoRECO)|Face recognition framework|
|**Automation**|[potpourri](https://github.com/Chubek/potpourri) |Web scraping framework|
|**AI NLP**|[WillSh3B33](https://github.com/Chubek/will-sh3-b33)|AI model deployed with a frontend|
|**AI Classical**|[Arriv-O-Pred](https://github.com/Chubek/Arriv-O-Pred)|Train time arrival prediction|
|**Automation**|[PerioDetect](https://gist.github.com/Chubek/0a2b0e858e12a74fdb1ea1375ef8cb26)|Period (I mean dot!) detection script|
|**AI Auditory**|[SongOfSprockets](https://github.com/Chubek/SongOfTheSprockets)|Voice conversion tool|
|**AI NLP**|[ClickBait Generator](https://github.com/Chubek/clickbait-generator)|Very simple clickbait AI model Colab notebook|
|**Vision Classical**|[intresignia](https://github.com/chubek/intresignia)|Red traffic sign detection|
|**Math**|[pyramid-anomaly-detection](https://github.com/Chubek/pyramid-anomally-detection)|Anomaly detection tool for Python, vetorized|
|**Network**| [Stinky](https://gist.github.com/Chubek/fd67206b69d69862d756a5b82310a9ce)|Simple Python API with custom HTTP backend|

## Go

|Topic|Repo|Description|
|---------|----|-----------|
|**Network**|[mathcord](https://github.com/Chubek/mathcord)|Discord bot with everything written from scratch|
|**Automation**|[CroonJoobGoo](https://github.com/Chubek/CroonJoobGoo)|SQL cron job|
|**Network**|[ProtoGen](https://github.com/Chubek/Protogen)|Application-layer protocols in Go|

# Misc.

|Language|Topic|Repo|Description|
|--------|-----|----|-----------|
|**NodeJS**|Databases|[Mongoose Jumblator](https://github.com/Chubek/mongoose-jumblator)|A plugin for Mongoose for encrpyting MongoDB|
|**VanillaJS**|Browser Addon|[FourChidori](https://github.com/Chubek/FourChidori)|A browser add-on for 4chan|
|**AdobeExtendScript**|Extensions|[cep-panel](https://github.com/Chubek/cep-panel-for-carlo) and its [backend](https://github.com/Chubek/backend-carlo)|Concept projects for an Adobe Premiere panel|
|**Nim**|Classical Learning|[Pong Q-Learning](https://github.com/Chubek/pong-q-learning-nim)|A test project in Nim|
|**Bash**|System Script|[DynoFiler](https://gist.github.com/Chubek/f81cfd71825f8db5eea7146b5030df7f)|Script for wrapaping line_profiler around PhyMMR|



# Sites and Social Media

* Website -> https://chubakbidpaa.com
* Twitter -> @gvlside
* Discord -> Chubak#7400
* Telegram -> @bidpaafx
* Email -> chubakbidpaa@gmail.com


Thanks, and please take care.

