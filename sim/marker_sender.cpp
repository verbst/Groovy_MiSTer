// marker_sender.cpp — stream nlc_synth marker frames to a Groovy MiSTer over the REAL UDP path
// (api/groovymister). Runs LOCALLY ON the MiSTer (ARM, loopback 127.0.0.1) against the UNMODIFIED clean
// RBF+HPS. On Linux the api uses plain sendto (RIO is _WIN32-only), so it just works.
//
//   marker_sender <ip> <raw|lz4|nlc> <markerDir> <W> <H> <888|565> <modeline> <slate_hold> <sweep_secs> <fps> \
//                 [applogdir] [nmark=60]
//     ONE codec per invocation. Each run does CmdInit + CmdSwitchres + slate + sweep + CmdClose. (A fresh
//     CmdInit calloc's the session -> PoC_bytes_len=0, which ONLY CmdSwitchres restores; so every codec MUST
//     get its own CmdSwitchres. Switching codec with no switchres = "[UDP_BLIT][Skipped no modeline]" + hang.
//     That is why the selftest runs this twice, once per codec.)
//     modeline   = pclock,hAct,hBeg,hEnd,hTot,vAct,vBeg,vEnd,vTot,interlace
//     slate_hold = seconds to hold the slate (covers the cold CRT lock + a couple catchable seconds; ~12)
//     sweep_secs = seconds of moving-marker sweep
//     fps        = marker advance rate (slow, e.g. 8, for the cellphone rolling shutter)
//     applogdir  = if set, copy the app's /tmp/groovy.log -> applogdir/groovy_<codec>.log at the END (before
//                  the next codec's process re-truncates it). Omit for the local loopback.
//
//   On screen: (CRT locks) -> SLATE card -> slow marker sweep.
//
// Build (Linux/ARM, local on MiSTer) against the CLEAN api (matched pair with the clean app):
//   arm-none-linux-gnueabihf-g++ -O2 -static ... -o marker_sender_arm sim/marker_sender.cpp \
//       <clean api>/groovymister.cpp <clean api>/lz4/lz4.c <clean api>/lz4/lz4hc.c -I<clean api> -Itools -lpthread
#include "groovymister.h"
#include "slate.h"
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cstdint>
#include <vector>
#include <chrono>
#include <unistd.h>
#include <mcheck.h>

// ---- /48 CORRUPTION HUNT (v6-dbg): the 480p device run showed the STAGED frames mutating
// between sends (313 distinct LZ4 sizes for ~9 markers; x86 loopback byte-exact) = ARM-only
// memory corruption inside this process. These checks fingerprint WHERE and WHEN: every send
// verifies the source (marker/slate/encFrame) against a pristine copy and hashes the blit
// buffer around each api step. On damage: report offsets + hexdump, REPAIR, continue.
static uint64_t fnv1a(const uint8_t* d, size_t n) {
    uint64_t h = 1469598103934665603ULL;
    for (size_t i = 0; i < n; i++) { h ^= d[i]; h *= 1099511628211ULL; }
    return h;
}
static int g_crcFails = 0;
static void report_damage(const char* what, int sendNo, const uint8_t* cur, const uint8_t* prist, size_t n) {
    size_t first = n, last = 0, diff = 0;
    for (size_t i = 0; i < n; i++) if (cur[i] != prist[i]) { if (first == n) first = i; last = i; diff++; }
    g_crcFails++;
    printf("[CRC-FAIL #%d] %s send=%d addr=%p len=%zu firstdiff=%zu lastdiff=%zu ndiff=%zu\n",
           g_crcFails, what, sendNo, (const void*)cur, n, first, last, diff);
    if (first < n) {
        size_t o = (first > 8) ? first - 8 : 0;
        printf("  pristine[%zu..]:", o); for (size_t i = o; i < o + 32 && i < n; i++) printf(" %02x", prist[i]); printf("\n");
        printf("  corrupt [%zu..]:", o); for (size_t i = o; i < o + 32 && i < n; i++) printf(" %02x", cur[i]);  printf("\n");
    }
    fflush(stdout);
}
static void mcheck_hit(enum mcheck_status st) {
    printf("[MCHECK] heap metadata damage detected (status=%d) — continuing\n", (int)st);
    fflush(stdout);
}
static void dump_maps() {
    FILE* m = fopen("/proc/self/maps", "r");
    if (!m) return;
    char line[512];
    printf("---- /proc/self/maps ----\n");
    while (fgets(line, sizeof(line), m)) fputs(line, stdout);
    printf("---- end maps ----\n");
    fclose(m); fflush(stdout);
}

static double now_s() {
    return std::chrono::duration<double>(std::chrono::steady_clock::now().time_since_epoch()).count();
}

// copy /tmp/groovy.log -> dst (best effort; skips silently if missing — e.g. on the loopback)
static void snapshot_log(const char* dst) {
    FILE* in = fopen("/tmp/groovy.log", "rb"); if (!in) return;
    FILE* out = fopen(dst, "wb"); if (!out) { fclose(in); return; }
    char buf[65536]; size_t n;
    while ((n = fread(buf, 1, sizeof(buf), in)) > 0) fwrite(buf, 1, n, out);
    fclose(in); fclose(out);
    printf("[sender] snapshot /tmp/groovy.log -> %s\n", dst); fflush(stdout);
}

int main(int argc, char** argv) {
    mcheck_pedantic(mcheck_hit);   // v6-dbg: trap heap-metadata damage at the malloc/free site
    if (argc < 11) {
        fprintf(stderr, "usage: %s <ip> <raw|lz4|nlc> <markerDir> <W> <H> <888|565> <modeline> "
                        "<slate_hold> <sweep_secs> <fps> [applogdir] [nmark=60]\n", argv[0]);
        return 1;
    }
    const char* host = argv[1];
    const char* codec = argv[2];
    // /47: "nlc" = NLC in display mode 2 (autonomous engine, the rock-solid path); "nlc0" forces the
    // /45 streaming fallback (mode 0) for the A/B selftest. Sent via CMD_INIT byte[1] bits [6:5].
    // R1: "nlcr" = NLC with the RICE entropy pack (CMD_INIT byte[1] bit 7) — same display mode 2.
    int lz4Frames = (strncmp(codec, "nlc", 3) == 0) ? 7 : (strcmp(codec, "lz4") == 0) ? 1 : 0;  // 0=raw 1=lz4 7=nlc
    int nlcMode   = (strcmp(codec, "nlc0") == 0) ? 0 : 2;
    int nlcPack   = (strcmp(codec, "nlcr") == 0) ? 2 : 1;
    const char* codecLabel = (lz4Frames == 7) ? ((nlcPack == 2) ? "NLCR" : (nlcMode == 2) ? "NLC" : "NLC0") : (lz4Frames == 1) ? "LZ4" : "RAW";
    const char* mdir = argv[3];
    int W = atoi(argv[4]), H = atoi(argv[5]);
    int rgb = atoi(argv[6]);
    const char* mlstr = argv[7];
    double slateHold = atof(argv[8]);
    double sweepSecs = atof(argv[9]);
    int fps = atoi(argv[10]);
    const char* applogdir = (argc > 11) ? argv[11] : nullptr;
    int nmark = (argc > 12) ? atoi(argv[12]) : 60;
    if (fps <= 0) fps = 8;
    if (nmark <= 0) nmark = 60;

    int bpp = (rgb == 565) ? 2 : 3;
    uint8_t rgbMode = (rgb == 565) ? 2 : 0;
    const size_t FB = (size_t)W * H * bpp;

    double pclock; unsigned hAct,hBeg,hEnd,hTot,vAct,vBeg,vEnd,vTot,ilace;
    if (sscanf(mlstr, "%lf,%u,%u,%u,%u,%u,%u,%u,%u,%u",
               &pclock,&hAct,&hBeg,&hEnd,&hTot,&vAct,&vBeg,&vEnd,&vTot,&ilace) != 10) {
        fprintf(stderr, "bad modeline '%s'\n", mlstr); return 1;
    }

    // Preload all marker frames once.
    std::vector<std::vector<uint8_t>> markers(nmark);
    for (int i = 0; i < nmark; i++) {
        char path[512]; snprintf(path, sizeof(path), "%s/marker_%03d.raw", mdir, i);
        FILE* fp = fopen(path, "rb");
        if (!fp) { fprintf(stderr, "cannot open %s\n", path); return 1; }
        markers[i].resize(FB);
        size_t n = fread(markers[i].data(), 1, FB, fp); fclose(fp);
        if (n != FB) { fprintf(stderr, "short read %s (%zu of %zu)\n", path, n, FB); return 1; }
    }

    // Compose the slate live from the ACTUAL run params.
    std::vector<uint8_t> slateFB(FB);
    {
        char sb[6][24]; const char* lines[6];
        int nl = slate_build(sb, lines, W, H, (int)ilace, bpp, codecLabel, fps, pclock, -1);
        int scale = (W >= 600) ? 5 : 3;
        slate_compose(slateFB.data(), W, H, bpp, lines, nl, scale);
    }
    printf("[sender] %s %dx%d rgb%d ml=%s  slate=%.0fs sweep=%.0fs fps=%d\n",
           codecLabel, W, H, rgb, mlstr, slateHold, sweepSecs, fps); fflush(stdout);

    // v6-dbg: pristine copies + baselines (repair source). RAM cost = one extra frame set.
    std::vector<std::vector<uint8_t>> pristineM(nmark);
    for (int i = 0; i < nmark; i++) pristineM[i] = markers[i];
    std::vector<uint8_t> pristineSlate = slateFB;
    printf("[sender-dbg] markers[0]=%p slate=%p (pristine %p/%p)\n",
           (void*)markers[0].data(), (void*)slateFB.data(),
           (void*)pristineM[0].data(), (void*)pristineSlate.data());
    dump_maps();

    GroovyMister gm;
    gm.setNlcDispMode((uint8_t)nlcMode);
    gm.setNlcPack((uint8_t)nlcPack);
    // Connect-retry until the server binds, then switchres (CRT locks). Both REQUIRED per codec.
    int tries = 0;
    while (gm.CmdInit(host, 32100, lz4Frames, 0, 0, rgbMode, 1500) != 0) {
        if (tries++ % 5 == 0) { printf("[sender] waiting for server on %s:32100 ...\n", host); fflush(stdout); }
        sleep(1);
        if (tries > 120) { fprintf(stderr, "[sender] server never came up\n"); return 1; }
    }
    printf("[sender] connected (after %d retries)\n", tries); fflush(stdout);
    gm.CmdSwitchres(pclock, hAct,hBeg,hEnd,hTot, vAct,vBeg,vEnd,vTot, (uint8_t)ilace);
    printf("[sender] switchres applied — CRT locks now (held by the slate)\n"); fflush(stdout);

    // NLC PRE-ENCODE (the cadence fix): the per-blit software NLC encode dominates the frame period on the
    // MiSTer's 800MHz Cortex-A9 (~40ms/frame at 240p = the /41+/42 ~2.4x-slow cadence, the closed-loop limit
    // cycle that produced the garbage). But the sweep is a small FIXED set of frames (slate + nmark markers),
    // each re-sent many times. So encode each UNIQUE frame ONCE here (after CmdSwitchres sets the NLC width),
    // then every blit just ships the cached bytes via the pre-encode fast path — restoring full 60fps cadence.
    std::vector<std::vector<uint8_t>> encFrame;   // [0]=slate, [1..nmark]=markers (NLC only)
    std::vector<uint32_t>             encSize;
    if (lz4Frames == 7) {
        printf("[sender] NLC pre-encoding %d unique frames (slate + %d markers) ...\n", nmark + 1, nmark);
        fflush(stdout);
        encFrame.resize(nmark + 1); encSize.resize(nmark + 1);
        // tmp MUST be >= the cap passed to nlc_encode (BUFFER_SIZE) — a near-incompressible frame can emit up to
        // that, and nlc_encode may touch the declared cap as scratch. FB+4096 was too small (a latent overflow).
        std::vector<char> tmp(BUFFER_SIZE);
        // slate
        encSize[0] = gm.EncodeNLC((const char*)slateFB.data(), tmp.data());
        encFrame[0].assign(tmp.data(), tmp.data() + (encSize[0] ? encSize[0] : 0));
        for (int i = 0; i < nmark; i++) {
            encSize[i + 1] = gm.EncodeNLC((const char*)markers[i].data(), tmp.data());
            encFrame[i + 1].assign(tmp.data(), tmp.data() + (encSize[i + 1] ? encSize[i + 1] : 0));
        }
        printf("[sender] pre-encode done (slate=%uB, marker0=%uB)\n", encSize[0], encSize[1]); fflush(stdout);
    }

    // v6-dbg: pristine encFrame copies (NLC path)
    std::vector<std::vector<uint8_t>> pristineEnc;
    if (lz4Frames == 7) pristineEnc = encFrame;

    uint32_t f = 0;
    // slot: -1 = raw slate (non-NLC), else 0=slate 1..nmark=marker[slot-1] for the NLC cache
    auto send = [&](const uint8_t* data, int slot) {
        // v6-dbg step 1: verify the SOURCE frame against its pristine copy; repair if scribbled
        if (slot > 0) {
            if (memcmp(markers[slot-1].data(), pristineM[slot-1].data(), FB) != 0) {
                report_damage("marker-src", (int)f, markers[slot-1].data(), pristineM[slot-1].data(), FB);
                markers[slot-1] = pristineM[slot-1];
            }
        } else {
            if (memcmp(slateFB.data(), pristineSlate.data(), FB) != 0) {
                report_damage("slate-src", (int)f, slateFB.data(), pristineSlate.data(), FB);
                slateFB = pristineSlate;
            }
        }
        if (lz4Frames == 7 && slot >= 0 && encSize[slot] > 0) {
            if (encFrame[slot] != pristineEnc[slot]) {
                report_damage("encframe-src", (int)f, encFrame[slot].data(), pristineEnc[slot].data(), encFrame[slot].size());
                encFrame[slot] = pristineEnc[slot];
            }
            // pre-encode fast path: ship the cached NLC bytes, skip the software encoder
            memcpy(gm.getPBufferPreEncoded(), encFrame[slot].data(), encSize[slot]);
            gm.setPreEncodedSize(encSize[slot]);
        }
        char* buf = gm.getPBufferBlit(0);
        memcpy(buf, data, FB);   // raw is still needed (raw-fallback + delta bookkeeping)
        // v6-dbg step 2: bracket the api steps — did the blit buffer land intact, and does it
        // survive CmdBlit (compress+send) and WaitSync (ACK echo path)?
        uint64_t hSrc = fnv1a(data, FB);
        uint64_t h1 = fnv1a((const uint8_t*)buf, FB);
        if (h1 != hSrc) { report_damage("blitbuf-post-memcpy", (int)f, (const uint8_t*)buf, data, FB); }
        gm.CmdBlit(++f, 0, 0, 0, 0);
        uint64_t h2 = fnv1a((const uint8_t*)buf, FB);
        if (h2 != h1) { report_damage("blitbuf-post-CmdBlit", (int)f, (const uint8_t*)buf, data, FB); }
        gm.WaitSync();
        uint64_t h3 = fnv1a((const uint8_t*)buf, FB);
        if (h3 != h2) { report_damage("blitbuf-post-WaitSync", (int)f, (const uint8_t*)buf, data, FB); }
    };

    // SLATE: held from the moment data can flow, so it's visible the instant the CRT engages.
    printf("[sender] slate %.0fs\n", slateHold); fflush(stdout);
    double t0 = now_s();
    while (now_s() - t0 < slateHold) send(slateFB.data(), 0);

    // SWEEP: slow marker motion (wall-clock paced to fps) for the cellphone rolling shutter.
    printf("[sender] sweep %.0fs @ %dfps\n", sweepSecs, fps); fflush(stdout);
    t0 = now_s(); int lastSec = -1;
    for (;;) {
        double el = now_s() - t0;
        if (el >= sweepSecs) break;
        int idx = (int)(el * fps) % nmark;
        send(markers[idx].data(), idx + 1);
        int sec = (int)el;
        if (sec != lastSec) { lastSec = sec; printf("  t=%2ds frame=%u marker=%03d\n", sec, f, idx); fflush(stdout); }
    }

    printf("[sender] done: %u frames (%s) | CRC-FAILs=%d\n", f, codec, g_crcFails); fflush(stdout);
    gm.CmdClose();

    // Snapshot this codec's app log AFTER CmdClose (CmdClose doesn't truncate; the NEXT codec's CmdInit will).
    if (applogdir) {
        char dst[512]; snprintf(dst, sizeof(dst), "%s/groovy_%s.log", applogdir, codec);
        snapshot_log(dst);
    }
    // /52: the /43-era `_exit(0)` workaround is RETIRED. That "ARM-only heap issue at the 480
    // frame size" was the FIRST symptom of the DDR-buffer/Linux-RAM physical overlap (Groovy
    // buffer at 0x1C000000 inside mem=511M — root-caused /49-/51, fixed by relocating to
    // 0x30000000). With the overlap gone the heap stays intact, and a NORMAL exit through
    // ~GroovyMister is deliberately restored as a permanent corruption CANARY: if this process
    // ever aborts at exit again, physical-page collisions are back — investigate immediately.
    fflush(stdout); fflush(stderr);
    return 0;
}
