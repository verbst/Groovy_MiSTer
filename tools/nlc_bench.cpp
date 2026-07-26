// nlc_bench.cpp — four-way bandwidth benchmark for the Groovy_MiSTer codecs.
//
// Compares, on a corpus of raw frames, the bytes/ratio/implied-bitrate of:
//     raw, LZ4+Sub, LZ4HC+Sub, and the NLC codec (global / tiled / rice,
//     RGB-direct vs YCoCg, several NEAR levels).
//
// The point is to *measure* — not guess — which Stage-1 design to build, using
// mean ratio AND peak per-frame bitrate (the spiky-output metric that actually
// hurts the GigE transport when LZ4 collapses).
//
// Usage:
//   nlc_bench [--w W --h H --fmt 888|rgba] [--fps F] [--csv out.csv] frame1.raw frame2.raw ...
//   nlc_bench                     # no files -> runs a built-in synthetic corpus
//
// Frame files are raw interleaved bytes of exactly W*H*bpp. Capture real ones
// with the host library's frame-dump option (Phase 0, separate step).
//
// Build:  make -C tools nlc_bench

#include "nlc_codec.h"
#include "lz4/lz4.h"
#include "lz4/lz4hc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <vector>
#include <chrono>
#include <string>

// ---- Sub predictor (mirrors api/groovymister.cpp apply_predictor) -----------
static void apply_sub(const uint8_t* src, uint8_t* dst, size_t n, int bpp) {
    uint8_t prev[4] = {0,0,0,0};
    for (size_t i = 0; i + bpp <= n; i += bpp)
        for (int c = 0; c < bpp; c++) { uint8_t cur = src[i+c]; dst[i+c] = (uint8_t)(cur - prev[c]); prev[c] = cur; }
}

// ---- codec configurations ---------------------------------------------------
enum Kind { K_RAW, K_LZ4, K_LZ4HC, K_NLC };
struct Config {
    const char* name;
    Kind        kind;
    nlc_color_t color;   // NLC only
    nlc_pack_t  pack;    // NLC only
    int         near;    // NLC only
};
static Config CONFIGS[] = {
    { "raw",              K_RAW,   NLC_COLOR_RGB,   NLC_PACK_GLOBAL, 0 },
    { "lz4+sub",          K_LZ4,   NLC_COLOR_RGB,   NLC_PACK_GLOBAL, 0 },
    { "lz4hc+sub",        K_LZ4HC, NLC_COLOR_RGB,   NLC_PACK_GLOBAL, 0 },
    { "nlc tiled rgb  n0",K_NLC,   NLC_COLOR_RGB,   NLC_PACK_TILED,  0 },
    { "nlc rice  rgb  n0",K_NLC,   NLC_COLOR_RGB,   NLC_PACK_RICE,   0 },
    { "nlc tiled ycc  n0",K_NLC,   NLC_COLOR_YCOCG, NLC_PACK_TILED,  0 },
    { "nlc rice  ycc  n0",K_NLC,   NLC_COLOR_YCOCG, NLC_PACK_RICE,   0 },
    { "nlc tiled rgb  n1",K_NLC,   NLC_COLOR_RGB,   NLC_PACK_TILED,  1 },
    { "nlc rice  ycc  n1",K_NLC,   NLC_COLOR_YCOCG, NLC_PACK_RICE,   1 },
    { "nlc tiled rgb  n2",K_NLC,   NLC_COLOR_RGB,   NLC_PACK_TILED,  2 },
    { "nlc rice  ycc  n2",K_NLC,   NLC_COLOR_YCOCG, NLC_PACK_RICE,   2 },
};
static const int NCFG = (int)(sizeof(CONFIGS)/sizeof(CONFIGS[0]));

static int g_tile = 16;   // tile length (pixels) for NLC TILED/RICE; override with --tile

// Parse "<W>x<H>_<fmt>" out of a dump filename like frame_640x480_888_000000.raw.
static int parse_dims(const char* path, int* W, int* H, nlc_rgb_t* rgb) {
    const char* base = path;
    for (const char* p = path; *p; p++) if (*p == '/' || *p == '\\') base = p + 1;
    for (const char* p = base; *p; p++) {
        if (*p < '0' || *p > '9') continue;
        int w = 0, h = 0; const char* q = p;
        while (*q >= '0' && *q <= '9') { w = w*10 + (*q - '0'); q++; }
        if (*q != 'x') continue;
        q++;
        if (*q < '0' || *q > '9') continue;
        while (*q >= '0' && *q <= '9') { h = h*10 + (*q - '0'); q++; }
        if (*q != '_') continue;
        q++;
        if      (!strncmp(q, "rgba", 4)) *rgb = NLC_RGBA;
        else if (!strncmp(q, "888", 3))  *rgb = NLC_RGB888;
        else if (!strncmp(q, "565", 3))  *rgb = NLC_RGB565;
        else continue;
        *W = w; *H = h; return 1;
    }
    return 0;
}

struct Acc { double sum_enc=0, max_enc=0, sum_ratio=0, sum_ms=0, max_ms=0; int n=0; };

static int encode_one(const Config& c, const uint8_t* img, int W, int H, nlc_rgb_t rgb,
                      uint8_t* scratch, uint8_t* dst, int dstcap) {
    int bpp = (rgb==NLC_RGBA)?4:3;
    int raw = W*H*bpp;
    if (c.kind == K_RAW) return raw;
    if (c.kind == K_LZ4 || c.kind == K_LZ4HC) {
        apply_sub(img, scratch, raw, bpp);
        int r = (c.kind==K_LZ4)
            ? LZ4_compress_default((const char*)scratch, (char*)dst, raw, dstcap)
            : LZ4_compress_HC((const char*)scratch, (char*)dst, raw, dstcap, LZ4HC_CLEVEL_DEFAULT);
        return r > 0 ? r : raw;   // LZ4 can fail to compress incompressible data
    }
    nlc_params p; memset(&p,0,sizeof(p));
    p.width=W; p.height=H; p.rgb=rgb; p.color=c.color; p.near_lvl=c.near;
    p.pack=c.pack; p.tile=g_tile; p.width_bits=4; p.rice_k=-1;
    int r = nlc_encode(img, dst, dstcap, &p);
    return r > 0 ? r : raw;
}

// ---- synthetic corpus (fallback when no real frames given) ------------------
static void gen_photo(uint8_t* p, int W, int H, int bpp, int seed) {
    srand(seed);
    for (int y=0;y<H;y++) for (int x=0;x<W;x++){ int i=y*W+x;
        double base = 128 + 90*sin(x*0.03+seed) * cos(y*0.025);
        // strongly correlated channels (like real rendered content) + slight tint + detail
        double r=base+20+6*sin(x*0.4), g=base+4*((rand()%5)-2), b=base-20+8*cos(y*0.5);
        p[i*bpp+0]=(uint8_t)fmin(255,fmax(0,r));
        p[i*bpp+1]=(uint8_t)fmin(255,fmax(0,g));
        p[i*bpp+2]=(uint8_t)fmin(255,fmax(0,b));
        if (bpp==4) p[i*bpp+3]=255;
    }
}

int main(int argc, char** argv) {
    int cliW=0, cliH=0, fps=60; nlc_rgb_t cliRgb=NLC_RGB888; bool explicitDims=false;
    const char* csvpath=nullptr;
    std::vector<std::string> files;
    for (int i=1;i<argc;i++){
        if      (!strcmp(argv[i],"--w")    && i+1<argc){ cliW=atoi(argv[++i]); explicitDims=true; }
        else if (!strcmp(argv[i],"--h")    && i+1<argc){ cliH=atoi(argv[++i]); explicitDims=true; }
        else if (!strcmp(argv[i],"--fps")  && i+1<argc)  fps=atoi(argv[++i]);
        else if (!strcmp(argv[i],"--fmt")  && i+1<argc){ cliRgb = strcmp(argv[++i],"rgba")?NLC_RGB888:NLC_RGBA; explicitDims=true; }
        else if (!strcmp(argv[i],"--tile") && i+1<argc)  g_tile=atoi(argv[++i]);
        else if (!strcmp(argv[i],"--csv")  && i+1<argc)  csvpath=argv[++i];
        else files.push_back(argv[i]);
    }
    bool synth = files.empty();

    // size buffers to the largest frame in the corpus (real files vary in size)
    long maxbytes = 0;
    if (synth) { if(!cliW)cliW=640; if(!cliH)cliH=480; maxbytes=(long)cliW*cliH*((cliRgb==NLC_RGBA)?4:3); }
    else for (auto& f : files){ FILE* fp=fopen(f.c_str(),"rb"); if(!fp)continue; fseek(fp,0,SEEK_END); long s=ftell(fp); fclose(fp); if(s>maxbytes)maxbytes=s; }
    if (maxbytes <= 0) { fprintf(stderr,"no readable frames\n"); return 1; }
    int dstcap = (int)(3*maxbytes + 4096);
    uint8_t* scratch=(uint8_t*)malloc(maxbytes);
    uint8_t* dst=(uint8_t*)malloc(dstcap);
    uint8_t* img=(uint8_t*)malloc(maxbytes);

    FILE* csv = csvpath ? fopen(csvpath,"w") : nullptr;
    if (csv) fprintf(csv,"frame,file,w,h,fmt,codec,raw,enc,ratio,mbps\n");

    int nframes = synth ? 8 : (int)files.size();
    printf("== nlc_bench ==  %d fps  tile=%d  %d frame(s)  %s\n",
           fps, g_tile, nframes, synth?"[SYNTHETIC]":"[real frames]");
    if (synth) printf("   synthetic data is indicative only — capture real frames for the real answer\n");
    printf("\n");

    Acc acc[NCFG]; long n_used=0, total_raw=0;
    for (int f=0; f<nframes; f++){
        int W,H; nlc_rgb_t rgb;
        if (synth){ W=cliW; H=cliH; rgb=cliRgb; gen_photo(img,W,H,(rgb==NLC_RGBA)?4:3,100+f*7); }
        else {
            const char* path=files[f].c_str();
            if (explicitDims){ W=cliW; H=cliH; rgb=cliRgb; }
            else if (!parse_dims(path,&W,&H,&rgb)){ fprintf(stderr,"skip %s: cannot parse WxH_fmt from name (pass --w --h --fmt)\n",path); continue; }
            if (rgb==NLC_RGB565){ fprintf(stderr,"skip %s: 565 not yet supported\n",path); continue; }
            int bpp=(rgb==NLC_RGBA)?4:3; long raw=(long)W*H*bpp;
            FILE* fp=fopen(path,"rb"); if(!fp){fprintf(stderr,"cannot open %s\n",path);continue;}
            fseek(fp,0,SEEK_END); long sz=ftell(fp); fseek(fp,0,SEEK_SET);
            if (sz!=raw){ fprintf(stderr,"skip %s: size %ld != %dx%d*%d=%ld\n",path,sz,W,H,bpp,raw); fclose(fp); continue; }
            if (fread(img,1,raw,fp)!=(size_t)raw){ fclose(fp); continue; }
            fclose(fp);
        }
        int bpp=(rgb==NLC_RGBA)?4:3, raw=W*H*bpp; total_raw+=raw; n_used++;
        for (int c=0;c<NCFG;c++){
            auto _t0 = std::chrono::steady_clock::now();
            int enc = encode_one(CONFIGS[c], img, W, H, rgb, scratch, dst, dstcap);
            double ems = std::chrono::duration<double,std::milli>(std::chrono::steady_clock::now()-_t0).count();
            double ratio=(double)raw/enc, mbps=(double)enc*8.0*fps/1e6;
            acc[c].sum_enc+=enc; if(enc>acc[c].max_enc)acc[c].max_enc=enc; acc[c].sum_ratio+=ratio;
            acc[c].sum_ms+=ems; if(ems>acc[c].max_ms)acc[c].max_ms=ems; acc[c].n++;
            if (csv) fprintf(csv,"%d,%s,%d,%d,%s,%s,%d,%d,%.4f,%.3f\n",
                             f, synth?"synth":files[f].c_str(), W,H, bpp==4?"rgba":"888", CONFIGS[c].name, raw, enc, ratio, mbps);
        }
    }
    if (n_used==0){ fprintf(stderr,"no frames processed\n"); return 1; }
    double avg_raw=(double)total_raw/n_used;

    printf("frames=%ld  avgRaw=%.0fKB  (rawMbps=%.0f)\n\n", n_used, avg_raw/1024.0, avg_raw*8.0*fps/1e6);
    printf("%-20s %10s %10s %12s %12s %10s %10s\n","codec","meanRatio","worstRatio","meanMbps","peakMbps","encMs","encMsMax");
    printf("%-20s %10s %10s %12s %12s %10s %10s\n","-----","---------","----------","--------","--------","-----","--------");
    for (int c=0;c<NCFG;c++){
        if(!acc[c].n) continue;
        double meanRatio=acc[c].sum_ratio/acc[c].n;
        double worstRatio=avg_raw/acc[c].max_enc;
        double meanMbps=(acc[c].sum_enc/acc[c].n)*8.0*fps/1e6;
        double peakMbps=acc[c].max_enc*8.0*fps/1e6;
        printf("%-20s %10.2f %10.2f %12.1f %12.1f %10.2f %10.2f\n", CONFIGS[c].name, meanRatio, worstRatio, meanMbps, peakMbps, acc[c].sum_ms/acc[c].n, acc[c].max_ms);
    }
    printf("\nGigE usable ~ <~940 Mbps. peakMbps is the spiky-frame ceiling that stalls LZ4.\n");
    if (csv){ fclose(csv); printf("wrote %s\n", csvpath); }
    free(scratch); free(dst); free(img);
    return 0;
}
