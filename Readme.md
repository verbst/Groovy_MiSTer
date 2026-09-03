# NLC Groovy core for MiSTer
<img width="64" height="64" alt="logo_64_alpha" src="https://github.com/user-attachments/assets/6e9e3c9b-c168-43fd-871a-d2211153b7be" />


This version adds new NLC compression, input support and stability improvements (particularly for 480i/480p).
The emulators below are validated with this version. Older emulators w/groovy are untested, and maybe have input issues. It is recommended to use the updated NLC versions.
See releases for more details

## This Fork's Features 
- Much lower network bandwidth requirements for a more stable playback experience (YCoCg-R & Rice to create NLC compression (Lossless & Near Lossless)). 480p works great.

```
codec                 meanRatio worstRatio     meanMbps     peakMbps      encMs   encMsMax
-----                 --------- ----------     --------     --------      -----   --------
raw                        1.00       1.00        497.7        497.7       0.00       0.00
lz4+sub                    1.34       1.34        371.1        372.5       2.14       3.03
lz4hc+sub                  1.58       1.57        314.9        317.6      35.10      36.68
nlc rice  ycc  n0          1.80       1.78        276.0        280.2       5.50       5.95
nlc rice  ycc  n1          2.50       2.45        199.0        202.8       5.94       6.41
nlc rice  ycc  n2          2.95       2.89        168.7        171.9       5.78       5.99
```

- Connection stability fixes, reconnect and auto connection closing
- Extended controller support (Full Dualshock w/Rumble)
- Controller menu updates. Reassign a single button or swap profiles quickly within the new Controller MiSTer UI. Handy when swapping between different emulators.

For the latest updates, or more information, please reach out on the MiSTer Discord Channel


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

## Installation
- Copy the release version of MiSTer_groovyNLC to /media/fat 
- Copy the release version of GroovyNLC.rbf to /media/fat/_Utility 
- Edit MiSTer.ini and add custom binary at end of file. Original Groovy MiSTer & Groovy MiSTer NLC can exist side by side:<br />
  <sub>
  [Groovy]<br />
  main=MiSTer_groovy<br />
  </sub><br />
  <sub>
  [GroovyNLC]<br />
  main=MiSTer_groovyNLC<br />
  </sub>
  
## Emulators available

Emulators require specific versions that include Groovy NLC support.
Please use these forks:

### [MiSTerCast](https://github.com/verbst/MiSTerCast) 
Thanks to @Shane for this great windows utility to mirror desktop.

### [Fightcade - FBNeo](https://github.com/verbst/fightcade-fbneo)

### [Fightcade - Dojo Flycast](https://github.com/verbst/flycast-dojo)

### [PCSX2](https://github.com/verbst/pcsx2)
Thanks to PCSX2 team.
- Dualshock input support w/Rumble (Use Analog Setting)

### [RPCS3](https://github.com/verbst/rpcs3)
- Dualshock input support w/Rumble (Use Analog Setting)
  
### [Retroarch](https://github.com/verbst/RetroArch)

### [Flycast (Non-Dojo)]
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
