// soft_groovy.cpp — a native, faithful local stand-in for the clean MiSTer_groovy UDP receive+framing path.
//
// PURPOSE: a fully-local loopback so wire/framing bugs (e.g. the MTU payload mismatch that caused recv=0 on
// every prior HW run) are caught on the dev machine, NOT on hardware. It speaks the SAME groovy UDP protocol
// the real app does — the protocol constants and the blit FRAMING are copied VERBATIM from the clean
// hps_linux/src/support/groovy/groovy.cpp (line citations inline) so it accepts/rejects packets exactly as
// the ARM app does. The FPGA + CRT are the only things substituted: pixels land in a malloc'd DDR model
// (recvfrom zero-copy, exactly as on HW: groovy.cpp:2496), and on each completed blit we dump the assembled
// framebuffer to recv_NNN.raw (LZ4 decoded). Those recv_NNN.raw MUST equal the source marker_NNN.raw — that
// equality is the wire/framing gate.
//
// Platform note: the framing here is platform-independent C; x86 and ARM are both little-endian, so a native
// build behaves like the ARM app for the wire protocol. Only the FPGA/CRT differ (modeled here, Verilated +
// PPM-dumped in the display stage of the pipeline).
//
// Build: g++ -O2 -o soft_groovy soft_groovy.cpp <clean api lz4> -I<clean api/lz4>
// Usage: soft_groovy <outdir> [port=32100]   (writes recv_000.raw, recv_001.raw, ... into outdir)

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include <unistd.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include "lz4.h"
#include "nlc_codec.h"

// ---- protocol constants, VERBATIM from clean groovy.cpp ----
#define CMD_CLOSE 1            // groovy.cpp:113-120
#define CMD_INIT 2
#define CMD_SWITCHRES 3
#define CMD_AUDIO 4
#define CMD_GET_STATUS 5
#define CMD_BLIT_VSYNC 6
#define CMD_BLIT_FIELD_VSYNC 7
#define CMD_GET_VERSION 8
#define GROOVY_VERSION 1

#define HEADER_LEN 0xff       // groovy.cpp:82-94
#define CHUNK 7
#define HEADER_OFFSET (HEADER_LEN - CHUNK)   // 248
#define FIELD_OFFSET 0x195000
#define AUDIO_OFFSET 0x32a000
#define LZ4_OFFSET_A 0x332000
#define LZ4_OFFSET_B 0x4c7000
#define LZ4_OFFSET_C 0x65c000
#define LZ4_OFFSET_D 0x7f1000
#define DDR_SIZE 0x1000000    // 16 MB model (> LZ4_OFFSET_D + a frame)

// ---- session state (subset of the app's poc/globals that the framing touches) ----
static uint8_t* buffer;                       // DDR model (recvfrom target)
static int      blitCompression = 0;          // 0=raw 1=lz4/nlc (compressed transport)
static int      nlcMode = 0;                   // 1 = codec is NLC (decode via nlc_codec, not LZ4)
static int      nlcNear = 0;                   // CMD_INIT byte[1] bits [3:2]
static int      nlcRice = 0;                   // CMD_INIT byte[1] bit 7 (R5 negotiation: 1 = RICE pack)
static int      rgbMode = 0;                  // 0=888 2=565
static int      progressive = 1;
static uint32_t H = 0, V = 0;
static uint32_t bytes_len = 0;                // raw frame bytes
static uint32_t bytes_lz4_len = 0;            // compressed bytes for this frame
static uint32_t bytes_recv = 0;
static uint32_t buffer_offset = 0;
static int      field_lz4 = 0;
static int      isBlitting = 0;
static uint32_t frame_recv = 0;
static uint32_t fpga_vga_frame = 0;           // modeled: always "caught up" so WaitSync returns
static int      frames_out = 0;
static const char* outdir = ".";

static int sockfd;
static struct sockaddr_in cli;
static socklen_t clilen = sizeof(cli);

static void send_to_client(const void* p, int n) {
    sendto(sockfd, p, n, 0, (struct sockaddr*)&cli, clilen);
}

// sendACK — 13 bytes, layout VERBATIM from groovy.cpp:1056-1095. We report the frame as fully displayed
// (fpga_vga_frame=frame, vram_synced/ready/end=1) so the sender's WaitSync never stalls.
static void sendACK(uint32_t frame, uint16_t vsync) {
    uint8_t b[13];
    b[0]=frame; b[1]=frame>>8; b[2]=frame>>16; b[3]=frame>>24;
    b[4]=vsync; b[5]=vsync>>8;
    b[6]=fpga_vga_frame; b[7]=fpga_vga_frame>>8; b[8]=fpga_vga_frame>>16; b[9]=fpga_vga_frame>>24;
    b[10]=0; b[11]=0;                          // vcount
    b[12]=0x07;                                // bit0 ready, bit1 end_frame, bit2 synced
    send_to_client(b, 13);
}
static void sendVersion() { uint8_t v = GROOVY_VERSION; send_to_client(&v, 1); }

// dump the assembled framebuffer for this frame. RAW: bytes are already the FB. LZ4: decode the block.
static void dump_frame() {
    char path[512];
    snprintf(path, sizeof(path), "%s/recv_%03d.raw", outdir, frames_out);
    FILE* f = fopen(path, "wb");
    if (!f) { fprintf(stderr, "[soft_groovy] cannot write %s\n", path); return; }
    static uint8_t fb[16*1024*1024];
    const char* how = "raw";
    if (!blitCompression) {
        fwrite(buffer + HEADER_OFFSET, 1, bytes_len, f);
    } else if (nlcMode) {
        nlc_params np; memset(&np, 0, sizeof(np));
        np.width = H; np.height = V;
        np.rgb = (rgbMode == 1) ? NLC_RGBA : (rgbMode == 2) ? NLC_RGB565 : NLC_RGB888;
        np.color = NLC_COLOR_YCOCG; np.near_lvl = nlcNear;
        np.pack = nlcRice ? NLC_PACK_RICE : NLC_PACK_TILED;
        np.tile = 16; np.width_bits = 4; np.rice_k = -1;
        int r = nlc_decode((const uint8_t*)(buffer + HEADER_OFFSET + buffer_offset), bytes_lz4_len, fb, &np);
        if (r != 0)   // nlc_decode returns 0 on SUCCESS and fills `fb` with bytes_len bytes (unlike LZ4)
            fprintf(stderr, "[soft_groovy] NLC decode failed (%d) for frame %d\n", r, frames_out);
        fwrite(fb, 1, bytes_len, f);
        how = "nlc->fb";
    } else {
        int got = LZ4_decompress_safe((const char*)(buffer + HEADER_OFFSET + buffer_offset),
                                      (char*)fb, (int)bytes_lz4_len, (int)bytes_len);
        if (got != (int)bytes_len)
            fprintf(stderr, "[soft_groovy] LZ4 decode %d != %u for frame %d\n", got, bytes_len, frames_out);
        fwrite(fb, 1, (got > 0 ? got : 0), f);
        how = "lz4->fb";
    }
    fclose(f);
    printf("[soft_groovy] frame %d -> recv_%03d.raw (%s %u bytes)\n",
           frames_out, frames_out, how, bytes_len);
    frames_out++;
}

// setBlitRaw / setBlitLZ4 — byte accounting, VERBATIM logic from groovy.cpp:1304-1367. Completion (isBlitting
// 1->0) triggers the frame dump (the app hands the completed FB to the FPGA here).
static void setBlitRaw(int len) {
    bytes_recv += len;
    isBlitting = (bytes_recv >= bytes_len) ? 0 : 1;
    if (isBlitting == 0) { fpga_vga_frame = frame_recv; dump_frame(); }
}
static void setBlitLZ4(int len) {
    bytes_recv += len;
    isBlitting = (bytes_recv >= bytes_lz4_len) ? 0 : 1;
    if (isBlitting == 0) { fpga_vga_frame = frame_recv; dump_frame(); }
}

// setBlit — start a blit, VERBATIM logic from groovy.cpp:1198-1241 (raw/lz4 non-delta path only).
static void setBlit(uint32_t frame, uint8_t field, uint32_t lz4_size) {
    frame_recv = frame;
    bytes_recv = 0;
    bytes_lz4_len = blitCompression ? lz4_size : 0;
    if (blitCompression) {
        buffer_offset = (field_lz4==3)?LZ4_OFFSET_D:(field_lz4==2)?LZ4_OFFSET_C:(field_lz4==1)?LZ4_OFFSET_B:LZ4_OFFSET_A;
        field_lz4 = (field_lz4==3)?0:field_lz4+1;
    } else {
        buffer_offset = 0;   // progressive
        field_lz4 = 0;
    }
    isBlitting = 1;
}

// process_packet — the FRAMING, copied VERBATIM from groovy.cpp:1924-2139 (raw+lz4 non-delta path). The
// `len < 1472` short/final/error detection is the exact logic the MTU bug tripped.
static void process_packet(char* p, int len) {
    if (len <= 0) return;
    if (isBlitting) {
        if (len > 0 && len < 1472) {              // groovy.cpp:1931
            int prev_len = len, tota_len = 0;
            if (isBlitting == 1 && !blitCompression && bytes_recv + len != bytes_len) {     // :1935
                isBlitting = 0; prev_len = bytes_len % 1472; tota_len = bytes_len;
            }
            if (isBlitting == 1 && blitCompression && bytes_recv + len != bytes_lz4_len) {  // :1945
                isBlitting = 0; prev_len = bytes_lz4_len % 1472; tota_len = bytes_lz4_len;
            }
            if (!isBlitting) {                    // :1961
                if (len != prev_len && len <= 26) {
                    // reconfig: a real short command snuck in mid-blit; fall through to the command switch
                } else {
                    fprintf(stderr, "[soft_groovy][UDP_ERROR][fr=%u recv=%u/%d len=%d]\n",
                            frame_recv, bytes_recv, tota_len, len);
                    len = -1;
                }
            }
        }
    }
    if (len < 0) return;

    if (!isBlitting) {                            // command dispatch, groovy.cpp:1979
        switch ((uint8_t)p[0]) {
            case CMD_GET_VERSION: if (len==1) sendVersion(); break;
            case CMD_CLOSE:       if (len==1) { isBlitting=0; bytes_len=0; } break;
            case CMD_INIT:
                if (len==4 || len==5) {
                    uint8_t comp = p[1];
                    int codec = comp & 3;            // api packs codec in [1:0]: 0=raw 1=lz4 2=nlc (+near/colour bits)
                    blitCompression = (codec >= 1) ? 1 : 0;   // lz4 AND nlc use the compressed transport
                    nlcMode = (codec == 2);
                    nlcNear = (comp >> 2) & 3;       // byte[1] bits [3:2]
                    nlcRice = (comp >> 7) & 1;       // byte[1] bit 7 (R5 negotiation)
                    rgbMode = (len==5) ? ((p[4] <= 2) ? p[4] : 0) : 0;
                    // FIDELITY: the real app does poc = calloc(...) on CMD_INIT (setInit), so bytes_len -> 0.
                    // Only CmdSwitchres restores it (groovy.cpp:788). Modeling this means a codec switch
                    // WITHOUT a following CmdSwitchres now correctly FAILS here (frames skipped, none assemble)
                    // — exactly the /33 hardware hang, instead of silently passing.
                    isBlitting = 0; bytes_recv = 0; field_lz4 = 0; bytes_len = 0; bytes_lz4_len = 0;
                    printf("[soft_groovy] CMD_INIT lz4=%d rgb=%d near=%d rice=%d (bytes_len reset to 0; needs CmdSwitchres)\n", blitCompression, rgbMode, nlcNear, nlcRice);
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
                    bytes_len = (rgbMode==1) ? pixels<<2 : (rgbMode==2) ? pixels<<1 : pixels*3;  // :788
                    printf("[soft_groovy] CMD_SWITCHRES %ux%u il=%d -> bytes_len=%u\n", H, V, il, bytes_len);
                }
                break;
            case CMD_BLIT_FIELD_VSYNC:
                if (len==8 || len==12 || len==9 || len==13) {
                    uint32_t frame = ((uint32_t)(uint8_t)p[4]<<24)|((uint32_t)(uint8_t)p[3]<<16)|((uint32_t)(uint8_t)p[2]<<8)|(uint8_t)p[1];
                    uint8_t  field = progressive ? 0 : (uint8_t)p[5];
                    uint16_t vsync = ((uint16_t)(uint8_t)p[7]<<8)|(uint8_t)p[6];
                    uint32_t lz4_size = 0;
                    if ((len==12 || len==13) && blitCompression)
                        lz4_size = ((uint32_t)(uint8_t)p[11]<<24)|((uint32_t)(uint8_t)p[10]<<16)|((uint32_t)(uint8_t)p[9]<<8)|(uint8_t)p[8];
                    setBlit(frame, field, lz4_size);
                    sendACK(frame, vsync);
                }
                break;
            case CMD_GET_STATUS: if (len==1) sendACK(0, 0); break;
            case CMD_AUDIO:      /* ignore audio in the baseline */ break;
            default: break;
        }
    } else {                                      // groovy.cpp:2113 — feed blit data
        if (bytes_len > 0) {
            if (isBlitting == 1) { if (blitCompression) setBlitLZ4(len); else setBlitRaw(len); }
        } else {
            // CmdInit without a following CmdSwitchres (the /33 hang): no modeline -> every blit skipped.
            fprintf(stderr, "[soft_groovy][UDP_BLIT][%d bytes][Skipped no modeline]\n", len);
            isBlitting = 0;
        }
    }
}

int main(int argc, char** argv) {
    if (argc < 2) { fprintf(stderr, "usage: %s <outdir> [port=32100]\n", argv[0]); return 1; }
    outdir = argv[1];
    int port = (argc > 2) ? atoi(argv[2]) : 32100;

    buffer = (uint8_t*)malloc(DDR_SIZE);
    if (!buffer) { fprintf(stderr, "DDR malloc failed\n"); return 1; }

    sockfd = socket(AF_INET, SOCK_DGRAM, 0);
    int reuse = 1; setsockopt(sockfd, SOL_SOCKET, SO_REUSEADDR, &reuse, sizeof(reuse));
    struct sockaddr_in srv; memset(&srv, 0, sizeof(srv));
    srv.sin_family = AF_INET; srv.sin_addr.s_addr = htonl(INADDR_ANY); srv.sin_port = htons(port);
    if (bind(sockfd, (struct sockaddr*)&srv, sizeof(srv)) < 0) { perror("bind"); return 1; }
    printf("[soft_groovy] listening on :%d, dumping to %s\n", port, outdir);

    static char recvbuf[65536];
    for (;;) {
        // zero-copy into the DDR model while blitting, exactly as groovy.cpp:2496
        char* dst = isBlitting ? (char*)(buffer + HEADER_OFFSET + buffer_offset + bytes_recv) : recvbuf;
        int len = recvfrom(sockfd, dst, 65536, 0, (struct sockaddr*)&cli, &clilen);
        if (len < 0) continue;
        process_packet(dst, len);
    }
    return 0;
}
