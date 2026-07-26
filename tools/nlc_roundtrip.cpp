// nlc_roundtrip.cpp — v2 wire-format roundtrip gate: encode->decode over a config matrix,
// verify NEAR=0 is byte-exact lossless and NEAR>0 stays within the (color-dependent) error bound.
//   g++ -O2 -o /tmp/nlc_rt tools/nlc_roundtrip.cpp api/nlc_codec.cpp -Iapi && /tmp/nlc_rt
#include "nlc_codec.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static int maxerr(const uint8_t* a, const uint8_t* b, size_t n) {
    int m = 0;
    for (size_t i = 0; i < n; i++) { int d = (int)a[i] - (int)b[i]; if (d < 0) d = -d; if (d > m) m = d; }
    return m;
}

int main() {
    const int Ws[] = { 320, 640, 40, 33, 17 };       // incl. non-multiples of tile
    const int Hs[] = { 240, 480, 8, 7, 5 };
    int fails = 0, runs = 0;
    for (int s = 0; s < 5; s++) {
        int W = Ws[s], H = Hs[s];
        size_t N = (size_t)W * H * 3;
        uint8_t* src = (uint8_t*)malloc(N);
        // content: gradient + pseudo-noise + hard edges (exercises tiles/escapes)
        unsigned lfsr = 0x1234 + W;
        for (int y = 0; y < H; y++) for (int x = 0; x < W; x++) {
            size_t i = ((size_t)y * W + x) * 3;
            lfsr = lfsr * 1103515245u + 12345u;
            src[i+0] = (uint8_t)(x + ((lfsr >> 16) & 15));
            src[i+1] = (uint8_t)(y * 2);
            src[i+2] = ((x >> 4) & 1) ? 255 : (uint8_t)(lfsr >> 24);
        }
        for (int color = 0; color <= 1; color++)
        for (int pack = 0; pack <= 2; pack++)
        for (int near = 0; near <= 2; near++) {
            nlc_params p; memset(&p, 0, sizeof p);
            p.width = W; p.height = H; p.rgb = NLC_RGB888;
            p.color = color ? NLC_COLOR_YCOCG : NLC_COLOR_RGB;
            p.pack  = pack == 0 ? NLC_PACK_GLOBAL : (pack == 1 ? NLC_PACK_TILED : NLC_PACK_RICE);
            p.near_lvl = near; p.tile = 16; p.width_bits = 4; p.rice_k = -1;
            size_t cap = nlc_max_encoded_size(&p);
            uint8_t* enc = (uint8_t*)malloc(cap);
            uint8_t* dec = (uint8_t*)malloc(N);
            int cs = nlc_encode(src, enc, cap, &p);
            if (cs <= 0) { printf("FAIL %dx%d c%d p%d n%d: encode rc=%d\n", W,H,color,pack,near,cs); fails++; continue; }
            if (nlc_decode(enc, (size_t)cs, dec, &p) != 0) { printf("FAIL %dx%d c%d p%d n%d: decode rc\n", W,H,color,pack,near); fails++; continue; }
            int me = maxerr(src, dec, N);
            int bound = near == 0 ? 0 : (color ? 4 * near + 2 : near);   // YCoCg mixes planes: generous bound
            runs++;
            if (me > bound) { printf("FAIL %dx%d color=%d pack=%d near=%d: maxerr=%d > %d (cs=%d)\n", W,H,color,pack,near,me,bound,cs); fails++; }
            free(enc); free(dec);
        }
        free(src);
    }
    if (fails == 0) printf("NLC v2 ROUNDTRIP PASS: %d configs (5 sizes x color x pack x near), NEAR=0 byte-exact\n", runs);
    else            printf("NLC v2 ROUNDTRIP: %d FAILURES of %d\n", fails, runs);
    return fails ? 1 : 0;
}
