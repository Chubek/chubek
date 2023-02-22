# Chubak Bidpaa: The GentleChud's GentleChud

Welcome to my Github profile. Please use the menu below to navigate to the several interweaving sections of this document. 

* [Just Skip to My Projects by Language](#codes-and-projects-by-language)

OR:

* [Introduction](#introduction)
* [Stack](#stack)
* * [Languages I Know](#languages-i-know)
* * [Errata on Everything](#errata-on-everything)
* * * [Truancy of Knowing](#truancy-of-knowing)
* * * [Dogmatique](#dogmatique)
* * * [Interests](#interests)
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
* [Sites and Social Media](#sites-and-social-media)
* [Death](#death)


# Introduction

I was born in March 12th, 1993 — When I was 10, I wanted to be an animator and work for Disney but it proved difficult as family issues piled up — and when I got my first PC at 12, it did not take long to realize I want to be a software coder. At 16 I thought myself GML and made  [this](http://drive.google.com/uc?id=1tiJwc8e0pNVODyk4CvkTIkNu7SqpwNcR) absolute unit of a game. From there on I marched with the progress of programming technology. I used to code PHP in Notepad++ on Windows and now I code Rust, Go, and C/C++ in VSCode on Linux. However I am trying to make a very bold switch to using Emacs (seethe Vim users! jk both are good) — However given that I was not born in 1819 it's proving kinda difficult for me. I don't want to waste the client's time and money so I only use it with my personal projects. Besides PHP there are several other technologies that I have dropped in favor of better alternatives, chiefly, C# and Java. I have studied Computer Science in college for sometime. I mostly do systems, utilities, network and scripting.

I am in the process of teaching myself electronics. I have bought a lot of equipment with my ill-gotten opium and arms smuggling money (which I totally do on the side, I am very cool and dangerous) and I am in the process of writing a circuit simulator similar to that of SPICE and CANCER (not kidding it's actually name of a very rudimentary and old circuit simulator) and I don't just wanna do it as a hobby, I wanna design circuits and do embedded programming on the side. If you are kind enough to take a chance on this poor soul's quest to do electronics alongside systems programming do as AssimilateBoozeByAsterisk says and take a chance on me, for poor Violet's sake! Thanks.

# Stack

## Languages I Know

* **Rust**: I use Rust for most of my system, automation, utilities, etc. Although not as performant as C and initially dodgy, Rust now has proven to be a darling. Especially for using it alongside Python using PyO3. I have started using it more especially in my circuit simulator (see below) and I can safely say that it may not become as ubiquitous as C/C++ have became in the recent decades (as it has many contenders including Nim and our friend the Zigster) but it will certainly find its place far before succumbing to premature eternal repose in the annals oh theirstory (woke huh).
* **Go**: Using Go for network stuff will take hours off your workload. Go can also be used for simple REPL or terminal utilities. Go walks the line between being a scripting language and a systems language and that's surprisingly not a weakness.
* **C/C++**: I use C/C++ only when I need speed and optimization. I'm pretty comfortable with it but I can't simply risk unsafe ramifications when speed and optimization is not intended. C/C++ can be used alongside Python's CFFI to create Foreign Function Interfaces for Python in it. You may say, well, Chubak,  C (and to some extent C++) are the bedrock of creation and Unix is the Father, Ritchie is the Son, and Karinghan is the Holy Ghost but I was not born a Catholic. I just float along. WHICHEVER SCREWDRIVER SCREWS MY SCREW, I SCREW THE SCREW WITH IT.
* **Python**: Back in the early 2010s everyone was like 'python b3 g00d, mit does teaching it to first years!' and back then Python 2.5 was just out so I decided to give it a try. Ever since Python has been a very large part of my life. A part that I love, a part that I hate, a part that I love to hate, and a part that I hate to love. In short, Python is a utility belt, but without using systems languages as FFI for most resource-intensive tasks, you will get nowhere near the desired performance with it. These days, for me, Python is a wrapper around my C/C++ (through cffi) and Rust (through PyO3 and Maturin) interfaces. I have written and wrapped several foreign systems interfaces for Python. CFFI in a way is wonderful, you can really do stuff with it, you can take a dynamic library and load it, write the library yourself and load it, or load the C library you have written through its API mode rather than its less preferment ABI mode. Still as mentioned above C is rather loose canon with memory so I prefer to use Rust + PyO3 to bind and wrap and Maturin to streamline the build and publish process. Also, Python is very strong and fit for scripting. Mix it with Bash and you have quite the powerhouse in your hands.
* **NodeJS & VanJS**: I won't fib and I won't lark, I don't like JS, not in Node form , not with Vanilla, neither with chocolate, not even fudge. If I have to make a fast web page for something I need I prefer to make my own tools in VanillaJS. I'm not very good as web development or web design and please don't hire me to do such stuff (however if you need server applications I am your man). Overall I rarely get to deal with JS or NodeJS but I am proficient in both. I hate this whole 'JavaScript Framework' business as much as any systems guy does. Most people will find my hang up annoying, disrespectful, and rather coarse but it's just protesting too much I guess.
* **Bash**: I know, big whoop. But every systems programmer needs to know Bash.

## Errata on Everything

### Truancy of Knowing

I would love to do projects in Kotlin, Nim, and Zig too. And if opportunity grasps itself, I will. But to tell you the truth, I am far beyond this whole 'knowing languages' thing. Anyone who has programmed for more than a year knows coding is not about 'knowing x language'. My days of 'i wanna learn x language to learn how to program!!!1' are way past me, left in early 2010s to rot. A skilled programmer knows it's all about problem-solving. The solution a beginner uses to solve a linear algebraic system and the solution a senior and seasoned programmer uses both reach the same results. The issue is elegance, avoiding pitfalls of redundancy and cargo-culting, the speed which the solution is arrived at, and the performance of the final code. I think we all agree on that. So let me just say that it's IRRELEVANT what my stack is, a stack is meant to grow continuously with stuff popping in and out of it, what people think of when they say 'do you know x language' is perhaps, that my mind is a heap, meant to be piled on.

Another thing that a programmer needs to know is the building blocks of hardware and systems software. At least a systems programmer, and especially a systems programmer who's trying to make it in electronic. Everything from what a register is, and what it is made of, to what the memory model in POSIX-compliant operating systems are. How virtual memory manages itself, processes, threads, etc.

### Dogmatique

This is a partial list of stuff that is most important to me.
* Memory management
* Debugging
* Concurrency and Parallelism
* Optimization
* Meta Programming
* Redundancy-free programming
* Multi-paradigm programming
* Regular Expressions
* Modular system design
* Algorithmic approach
* Pre-programming
* Preparing by reading textbooks on the subject
* Heavy reliance on mathematics that the project calls for, most specifically linear algebra
* Making the most out of syntactic sugars
* Not resorting to writing inline Assembly
* Flexing my skills only to a healthy amount

And more...

### Interests
* Systems
* Network
* Scientific utility
* Compiler/Interpreter design and implementation
* Circuit simulators
* Graphics programming
* Classical Vision programming (no AI)
* Embedded programming & Circuit design (as I said I am a beginner in this, I would love it if someone took a chance on me)
* General systems utilities and aide code, in Bash and/or Python
* Quick and dirty systems fix work

If you have landed on this page on accident, or been directed by me or someone else through a job board, please scroll below for my contact. Otherwise stay here and have a look at select few projects that I have done over the years. These projects are the most recent ones, starting at 2018 with After Effects noise plugin Bedlam Noise Apparatus. My older code is irrelevant. I have done a lot of coding over the years. The tetris game I posted above was just a jolly good time. I am in no way interested for anyone to see my old PHP code, or my old WordPress themes, and God have mercy on me, my Windows Forms C# projects and certainly, certainly not the interactive games I used to make with PMwiki!

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

## Projects I Contribute to
* [Cherry-Node](https://github.com/CherryNetwork/Cherry-Node) -> for my work in Cherry.
* [PhyMMR](https://github.com/Thernn88/PhyMMR/) -> A bioinformatics project that I actively participate to for my work.

# Codes and Projects by Language

|Language|Repo|Description|
|---------|----|-----------|
|**C/C++**|[Bedlam Noise Apparatus](https://github.com/Chubek/Bedlam-Noise-Apparatus)|Noise-generating After Effects plugin|
|**C/C++**|[pylibfastcompare](https://github.com/Chubek/pylibfastcompare)|Lazy-hamming multi-threaded DNA sequence deduper|
|**C/C++**|[pylibfastadedupe](https://github.com/Chubek/pylibfastadedupe)|Same as above, C++ version with updated perofromance|
|**C/C++**|[HDTP](https://github.com/Chubek/HDTP)|WIP, Hyper Data Transfer Protocol spec and implementation|
|**C/C++**|[Kaibash](https://github.com/Chubek/Kaibash)|Very WIP proxy
|**Cuda C**|[CUDA Gaussian Elimination](https://gist.github.com/Chubek/21fd8da623e2fdeb270530d2ec274150)|Gaussian elimination in CUDA|
|**Rust**|[Scheesim](https://github.com/Chubek/Scheesim)|Electronics circuit simulator similar to SPICE|
|**Rust**|[ProteinToCodonTranslator](https://github.com/Chubek/ProteinToCodoneTranslator)|Translate Protein to DNA|
|**Rust**|[Samovar](https://github.com/Chubek/Samovar)|HTTP 1.1 framework, WIP|
|**Rust**|[rusty-csv-protcol](https://github.com/Chubek/rusty-csv-protocol)|Application-level protcol|
|**Rust**|[hmac-tree](https://github.com/chubek/hmac-tree)|Merkle trees with HMAC|
|**Rust**|[rusty-you-dee-pee](https://github.com/chubek/rusty-you-dee-pee)|UDP implementation, WIP|
|**Rust**|[Rusty Random Pattern Generator](https://github.com/Chubek/rusty-random-pattern-generator)|Pattern generator|
|**Rust**|[NaqshSmit Renderer](https://github.com/Chubek/NaqshSmith-Renderer)|Software rendered, concept|
|**Rust**|[rusty-bot-swarm](https://github.com/Chubek/rusty-bot-swarm)|Prototype for Twitter bot pre-Musk|
|**Rust**|[Expelligraphicus](https://github.com/Chubek/Expelligraphicus)|Another concept for a rasterizer|
|**Rust**|[Upsc3ne](https://github.com/Chubek/upsc3ne)|An early Rust code, an obscenity detector|
|**Rust**|[auster-integer](https://github.com/Chubek/auster-integer)|Big math WIP|
|**Rust**|[PhyMMR Tools](https://github.com/Chubek/blosum_distance)|FFI tools for PhyMMR, some by me|
|**Python**|[PuertoRECO](https://github.com/Chubek/PuertoRECO)|Face recognition framework|
|**Python**|[potpourri](https://github.com/Chubek/potpourri) |Web scraping framework|
|**Python**|[WillSh3B33](https://github.com/Chubek/will-sh3-b33)|AI model deployed with a frontend|
|**Python**|[Arriv-O-Pred](https://github.com/Chubek/Arriv-O-Pred)|Train time arrival prediction|
|**Python**|[PerioDetect](https://gist.github.com/Chubek/0a2b0e858e12a74fdb1ea1375ef8cb26)|Period detection script|
|**Python**|[SongOfSprockets](https://github.com/Chubek/SongOfTheSprockets)|Voice conversion tool|
|**Python**|[ClickBait Generator](https://github.com/Chubek/clickbait-generator)|Very simple clickbait AI model Colab notebook|
|**Python**|[intresignia](https://github.com/chubek/intresignia)|Red traffic sign detection|
|**Python**|[pyramid-anomaly-detection](https://github.com/Chubek/pyramid-anomally-detection)|Anomaly detection tool for Python, vetorized|
|**Go**|[mathcord](https://github.com/Chubek/mathcord)|Discord bot with everything written from scratch|
|**Go**|[CroonJoobGoo](https://github.com/Chubek/CroonJoobGoo)|SQL cron job|
|**Go**|[ProtoGen](https://github.com/Chubek/Protogen)|Application-layer protocols in Go|
|**NodeJS**|[Mongoose Jumblator](https://github.com/Chubek/mongoose-jumblator)|A plugin for Mongoose for encrpyting MongoDB|
|**VanillaJS**|[FourChidori](https://github.com/Chubek/FourChidori)|A browser add-on for 4chan|
|**AdobeExtendScript**|[cep-panel](https://github.com/Chubek/cep-panel-for-carlo) and its [backend](https://github.com/Chubek/backend-carlo)|Concept projects for an Adobe Premiere panel|
|**Nim**|[Pong Q-Learning](https://github.com/Chubek/pong-q-learning-nim)|A test project in Nim|
|**Bash**|[DynoFiler](https://gist.github.com/Chubek/f81cfd71825f8db5eea7146b5030df7f)|Script for wrapaping line_profiler around PhyMMR|



# Sites and Social Media

* Website -> https://chubakbidpaa.com
* Resume & Portfolio -> https://chubakbidpaa.com/resume (*extremely outdated*)
* Twitter -> @gvlside
* Discord -> Chubak#7400
* Telegram -> @bidpaafx
* Email -> chubakbidpaa@gmail.com

# Death
Sir Chebakk S. Bitzbpaah died in Morris Island after having lost  Interuniversal Warfare 3. The planetoids from Zorgistan B condemned him to exile after he tried to torch their mothership with a matchstick.

Alas, if you have read this entire document, tell me what you think on Discord. Even if yo are not interested in hiring me, or don't want me near your houseplants, or hate my guts, in anyway, I appreciate input on my ever-expanding profile and list of projects.

**Note**: If you want to design your profile page to be something like this, holler at me on DeeskOrd and I will help you buddy-to-buddy.

Thanks, and please take care.

