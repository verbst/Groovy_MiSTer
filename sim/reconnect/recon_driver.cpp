// recon_driver.cpp — drives the REAL GroovyMister client (api/groovymister.cpp) against fake_core to
// exercise setAutoReconnect(1) across a black-hole, timing every WaitSync().
//
// Two host patterns (the report distinguishes them):
//   keephigh   — the client keeps its own blit-frame counter running across the reconnect (the fbneo /
//                naive host). After the core restarts its counter this makes echo>>gpu; WITHOUT the fix
//                DiffTimeRaster turns the spread into a multi-second sleep and WaitSync hangs.
//   restartlow — the client realigns its counter to 1 when reconnectEpoch() changes. WITHOUT the fix,
//                getACK's monotonic gate (frameUDP > fpga.frameEcho) rejects the fresh low ACKs against
//                the stale-high echo, so the echo never advances and the watchdog reconnect-loops.
//
// Pass/fail is judged by the run script from the DONE line (maxWaitMs, reconnects) or a timeout kill.
//
// Build: g++ -O2 -o recon_driver recon_driver.cpp <api>/groovymister.cpp <api>/nlc_codec.cpp
//               <api>/lz4/lz4.c <api>/lz4/lz4hc.c -I<api> -I<api>/lz4 -lpthread   (see run_reconnect.sh)
// Usage: recon_driver [host=127.0.0.1] [port=32200] [mode=keephigh] [nbefore=60] [nafter=120] [holems=4000]

#include "groovymister.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include <time.h>

static uint64_t now_ns(void) {
    struct timespec t; clock_gettime(CLOCK_MONOTONIC, &t);
    return (uint64_t)t.tv_sec * 1000000000ull + (uint64_t)t.tv_nsec;
}
static void sleep_ns(uint64_t ns) {
    struct timespec s; s.tv_sec = ns / 1000000000ull; s.tv_nsec = ns % 1000000000ull;
    nanosleep(&s, 0);
}

int main(int argc, char** argv) {
    const char* host = (argc > 1) ? argv[1] : "127.0.0.1";
    int         port = (argc > 2) ? atoi(argv[2]) : 32200;
    const char* mode = (argc > 3) ? argv[3] : "keephigh";
    int      nbefore = (argc > 4) ? atoi(argv[4]) : 60;
    int      nafter  = (argc > 5) ? atoi(argv[5]) : 120;
    (void)argc; (void)argv;
    setvbuf(stdout, NULL, _IONBF, 0);

    const int restartlow = !strcmp(mode, "restartlow");

    GroovyMister gm;
    gm.setVerbose(1);
    int rc = gm.CmdInit(host, (uint16_t)port, 0 /*raw*/, 0, 0, 0 /*rgb888*/, 0);
    if (rc != 0) { printf("[driver] CmdInit FAILED rc=%d\n", rc); return 2; }
    // ~60Hz modeline, small active area (64x48 raw = 9216 bytes/frame). Same H/V total + pClock as the
    // loopback default, so frameTime ~= 16.77ms (widthTime 640 * vTotal 262).
    gm.CmdSwitchres(6.046147, 64, 329, 357, 385, 48, 243, 246, 262, 0);
    memset(gm.getPBufferBlit(0), 0, 64 * 48 * 3);   // black raw frame
    gm.setAutoReconnect(1);

    const uint32_t epochStart = gm.reconnectEpoch();
    uint32_t epochSeen = epochStart;
    uint32_t f = 1;
    double maxWaitMs = 0.0, sumWaitMs = 0.0; int nWait = 0;
    const int total = nbefore + nafter;
    const uint64_t period_ns = 16000000ull;  // pace each iteration to ~60fps so the frame counter keeps
                                             // advancing during the hole (WaitSync early-returns when down)

    // Post-reconnect frame-adoption-gate stall check (frame-desync corruption bug, distinct from the
    // hang/loop this harness originally targeted): after a reconnect, the core's OWN frame counter
    // (gm.fpga.frame) must keep advancing as the client keeps sending frames. If the core's
    // frame-adoption gate is stuck (parked at a stale value because a CMD_CLOSE was lost during the
    // hole - see fake_core.cpp), gm.fpga.frame reports that SAME stale value forever in every ACK
    // (fake_core sends an ACK even for a gate-rejected blit) and never increases again, even though
    // WaitSync itself no longer hangs (the 6cce1ac clamp handles that separately). The naive check
    // (baseline = value at the instant the epoch bump is observed) is contaminated by resetSessionState()
    // momentarily zeroing gm.fpga.frame and then the very next ACK re-populating it with the core's
    // stale value - that one jump looks like "resumed" but isn't. So: capture the baseline a few
    // iterations AFTER the bump (past that transient), then require NO further advance over a much
    // longer window to call it a real stall.
    uint32_t postReconnectBaseline = 0;
    int      framesSinceReconnect  = -1;   // -1 = not currently tracking a post-reconnect window
    int      stallFailed = 0;
    bool     baselineCaptured = false;
    const int SETTLE_ITERS      = 5;       // let the post-reconnect ACK noise settle before sampling
    const int STALL_GRACE_ITERS = 65;      // SETTLE_ITERS + this many more iterations with zero advance = stuck

    printf("[driver] start mode=%s host=%s:%d nbefore=%d nafter=%d frameCounterBase=%u epoch=%u\n",
           mode, host, port, nbefore, nafter, f, epochStart);

    for (int i = 0; i < total; i++) {
        if (gm.reconnectEpoch() != epochSeen) {
            printf("[driver] reconnect epoch %u->%u observed (frame counter was %u)\n",
                   epochSeen, gm.reconnectEpoch(), f);
            epochSeen = gm.reconnectEpoch();
            if (restartlow) {
                printf("[driver] realigning frame counter %u -> 1\n", f);
                f = 1;
            }
            framesSinceReconnect   = 0;
            baselineCaptured       = false;
        }

        uint64_t it0 = now_ns();
        gm.CmdBlit(f, 0, 0, 0, 0);

        uint64_t w0 = now_ns();
        gm.WaitSync();                          // <-- the call that hangs without the fix
        double waitMs = (double)(now_ns() - w0) / 1e6;

        if (waitMs > maxWaitMs) maxWaitMs = waitMs;
        sumWaitMs += waitMs; nWait++;

        if (framesSinceReconnect >= 0) {
            framesSinceReconnect++;
            if (!baselineCaptured && framesSinceReconnect == SETTLE_ITERS) {
                postReconnectBaseline = gm.fpga.frame;
                baselineCaptured = true;
                printf("[driver] post-reconnect: sampling baseline gpu=%u after %d settle iteration(s)\n",
                       postReconnectBaseline, framesSinceReconnect);
            } else if (baselineCaptured && gm.fpga.frame > postReconnectBaseline) {
                printf("[driver] post-reconnect: core frame counter resumed (%u -> %u) after %d iteration(s)\n",
                       postReconnectBaseline, gm.fpga.frame, framesSinceReconnect);
                framesSinceReconnect = -1;
            } else if (baselineCaptured && framesSinceReconnect == STALL_GRACE_ITERS) {
                printf("[driver] FAIL - frame-adoption gate stuck: core frame counter has not advanced "
                       "past %u in %d iterations since reconnect (client now sending f=%u)\n",
                       postReconnectBaseline, framesSinceReconnect, f);
                stallFailed = 1;
            }
        }

        if (i < 3 || (i % 20) == 0 || waitMs > 100.0) {
            printf("[driver] i=%d f=%u conn=%d epoch=%u echo=%u gpu=%u WaitSync=%.2fms\n",
                   i, f, gm.isConnected(), gm.reconnectEpoch(), gm.fpga.frameEcho, gm.fpga.frame, waitMs);
        }

        f++;
        uint64_t dt = now_ns() - it0;
        if (dt < period_ns) sleep_ns(period_ns - dt);
    }

    uint32_t reconnects = gm.reconnectEpoch() - epochStart;
    printf("[driver] DONE mode=%s frames=%d maxWaitMs=%.2f meanWaitMs=%.3f reconnects=%u connected=%d stall=%s\n",
           mode, total, maxWaitMs, sumWaitMs / (nWait ? nWait : 1), reconnects, gm.isConnected(),
           stallFailed ? "FAIL" : "ok");
    gm.CmdClose();
    return stallFailed ? 3 : 0;
}
