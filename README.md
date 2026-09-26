# TomodachiLifeDecomp
A starting work in progress decomp of Tomodachi Life (3DS), targeting the first 1.0 US version, with plans to expand to additional regions and versions over time.

## Disclaimer
You must provide your own legally obtained copy of Tomodachi Life.

## Progress

<img src ="https://img.shields.io/endpoint?url=https://raw.githubusercontent.com/dylanpdx/TomodachiLifeDecomp/master/Data/Code.json&style=flat-square"/> <img src ="https://img.shields.io/endpoint?url=https://raw.githubusercontent.com/dylanpdx/TomodachiLifeDecomp/master/Data/Total.json&style=flat-square"/>

<img src ="https://img.shields.io/endpoint?url=https://raw.githubusercontent.com/dylanpdx/TomodachiLifeDecomp/master/Data/OK.json&style=flat-square"/> <img src ="https://img.shields.io/endpoint?url=https://raw.githubusercontent.com/dylanpdx/TomodachiLifeDecomp/master/Data/NonMatching.json&style=flat-square"/>

## Prerequisites

* Linux setup/Windows setup with CMake and GNU make
* ARM C/C++ Compiler, 4.1 [Build 1049] or suitable replacement
* Python 3.10
* CMake >= 3.24
* code.bin extracted from Tomodachi Life (US, 1.0)
* [devkitARM](https://devkitpro.org/wiki/devkitARM)

## Links

- [decomp.me](https://decomp.me/)

## Credits
- [Redpepper](https://github.com/fruityloops1/Redpepper)
- [ikachan](https://github.com/hax0kartik/ikachan)
- [open-ead/sead](https://github.com/open-ead/sead)

Massive thanks to RedPepper as it's the whole base I used for this project!

### Commands
(because it wasn't documented in RedPepper)

`python .\Tools\build.py clean`
Build a clean version of code.bin

`python .\Tools\diff.py <symbol>`
Get diff (via asm-differ) of a symbol

`python .\Tools\progress.py`
Calculate decomp progress & put it in Data folder

`python .\Tools\check.py`
Check all symbols & update their rank