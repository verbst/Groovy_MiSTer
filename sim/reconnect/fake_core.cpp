// fake_core.cpp — a native UDP stand-in for the MiSTer_groovy core, purpose-built to reproduce the
// setAutoReconnect() reconnect hang (UPSTREAM_REPORT_groovymister_reconnect_state.md), and now also
// the SEPARATE frame-adoption-desync corruption bug (lost CMD_CLOSE during a black-hole).
//
// It speaks the real groovy wire framing (constants + blit reassembly copied from the loopback fake
// sim/loopback/soft_groovy.cpp, raw transport only), but with the details the reports say are
// essential and easy to get wrong — a lockstep fake hides the bugs completely:
//
//   1. fpga_vga_frame is the core's OWN counter, incremented once per displayed frame — it is NOT
//      slaved to the echoed client frame (soft_groovy.cpp:134 does `fpga_vga_frame = frame_recv`,
//      the lockstep that keeps echo==gpu and never diverges).
//   2. fpga_vga_frame (and the frame-adoption gate below) is reset to 0 only on a genuine cmd_init
//      0->1 EDGE — i.e. only when a real CMD_CLOSE was processed before this CMD_INIT. This mirrors
//      the real core: cmd_init is a level held by the FPGA (Groovy.sv/hps_ext.v) and is driven low by
//      setClose()'s groovy_FPGA_init(0,...) and high by setInit()'s groovy_FPGA_init(1,...) — the FSM
//      only re-zeros its frame counters by passing through S_Idle, which requires an actual low phase.
//      A CMD_INIT that arrives while cmd_init was ALREADY 1 (because the preceding CMD_CLOSE was lost)
//      does NOT reset anything on the real core. (Earlier revisions of this file reset unconditionally
//      on every CMD_INIT — that assumption is exactly what hid the frame-adoption-desync bug from the
//      reconnect-hang sim validation.)
//   3. setBlit() enforces the same strict monotonic frame-adoption gate the real core does
//      (Groovy.sv:1629/1707: `new_frame > PoC_frame_lz4`, else silently ignored) via
//      `last_accepted_frame`. Combined with #2, a lost CMD_CLOSE leaves this gate parked at its
//      pre-hole value, and a client that restarts its own frame numbering low after reconnect can
//      never satisfy it again for the rest of the session — the exact "video corrupted, never
//      recovers" failure, distinct from the (already-fixed) hang/loop this file originally targeted.
//
// sendACK still echoes the client's blit frame in bytes[0:4] and reports fpga_vga_frame in bytes[6:10],
// exactly as the real core does. Plus a "black-hole" window: after N acked frames it drops all input
// (no ACKs) for a few seconds, so the client's watchdog fires an internal reconnect. Because
// CmdSendClose() is resent by the client on every retry (once/sec) for as long as the hole lasts, a
// hole_ms long enough to span those retries reproduces a real dropped-CMD_CLOSE, which is exactly the
// scenario in point #2/#3 above.
//
// A 4th arg, force_reset_on_init, simulates the proposed Option-A fix (setInit() unconditionally
// pulsing groovy_FPGA_init(0,...) before (1,...) on every CMD_INIT): when set to 1, every CMD_INIT
// is treated as a genuine edge regardless of whether CMD_CLOSE was actually seen first, so the
// frame-adoption gate always resets on reconnect. force_reset_on_init=0 (default) is today's real
// (buggy) behavior.
//
// Build: g++ -O2 -o fake_core fake_core.cpp
// Usage: fake_core [port=32200] [hole_after_frames=60] [hole_ms=4000] [force_reset_on_init=0]

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include <unistd.h>
#include <time.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>

// ---- protocol constants, VERBATIM from clean groovy.cpp / soft_groovy.cpp ----
#define CMD_CLOSE 1
#define CMD_INIT 2
#define CMD_SWITCHRES 3
#define CMD_AUDIO 4
#define CMD_GET_STATUS 5
#define CMD_BLIT_VSYNC 6
#define CMD_BLIT_FIELD_VSYNC 7
#define CMD_GET_VERSION 8
#define GROOVY_VERSION 1

#define HEADER_LEN 0xff
#define CHUNK 7
#define HEADER_OFFSET (HEADER_LEN - CHUNK)   // 248
#define DDR_SIZE 0x1000000                   // 16 MB model

// ---- session state (subset the raw framing touches) ----
static uint8_t* buffer;                       // DDR model (recvfrom target while blitting)
static int      rgbMode = 0;                  // 0=888
static int      progressive = 1;
static uint32_t H = 0, V = 0;
static uint32_t bytes_len = 0;                // raw frame bytes (0 until CmdSwitchres, as the real app)
static uint32_t bytes_recv = 0;
static int      isBlitting = 0;
static uint32_t frame_recv = 0;               // last client blit frame (echoed)
static uint32_t fpga_vga_frame = 0;           // core's OWN frame counter (independent; reset on a real cmd_init edge)
static uint32_t blits_acked = 0;              // completed frames this process has seen
static uint32_t inits_seen = 0;
static int      cmd_init = 0;                 // mirrors the real FPGA level: 0=closed, 1=session active
static uint32_t last_accepted_frame = 0;      // mirrors PoC_frame_lz4: strict-monotonic adoption gate
static uint32_t frames_rejected = 0;          // telemetry: setBlit() calls dropped by the stale gate
static int      force_reset_on_init = 0;      // simulates the proposed Option-A HPS fix (see header)

static int sockfd;
static struct sockaddr_in cli;
static socklen_t clilen = sizeof(cli);

// ---- black-hole control ----
static uint32_t hole_after = 60;              // arm after this many completed frames
static uint64_t hole_ms    = 4000;            // drop all input for this long
static uint64_t hole_until = 0;
static int      hole_state = 0;               // 0=pending 1=active 2=done

static uint64_t now_ms(void) {
    struct timespec t; clock_gettime(CLOCK_MONOTONIC, &t);
    return (uint64_t)t.tv_sec * 1000ull + (uint64_t)(t.tv_nsec / 1000000);
}

// currently black-holed? arms once blits_acked reaches hole_after; lasts hole_ms.
static bool in_hole(void) {
    if (hole_state == 0 && blits_acked >= hole_after) {
        hole_until = now_ms() + hole_ms;
        hole_state = 1;
        printf("[fake] *** BLACK-HOLE START (dropping all input) after %u acked frames for %llums ***\n",
               blits_acked, (unsigned long long)hole_ms);
        fflush(stdout);
    }
    if (hole_state == 1) {
        if (now_ms() >= hole_until) {
            hole_state = 2;
            printf("[fake] *** BLACK-HOLE END — resuming; frame counter only resets if a CMD_CLOSE\n"
                   "[fake]     actually got through during the hole (cmd_init edge required) ***\n");
            fflush(stdout);
            return false;
        }
        return true;
    }
    return false;
}

static void send_to_client(const void* p, int n) {
    sendto(sockfd, p, n, 0, (struct sockaddr*)&cli, clilen);
}

// sendACK — 13 bytes, layout VERBATIM from groovy.cpp. bytes[0:4]=echoed client frame,
// bytes[6:10]=fpga_vga_frame (the core's own counter), status bits ready/end/synced set.
static void sendACK(uint32_t frame, uint16_t vsync) {
    uint8_t b[13];
    b[0]=frame; b[1]=frame>>8; b[2]=frame>>16; b[3]=frame>>24;
    b[4]=vsync; b[5]=vsync>>8;
    b[6]=fpga_vga_frame; b[7]=fpga_vga_frame>>8; b[8]=fpga_vga_frame>>16; b[9]=fpga_vga_frame>>24;
    b[10]=0; b[11]=0;                          // vcount
    b[12]=0x07;                                // bit0 ready, bit1 end_frame, bit2 synced
    send_to_client(b, 13);
}
static void sendVersion(void) { uint8_t v = GROOVY_VERSION; send_to_client(&v, 1); }

// blit completion: the CORE displays the frame and advances its OWN counter by one. Crucially NOT
// `fpga_vga_frame = frame_recv` — that lockstep (soft_groovy.cpp:134) hides the reconnect bug.
static void on_frame_complete(void) {
    fpga_vga_frame++;
    blits_acked++;
}

static void setBlitRaw(int len) {
    bytes_recv += len;
    isBlitting = (bytes_recv >= bytes_len) ? 0 : 1;
    if (isBlitting == 0) on_frame_complete();
}

static void setBlit(uint32_t frame) {
    // real-core gate (Groovy.sv:1629/1707): a new frame is only adopted if it's strictly greater
    // than the last accepted one; otherwise it's silently ignored (isBlitting stays whatever it was).
    if (frame <= last_accepted_frame) {
        frames_rejected++;
        fprintf(stderr, "[fake][GATE] frame=%u REJECTED (last_accepted=%u) total_rejected=%u\n",
                frame, last_accepted_frame, frames_rejected);
        return;
    }
    last_accepted_frame = frame;
    frame_recv = frame;
    bytes_recv = 0;
    isBlitting = 1;
}

// process_packet — raw, non-delta framing, faithful to soft_groovy.cpp (which mirrors groovy.cpp).
static void process_packet(char* p, int len) {
    if (len <= 0) return;
    if (isBlitting) {
        if (len > 0 && len < 1472) {
            int prev_len = len, tota_len = 0;
            if (isBlitting == 1 && bytes_recv + (uint32_t)len != bytes_len) {
                isBlitting = 0; prev_len = bytes_len % 1472; tota_len = bytes_len;
            }
            if (!isBlitting) {
                if (len != prev_len && len <= 26) {
                    // a real short command snuck in mid-blit; fall through to the command switch
                } else {
                    fprintf(stderr, "[fake][UDP_ERROR][fr=%u recv=%u/%d len=%d]\n",
                            frame_recv, bytes_recv, tota_len, len);
                    len = -1;
                }
            }
        }
    }
    if (len < 0) return;

    if (!isBlitting) {
        switch ((uint8_t)p[0]) {
            case CMD_GET_VERSION: if (len==1) sendVersion(); break;
            case CMD_CLOSE:
                if (len==1) {
                    isBlitting=0; bytes_len=0;
                    cmd_init = 0;   // real setClose() -> groovy_FPGA_init(0,...) -> cmd_init low
                    printf("[fake] CMD_CLOSE (cmd_init -> 0)\n"); fflush(stdout);
                }
                break;
            case CMD_INIT:
                if (len==4 || len==5) {
                    rgbMode = (len==5) ? ((p[4] <= 2) ? p[4] : 0) : 0;
                    isBlitting = 0; bytes_recv = 0; bytes_len = 0;
                    // real core: fpga_vga_frame/PoC_frame_lz4 only re-zero on a genuine cmd_init
                    // 0->1 EDGE (S_Idle pass). If CMD_CLOSE was lost, cmd_init is already 1 here and
                    // this CMD_INIT does NOT reset anything -> the stale gate stays parked.
                    bool edge = (cmd_init == 0) || force_reset_on_init;
                    if (edge) {
                        fpga_vga_frame = 0;
                        last_accepted_frame = 0;
                    }
                    cmd_init = 1;
                    inits_seen++;
                    printf("[fake] CMD_INIT #%u rgb=%d edge=%d -> fpga_vga_frame=%u last_accepted_frame=%u%s\n",
                           inits_seen, rgbMode, edge, fpga_vga_frame, last_accepted_frame,
                           edge ? "" : " (NO RESET - stale gate carried over)");
                    fflush(stdout);
                    sendACK(0, 0);
                }
                break;
            case CMD_SWITCHRES:
                if (len==26) {
                    memcpy(&H, &p[9], 2);  H &= 0xffff;
                    memcpy(&V, &p[17], 2); V &= 0xffff;
                    uint8_t il = (uint8_t)p[25];
                    progressive = (il == 0);
                    uint32_t pixels = H * V;
                    bytes_len = (rgbMode==1) ? pixels<<2 : (rgbMode==2) ? pixels<<1 : pixels*3;
                    printf("[fake] CMD_SWITCHRES %ux%u il=%d -> bytes_len=%u\n", H, V, il, bytes_len);
                    fflush(stdout);
                }
                break;
            case CMD_BLIT_FIELD_VSYNC:
            case CMD_BLIT_VSYNC:
                if (len==8 || len==12 || len==9 || len==13) {
                    uint32_t frame = ((uint32_t)(uint8_t)p[4]<<24)|((uint32_t)(uint8_t)p[3]<<16)|((uint32_t)(uint8_t)p[2]<<8)|(uint8_t)p[1];
                    uint16_t vsync = ((uint16_t)(uint8_t)p[7]<<8)|(uint8_t)p[6];
                    setBlit(frame);
                    // ACK reports the previously-completed frame in gpu (one-frame pipeline lag) —
                    // healthy spread is ~1; a reconnect makes it hundreds.
                    sendACK(frame, vsync);
                    if (bytes_len == 0) { isBlitting = 0; } // no modeline yet
                }
                break;
            case CMD_GET_STATUS: if (len==1) sendACK(0, 0); break;
            case CMD_AUDIO:      break;
            default: break;
        }
    } else {
        if (bytes_len > 0) setBlitRaw(len);
        else               isBlitting = 0;
    }
}

// drain everything currently queued (non-blocking) — used at hole-exit to discard stale datagrams
// from the client's failed-reconnect sockets so the first packet we process afterward is fresh.
static int drain_pending(void) {
    char tmp[65536]; struct sockaddr_in c; socklen_t cl = sizeof(c); int n = 0;
    for (;;) { int r = recvfrom(sockfd, tmp, sizeof(tmp), MSG_DONTWAIT, (struct sockaddr*)&c, &cl); if (r < 0) break; n++; }
    return n;
}

int main(int argc, char** argv) {
    int port = (argc > 1) ? atoi(argv[1]) : 32200;
    if (argc > 2) hole_after = (uint32_t)atoi(argv[2]);
    if (argc > 3) hole_ms    = (uint64_t)atoll(argv[3]);
    if (argc > 4) force_reset_on_init = atoi(argv[4]);

    buffer = (uint8_t*)malloc(DDR_SIZE);
    if (!buffer) { fprintf(stderr, "DDR malloc failed\n"); return 1; }

    sockfd = socket(AF_INET, SOCK_DGRAM, 0);
    int reuse = 1; setsockopt(sockfd, SOL_SOCKET, SO_REUSEADDR, &reuse, sizeof(reuse));
    struct sockaddr_in srv; memset(&srv, 0, sizeof(srv));
    srv.sin_family = AF_INET; srv.sin_addr.s_addr = htonl(INADDR_ANY); srv.sin_port = htons(port);
    if (bind(sockfd, (struct sockaddr*)&srv, sizeof(srv)) < 0) { perror("bind"); return 1; }
    printf("[fake] listening on :%d  (black-hole after %u frames for %llums) force_reset_on_init=%d\n",
           port, hole_after, (unsigned long long)hole_ms, force_reset_on_init);
    fflush(stdout);

    static char recvbuf[65536];
    bool prev_holed = false;
    for (;;) {
        bool holed = in_hole();
        if (prev_holed && !holed) {
            int d = drain_pending();
            printf("[fake] flushed %d stale datagram(s) after hole\n", d);
            fflush(stdout);
        }
        prev_holed = holed;

        char* dst = (!holed && isBlitting) ? (char*)(buffer + HEADER_OFFSET + bytes_recv) : recvbuf;
        int len = recvfrom(sockfd, dst, 65536, 0, (struct sockaddr*)&cli, &clilen);
        if (len < 0) continue;
        if (holed) { isBlitting = 0; bytes_recv = 0; continue; } // black-holed: drop, freeze core state
        process_packet(dst, len);
    }
    return 0;
}
