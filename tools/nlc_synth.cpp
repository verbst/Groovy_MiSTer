// nlc_synth.cpp — generate synthetic RGB test frames and encode them to .raw / .lz4 / .nlc blobs for the
// Groovy display tests (host sender + Verilator sim, fed byte-identically).
//
//   nlc_synth <pattern> <frame_idx> <out.{nlc|lz4|raw}> [options]
//     pattern : flat | gradient | bars | detail | marker | slate
//   options:
//     -w W       frame width  (default 720)
//     -h H       frame height (default 480)
//     -d depth   bytes/pixel: 3 = RGB888 (default), 2 = RGB565
//     -l label   scene tally label (cyan squares, count = label); <0 = none
//     -c codec   slate text codec field: raw|lz4|nlc (default raw)
//     -f fps     slate text fps field (default 30)
//     -k clkMHz  slate text pixel-clock field in MHz (default 0)
//     -i ilace   slate text interlace flag 0/1 (default 0 = progressive)
//
// Output format is chosen by the extension:
//   .nlc  near0 / YCoCg / tile16 / RGB888 (what the host sends for NLC)
//   .lz4  LZ4_compress_HC of the FB bytes (what the host sends for LZ4)
//   .raw  the FB bytes uncompressed (what the host writes to the framebuffer for RAW)
// .lz4/.raw are emitted in the FPGA framebuffer byte order (RGB888 = B,G,R per pixel; RGB565 = LE R5G6B5),
// so the decompressed/raw bytes land exactly as the scan-out expects.
// "marker" overlays a moving vertical bar + a binary frame-counter bar so freeze vs advance is obvious on
// screen; cycle marker_000..marker_059 in the harness for motion. "slate" draws a settings card (shared
// tools/slate.h) so every take is self-identifying.
//
// Build:  g++ -O2 -o nlc_synth nlc_synth.cpp ../api/nlc_codec.cpp \
//             ../api/lz4/lz4.c ../api/lz4/lz4hc.c -I../api

#include "nlc_codec.h"
#include "lz4/lz4.h"
#include "lz4/lz4hc.h"
#include "slate.h"
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cstdint>
#include <string>
#include <vector>

static int W = 720, H = 480;

static inline void put(std::vector<uint8_t>& img, int x, int y, uint8_t r, uint8_t g, uint8_t b) {
    if (x < 0 || x >= W || y < 0 || y >= H) return;
    size_t i = ((size_t)y * W + x) * 3;
    img[i] = r; img[i + 1] = g; img[i + 2] = b;
}

// draw a filled rect (for the frame-counter blocks / moving bar)
static void rect(std::vector<uint8_t>& img, int x0, int y0, int w, int h, uint8_t r, uint8_t g, uint8_t b) {
    for (int y = y0; y < y0 + h; y++)
        for (int x = x0; x < x0 + w; x++) put(img, x, y, r, g, b);
}

// Scene-identity label: a row of (label+1) cyan tally squares along the very top of the frame.
static void draw_label(std::vector<uint8_t>& img, int label) {
    if (label < 0) return;
    int sq = (H >= 240) ? 26 : 12, step = sq + 8, m = 6;
    for (int n = 0; n < label && n < 20; n++)
        rect(img, m + n * step, m, sq, sq, 0, 255, 255);   // cyan squares
}

int main(int argc, char** argv) {
    if (argc < 4) {
        fprintf(stderr, "usage: %s <flat|gradient|bars|detail|marker|slate> <frame_idx> <out.{nlc|lz4|raw}> "
                        "[-w W] [-h H] [-d depth] [-l label] [-c codec] [-f fps] [-k clkMHz] [-i ilace]\n", argv[0]);
        return 1;
    }
    std::string pat = argv[1];
    int fi = atoi(argv[2]);
    const char* out = argv[3];
    int depth = 3, label = -1, fps = 30, ilace = 0;
    const char* codec = "raw";
    double clkMHz = 0.0;
    for (int a = 4; a < argc - 1; a++) {
        if      (!strcmp(argv[a], "-w")) W = atoi(argv[++a]);
        else if (!strcmp(argv[a], "-h")) H = atoi(argv[++a]);
        else if (!strcmp(argv[a], "-d")) depth = atoi(argv[++a]);
        else if (!strcmp(argv[a], "-l")) label = atoi(argv[++a]);
        else if (!strcmp(argv[a], "-c")) codec = argv[++a];
        else if (!strcmp(argv[a], "-f")) fps = atoi(argv[++a]);
        else if (!strcmp(argv[a], "-k")) clkMHz = atof(argv[++a]);
        else if (!strcmp(argv[a], "-i")) ilace = atoi(argv[++a]);
    }
    if (W <= 0 || H <= 0 || (depth != 2 && depth != 3)) { fprintf(stderr, "bad -w/-h/-d\n"); return 1; }

    const size_t NPX = (size_t)W * H;
    const size_t FBSZ = NPX * depth;
    std::vector<uint8_t> fb(FBSZ);

    if (pat == "slate") {
        // Compose the settings card directly in FB byte order (shared renderer).
        char sb[6][24]; const char* lines[6];
        int nl = slate_build(sb, lines, W, H, ilace, depth, codec, fps, clkMHz, fi);
        int scale = (W >= 600) ? 5 : 3;
        slate_compose(fb.data(), W, H, depth, lines, nl, scale);
    } else {
        // Procedural patterns build RGB888 `img`, then convert to FB byte order below.
        std::vector<uint8_t> img(NPX * 3, 0);
        if (pat == "flat") {
            for (int y = 0; y < H; y++) for (int x = 0; x < W; x++) put(img, x, y, 64, 96, 160);
        } else if (pat == "gradient") {
            for (int y = 0; y < H; y++) for (int x = 0; x < W; x++)
                put(img, x, y, (uint8_t)(x * 255 / (W - 1)), (uint8_t)(y * 255 / (H - 1)), 128);
        } else if (pat == "bars") {
            static const uint8_t c[8][3] = {{255,255,255},{255,255,0},{0,255,255},{0,255,0},
                                            {255,0,255},{255,0,0},{0,0,255},{0,0,0}};
            for (int y = 0; y < H; y++) for (int x = 0; x < W; x++) {
                const uint8_t* k = c[(x * 8) / W]; put(img, x, y, k[0], k[1], k[2]);
            }
        } else if (pat == "detail") {
            for (int y = 0; y < H; y++) for (int x = 0; x < W; x++)
                put(img, x, y, (uint8_t)((x * 7 + y * 3)), (uint8_t)((x * 3 + y * 7)), (uint8_t)((x ^ y) * 5));
        } else if (pat == "marker") {
            // gradient base (so the frame is clearly visible) ...
            for (int y = 0; y < H; y++) for (int x = 0; x < W; x++)
                put(img, x, y, (uint8_t)(x * 255 / (W - 1)), (uint8_t)(y * 255 / (H - 1)), 64);
            // ... a moving MAGENTA vertical bar (a white bar reads as a tear), position cycles with frame ...
            int barw = (W >= 600) ? 16 : 8;
            int bx = (fi * (barw + 4)) % (W - barw);
            rect(img, bx, 0, barw, H, 255, 0, 255);
            // ... and a red binary frame-counter along the bottom (set bit = red block) so freeze is obvious.
            int bw = (W >= 600) ? 32 : 16, bs = (W >= 600) ? 40 : 22, bh = (H >= 240) ? 32 : 16;
            for (int b = 0; b < 12; b++)
                if (fi & (1 << b)) rect(img, 8 + b * bs, H - bh - 8, bw, bh, 255, 0, 0);
        } else { fprintf(stderr, "unknown pattern '%s'\n", pat.c_str()); return 1; }

        draw_label(img, label);   // scene-identity tally squares (top)

        // Convert img (R,G,B) -> fb (FB byte order). RGB888 = B,G,R; RGB565 = LE R5G6B5.
        for (size_t p = 0; p < NPX; p++) {
            uint8_t r = img[p*3+0], g = img[p*3+1], b = img[p*3+2];
            if (depth == 3) { fb[p*3+0] = b; fb[p*3+1] = g; fb[p*3+2] = r; }
            else { uint16_t v = (uint16_t)(((r >> 3) << 11) | ((g >> 2) << 5) | (b >> 3));
                   fb[p*2+0] = (uint8_t)(v & 0xFF); fb[p*2+1] = (uint8_t)(v >> 8); }
        }
    }

    std::string o = out;
    bool is_lz4 = o.size() > 4 && o.substr(o.size() - 4) == ".lz4";
    bool is_raw = o.size() > 4 && o.substr(o.size() - 4) == ".raw";

    std::vector<uint8_t> dst(FBSZ + 4096);
    int cs = 0;
    if (is_raw) {
        cs = (int)FBSZ; memcpy(dst.data(), fb.data(), FBSZ);
    } else if (is_lz4) {
        cs = LZ4_compress_HC((const char*)fb.data(), (char*)dst.data(), (int)FBSZ, (int)dst.size(), LZ4HC_CLEVEL_DEFAULT);
        if (cs <= 0) { fprintf(stderr, "LZ4 encode failed (%d)\n", cs); return 1; }
    } else {
        if (depth != 3) { fprintf(stderr, "NLC encode is RGB888-only\n"); return 1; }
        nlc_params np; memset(&np, 0, sizeof(np));
        np.width = W; np.height = H; np.rgb = NLC_RGB888; np.color = NLC_COLOR_YCOCG;
        np.near_lvl = 0; np.pack = NLC_PACK_TILED; np.tile = 16; np.width_bits = 4; np.rice_k = -1;
        cs = nlc_encode(fb.data(), dst.data(), dst.size(), &np);
        if (cs <= 0) { fprintf(stderr, "encode failed (%d)\n", cs); return 1; }
    }

    FILE* f = fopen(out, "wb");
    if (!f) { fprintf(stderr, "cannot write %s\n", out); return 1; }
    fwrite(dst.data(), 1, (size_t)cs, f); fclose(f);
    printf("%s: %s %dx%d d%d frame %d -> %d bytes (ratio %.2f)\n", out, pat.c_str(), W, H, depth, fi, cs, (double)FBSZ / cs);
    return 0;
}
