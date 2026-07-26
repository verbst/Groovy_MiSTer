// groovy_selftest_launch.cpp — TEST-ONLY, self-disabling auto-launch hook for the on-device baseline test.
//
// This file is compiled into a REBUILT clean MiSTer_groovy (the overlay Makefile globs ./support/*/*.cpp, so
// dropping this into support/groovy/ links it automatically — NO edits to main.cpp or groovy.cpp). At process
// start its constructor checks for /media/fat/groovy_selftest.sh and, only if present, launches it in the
// background. It spawns an EXTERNAL sender process; it does NOT touch the receive/decode/display path, so the
// app under test stays byte-for-byte clean. Remove the script to restore stock behaviour (hook goes dormant).
//
// We guard on F_OK (existence), not X_OK: /media/fat is FAT and cannot store the exec bit, and we invoke via
// `sh` explicitly so the exec bit is irrelevant. system("... &") returns immediately (the shell backgrounds
// the script and exits), so this adds no startup latency.
#include <unistd.h>
#include <stdlib.h>

__attribute__((constructor))
static void groovy_selftest_autolaunch(void)
{
	if (access("/media/fat/groovy_selftest.sh", F_OK) == 0)
		system("sh /media/fat/groovy_selftest.sh &");
}
