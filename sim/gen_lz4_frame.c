// gen_lz4_frame.c — generate a W*H BGR gradient frame (matching clean_disp_tb.v's feed_raw), LZ4-compress
// it the way the real host does (standard LZ4 block), and emit the compressed bytes as a $readmemh hex
// file (one hex byte per line). Prints the compressed size so the testbench can be told +lz4cs=N.
//   gen_lz4_frame <W> <H> <framenum> <out.hex>
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include "lz4.h"
int main(int argc, char** argv){
    if(argc<5){ fprintf(stderr,"usage: %s W H framenum out.hex\n",argv[0]); return 1; }
    int W=atoi(argv[1]), H=atoi(argv[2]), fr=atoi(argv[3]);
    long n=(long)W*H*3;
    uint8_t* fb=malloc(n);
    for(int y=0;y<H;y++) for(int x=0;x<W;x++){
        long i=((long)y*W+x)*3;
        fb[i+0]=(uint8_t)(x*255/(W-1));   // B
        fb[i+1]=(uint8_t)(y*255/(H-1));   // G
        fb[i+2]=(uint8_t)fr;              // R = frame#
    }
    int cap=LZ4_compressBound(n);
    char* dst=malloc(cap);
    int cs=LZ4_compress_default((const char*)fb,dst,(int)n,cap);
    if(cs<=0){ fprintf(stderr,"compress failed\n"); return 1; }
    FILE* f=fopen(argv[4],"w");
    for(int i=0;i<cs;i++) fprintf(f,"%02x\n",(uint8_t)dst[i]);
    fclose(f);
    printf("%d\n", cs);   // compressed size -> pass as +lz4cs=N
    return 0;
}
