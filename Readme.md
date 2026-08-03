# NLC Groovy core for MiSTer

This version adds new NLC compression, input support and stability improvements (particularly for 480i/480p).
The emulators below are validated with this version. Older emulators w/groovy are untested, and maybe have input issues. It is recommended to use the updated NLC versions.
See releases for more details

## General description
This core is a analog GPU for CRTs aiming for very low subframe latency

https://youtu.be/H0175WJFpUs
## This Fork's Features 
- Lower network bandwidth requirements for a more stable playback experience (YCoCg-R & Rice to create NLC compression (Lossless & Near Lossless))
- Connection stability fixes, reconnect and auto connection closing
- Extended controller support (Full Dualshock w/Rumble)
- Controller menu updates. Reassign a single button or swap profiles quickly within the new Controller MiSTer UI. Handy when swapping between different emulators.

## Features 
- Very low latency (~3ms tested with GILT on GroovyMAME with frame delay 8)
- RGB888/RGB565/RGBA888 blitting
- Switch all modes (progressive/interlaced) reprogramming pll according to modeline
- Connect with GB ethernet (direct connection recommended)
- Audio stream
- Inputs stream (keyboard, mouse, 2 joypads)
- Native LZ4 uncompress on FPGA
- [History](https://github.com/psakhis/Groovy_MiSTer/blob/main/history.txt)

## Installation
- Copy the release version of MiSTer_groovy to /media/fat 
- Copy the release version of Groovy.rbf to /media/fat/_Utility 
- Edit MiSTer.ini and add custom binary at end of file<br />
  <sub>
  [Groovy]<br />
  main=MiSTer_groovy<br />
  </sub>
  
## Emulators available

Emulators require specific versions that include Groovy NLC support.
Please use these forks:

### [MiSTerCast](https://github.com/verbst/MiSTerCast) 
Thanks to @Shane for this great windows utility to mirror desktop.

### [Fightcade - FBNeo](https://github.com/verbst/fightcade-fbneo)

### [Fightcade - Dojo Flycast]
In progress

### [PCSX2](https://github.com/verbst/pcsx2)
Thanks to PCSX2 team.

- Dualshock input support w/Rumble

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

