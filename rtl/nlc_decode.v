// nlc_decode.v: block-adaptive (TILED) near-lossless decoder, line-interleaved.
//
// Sim-verified bit-exact against the C golden model (api/nlc_codec.cpp) via
// tools/run_sim.sh. Decodes the LSB-first bitstream: per scanline, per plane
// (Y,Co,Cg), per 1-D tile a WBITS width header then T residuals at that width
// (zigzag-mapped). Each residual is MED-predicted + NEAR-dequantised against
// per-plane line buffers; after the 3 planes of a line an inverse YCoCg-R (or
// RGB pass-through) emits one RGB scanline.
//
// Deterministic: no per-symbol variable length and no back-references, so it cannot
// wedge (no watchdog). Stage-1 front-end; the MED/inverse-colour back-end is
// what Stage-2 Rice will reuse.
//
// Synthesis shape:
//   * resolution / NEAR / colour are RUNTIME inputs (held stable per frame),
//     sized for any width up to MAXW.
//   * line buffers are per-plane DOUBLE buffers, ping-ponged by a parity bit
//     (no per-line array copy), giving a clean single-write, single-read RAM.
//   * byte-stream I/O here; integration wraps a 64-bit DDR word feeder + an
//     8-byte output packer around it.

module nlc_decode #(
    parameter MAXW  = 720,   // max scanline width (line-buffer depth per bank)
    parameter WBITS = 4,     // tile width-header bits
    parameter NP    = 3      // planes (3: Y/Co/Cg or R/G/B)
)(
    input             clk,
    input             reset,
    input             stall,        // freeze the pipeline (back-pressure from the output consumer)
    // runtime configuration (hold stable from reset through `done`)
    input      [15:0] cfg_w,        // active width  (<= MAXW)
    input      [15:0] cfg_h,        // active height
    input      [2:0]  cfg_near,     // NEAR (0=lossless)
    input      [6:0]  cfg_tile,     // tile length in pixels
    input             cfg_color,    // 1 = YCoCg-R, 0 = RGB-direct
    // compressed byte stream in (LSB-first bit order)
    input      [7:0]  in_data,
    input             in_valid,
    output            in_ready,
    // decoded pixels out, 1 per cycle, raster order
    output reg [7:0]  out_r,
    output reg [7:0]  out_g,
    output reg [7:0]  out_b,
    output reg        out_valid,
    output reg        done
);
    wire signed [15:0] QS = $signed({12'd0, cfg_near, 1'b1});   // 2*near+1

    // ---- per-plane double line buffers, ping-ponged by `lp` -------------------
    // cur bank = the row being reconstructed; prev bank = the row above.
    // SYNCHRONOUS-READ RAM: one registered read port (combinational `ra` -> *_q
    // one cycle later) plus the recon write port. The sync read is what lets
    // Quartus infer these as M10K block RAM instead of building 720:1 muxes +
    // thousands of registers in logic fabric (the Fitter "can't fit" cause).
    // CRITICAL: *_q must have NO reset (see reset block) or the output reg is
    // pushed out of the M10K and the read reverts to "asynchronous" = uninferred.
    (* ramstyle = "M10K" *) reg signed [11:0] bufY  [0:2*MAXW-1];
    (* ramstyle = "M10K" *) reg signed [11:0] bufCo [0:2*MAXW-1];
    (* ramstyle = "M10K" *) reg signed [11:0] bufCg [0:2*MAXW-1];
    reg  [15:0] ra;                               // shared read-port address (COMBINATIONAL, 1-ahead)
    reg signed [11:0] bufY_q, bufCo_q, bufCg_q;   // registered read data (M10K 1-cycle latency)
    reg         lp;
    wire [15:0] co = lp ? MAXW[15:0] : 16'd0;   // cur  bank offset
    wire [15:0] po = lp ? 16'd0 : MAXW[15:0];   // prev bank offset (above)

    // ---- LSB-first bit reader -------------------------------------------------
    reg  [63:0] bitbuf;
    reg  [6:0]  bitcnt;
    wire        can_refill = (bitcnt <= 7'd56) && in_valid && !stall;
    assign in_ready = can_refill;

    // ---- combine (inverse YCoCg-R / RGB pass-through) for current read column -
    // operates on the registered RAM read (bufX_q = bufX[co+cx] from last cycle).
    reg  [15:0] cx;
    wire signed [11:0] cY  = bufY_q;
    wire signed [11:0] cCo = bufCo_q;
    wire signed [11:0] cCg = bufCg_q;
    wire signed [15:0] it  = $signed(cY)  - ($signed(cCg) >>> 1);
    wire signed [15:0] iG  = $signed(cCg) + it;
    wire signed [15:0] iB  = it - ($signed(cCo) >>> 1);
    wire signed [15:0] iR  = iB + $signed(cCo);
    wire signed [15:0] oR  = cfg_color ? iR : $signed(cY);
    wire signed [15:0] oG  = cfg_color ? iG : $signed(cCo);
    wire signed [15:0] oB  = cfg_color ? iB : $signed(cCg);
    function [7:0] clamp8(input signed [15:0] v);
        clamp8 = (v < 0) ? 8'd0 : (v > 255) ? 8'd255 : v[7:0];
    endfunction

    // ---- FSM ------------------------------------------------------------------
    // S_DAT is pipelined into two cycles to close clk_sys timing: S_DAT1 = MED
    // predictor (the long combinational half), S_DAT2 = dequant + clamp + write.
    localparam S_HDR=0, S_DAT1=1, S_COMB=2, S_SWAP=3, S_DONE=4, S_DAT2=5;
    reg [2:0]  st;
    reg [15:0] y, x;
    reg [3:0]  pl;
    reg [15:0] tcnt;
    reg [4:0]  w;

    // scratch (blocking): decode is computed in-block against the live bitbuf
    // and line buffers to avoid continuous-assign / nonblocking delta skew.
    reg  [5:0]  cons;
    reg  [63:0] nb;
    reg  [6:0]  nc;
    reg signed [15:0] pabove, paL, pleft, aL, bL, cL, mnL, mxL, predL, qeL, reconL;
    reg signed [15:0] above_reg, recon_reg;   // registered above / left neighbours (1 RAM read port)
    reg signed [15:0] predL_r, qeL_r;         // S_DAT1 -> S_DAT2 pipeline registers
    reg signed [31:0] qmul;                   // dequant product (shift-add, no DSP)
    reg signed [31:0] reconRawL;
    reg        [23:0] codeL;
    reg signed [15:0] lo;
    wire signed [15:0] hi = 16'sd255;

    // ---- combinational line-buffer read address -------------------------------
    // Points at the column whose data must be ready NEXT cycle, steered one ahead
    // per state. The M10K input register samples `ra` each edge, so
    // bufX_q(cycle n) = bufX[ra(cycle n-1)] -> data lands exactly when consumed,
    // keeping throughput at 1 pixel/cycle. (A *registered* address would be a
    // cycle later = off-by-one; this combinational form is what makes it exact.)
    always @* begin
        case (st)
            S_HDR:   ra = po + x;                               // prime tile's first above-read
            S_DAT1:  ra = po + x;                               // hold current above through predictor/stall
            S_DAT2:  ra = (((tcnt == 16'd1) && ((x + 16'd1) == cfg_w) && (pl == NP-1))
                              ? co                               // line done -> prime combine col 0
                              : po + (x + 16'd1));               // prefetch next pixel's above
            S_COMB:  ra = co + (cx + 16'd1);                    // prefetch next combine column
            default: ra = po + x;                               // S_SWAP/S_DONE: re-primed by S_HDR
        endcase
    end

    always @(posedge clk) begin
        out_valid <= 1'b0;
        if (reset) begin
            bitbuf <= 64'd0; bitcnt <= 7'd0; lp <= 1'b0;
            st <= S_HDR; y <= 0; x <= 0; pl <= 0; tcnt <= 0; w <= 0; cx <= 0;
            done <= 1'b0;
            // Do not reset bufY_q/bufCo_q/bufCg_q: these are the RAM read
            // output registers; resetting them forces the reg out of the M10K
            // block, giving an uninferred asynchronous read and a Fitter overflow. This
            // is why lz4.v's window-clear-on-reset was reverted too. Their reset value
            // is never observed: at y==0 the above-neighbour is masked, and every
            // real read follows a write.
        end else if (stall) begin
            // frozen: hold all state, emit nothing (out_valid stays 0 from default above)
        end else begin
            cons = 6'd0;
            lo = (cfg_color==1'b0 || pl==4'd0) ? 16'sd0 : -16'sd255;

            // synchronous read port (infers M10K): registers bufX[ra] each cycle.
            // `ra` (combinational, above) is aimed one column ahead, so bufX_q is
            // exactly the value the consuming state needs this cycle.
            bufY_q  <= bufY [ra];
            bufCo_q <= bufCo[ra];
            bufCg_q <= bufCg[ra];

            case (st)
            // tile width header
            S_HDR: begin
                if (bitcnt >= WBITS) begin
                    w    <= bitbuf[WBITS-1:0];
                    cons = WBITS;
                    tcnt <= ((x + cfg_tile) <= cfg_w) ? {9'd0, cfg_tile} : (cfg_w - x);
                    st   <= S_DAT1;
                end
            end
            // T residuals at width w. Stage 1: MED predictor and residual decode.
            // The long combinational half (RAM read -> plane mux -> comparators ->
            // predL) ends in a register; the dequant/clamp/write is in S_DAT2.
            S_DAT1: begin
                if (bitcnt >= w) begin
                    // above neighbour: the registered read of the 'above' bank.
                    // bufX_q == bufX[po+x] here by the `ra` invariant (primed in
                    // S_HDR to po+x, prefetched to po+(x+1) per accepted pixel).
                    case (pl)
                      4'd0:    pabove = bufY_q;
                      4'd1:    pabove = bufCo_q;
                      default: pabove = bufCg_q;
                    endcase
                    paL   = (x>0) ? above_reg : pabove;   // aboveleft = previous pixel's 'above'
                    pleft = (x>0) ? recon_reg : 16'sd0;   // left      = previous pixel's recon
                    aL  = (x>0) ? pleft : ((y>0) ? pabove : 16'sd0);
                    bL  = (y>0) ? pabove : aL;
                    cL  = (x>0 && y>0) ? paL : bL;
                    mnL = (aL < bL) ? aL : bL;
                    mxL = (aL < bL) ? bL : aL;
                    predL = (cL >= mxL) ? mnL : (cL <= mnL) ? mxL : (aL + bL - cL);
                    // residual: read w bits from live bitbuf, zigzag de-map
                    codeL = bitbuf & ((64'd1 << w) - 1);
                    qeL = codeL[0] ? -$signed({8'd0, ((codeL + 24'd1) >> 1)}) : $signed({8'd0, (codeL >> 1)});
                    predL_r   <= predL;      // -> stage 2
                    qeL_r     <= qeL;        // -> stage 2
                    above_reg <= pabove;     // become next pixel's aboveleft
                    cons = {1'b0, w};        // consume the residual bits now
                    st <= S_DAT2;
                end
            end
            // STAGE 2: dequant (qe*QS as shift-add, no DSP) + clamp + RAM write +
            // advance. Single cycle, no stall (bits already consumed in S_DAT1).
            S_DAT2: begin
                case (cfg_near)              // QS = 2*near+1: x1/x3/x5/x7 for near 0..3
                  3'd0:    qmul = qeL_r;
                  3'd1:    qmul = (qeL_r <<< 1) + qeL_r;
                  3'd2:    qmul = (qeL_r <<< 2) + qeL_r;
                  default: qmul = (qeL_r <<< 3) - qeL_r;
                endcase
                reconRawL = predL_r + qmul;
                reconL = (reconRawL < lo) ? lo : (reconRawL > hi) ? hi : reconRawL[15:0];
                case (pl)
                  4'd0: bufY [co+x] <= reconL[11:0];
                  4'd1: bufCo[co+x] <= reconL[11:0];
                  default: bufCg[co+x] <= reconL[11:0];
                endcase
                recon_reg <= reconL;         // become next pixel's left
                x    <= x + 1;
                tcnt <= tcnt - 1;
                if (tcnt == 1) begin
                    if ((x + 1) == cfg_w) begin
                        x <= 0;
                        if (pl == NP-1) begin cx <= 0; st <= S_COMB; end
                        else            begin pl <= pl + 1; st <= S_HDR; end
                    end else st <= S_HDR;
                end else st <= S_DAT1;       // more residuals in this tile
            end
            // emit one RGB pixel per cycle
            S_COMB: begin
                out_valid <= 1'b1;
                out_r <= clamp8(oR);
                out_g <= clamp8(oG);
                out_b <= clamp8(oB);
                if (cx == cfg_w-1) begin cx <= 0; st <= S_SWAP; end
                else cx <= cx + 1;
            end
            // ping-pong: cur becomes the next line's 'above'
            S_SWAP: begin
                lp <= ~lp;
                pl <= 0; x <= 0;
                if (y == cfg_h-1) begin st <= S_DONE; done <= 1'b1; end
                else begin y <= y + 1; st <= S_HDR; end
            end
            S_DONE: done <= 1'b1;
            endcase

            // ---- bitbuf update: append a byte (if room) then consume `cons` ----
            nb = bitbuf; nc = bitcnt;
            if (can_refill) begin nb = nb | ({56'd0, in_data} << bitcnt); nc = nc + 7'd8; end
            if (cons != 0)  begin nb = nb >> cons; nc = nc - cons; end
            bitbuf <= nb; bitcnt <= nc;
        end
    end
endmodule
