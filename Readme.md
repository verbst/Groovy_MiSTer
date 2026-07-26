# Groovy core for MiSTer

## General description
This core is a analog GPU for CRTs aiming for very low subframe latency

https://youtu.be/H0175WJFpUs

## Features 
- Very low latency (~3ms tested with GILT on GroovyMAME with frame delay 8)
- RGB888/RGB565/RGBA888 blitting
- Switch all modes (progressive/interlaced) reprogramming pll according to modeline
- Connect with GB ethernet (direct connection recommended)
- Audio stream
- Inputs stream (keyboard, mouse, 2 joypads)
- Native LZ4 uncompress on FPGA
- [History](https://github.com/psakhis/Groovy_MiSTer/blob/main/history.txt)

## Installation (transfers in binary mode!)
- Copy MiSTer_groovy to /media/fat 
- Copy Groovy.rbf to /media/fat/_Utility 
- Edit MiSTer.ini and add custom binary at end of file<br />
  <sub>
  [Groovy]<br />
  main=MiSTer_groovy<br />
  </sub>
  
### Only for XDP high performance feature, some tweaks on Linux are needed
  1. Replace kernel: zImage_dtb file on /media/fat/linux (is same [kernel](MiSTer-devel/Linux-Kernel_MiSTer#55) with some patches for eth0 driver and builded with CONFIG_XDP_SOCKETS=Y)
  2. Save groovy_xdp_kern.o to /usr/lib/arm-linux-gnueabihf/bpf (this program will be injected on eth while xdp is running)
  3. Save libelf.so.1 on /usr/lib (library requiered)
  4. On MiSTer.ini change binary from MiSTer_groovy to MiSTer_groovy_XDP 
## Emulators available

Emulators require updates for NLC & new input support.
Please use these forks:

### [MiSTerCast](https://github.com/verbst/MiSTerCast) 
Thanks to @Shane for this great windows utility to mirror desktop.

### [Fightcade]
In progress

### [PCSX2]
In progress

### [RPCS3]
In progress

### [Retroarch]
In progress

## Thanks
@psakhis for all your work, making this all possible

@Calamity for hard testing core and implement GroovyMAME for it

@sorgelig, for developing and maintaining MiSTer.

@jotego, for analog adjustment module.

[GroovyArcade Discord](https://discord.gg/YtQ6pJh) #nogpu

MiSTer Discord #dev-talk

@alanswx for their [lessons](https://github.com/alanswx/Tutorials_MiSTer)

@wickerwaka for their tips using ddr

@coolbho3k for their [overclock](https://github.com/coolbho3k/MiSTer-Overclock-Scripts)  

@Emulators teams: Mednafen, MAME and Retroarch

@alexxnr for testing it and encourage me in the project

