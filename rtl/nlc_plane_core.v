// nlc_plane_core.v — ONE plane of the parallel NLC decoder (STAGE B / wire-format v2).
//
// Owns: a 2-bank compressed-SEGMENT buffer (the line loader word-routes this plane's
// byte-aligned segment into the inactive bank), an LSB-first bit reader over it, the
// tile width-header register, the 2-cycle MED recurrence (stage A predict / stage B
// dequant+clamp — the proven nlc_decode.v timing split), and the per-plane above-line
// double buffer (the proven M10K recipe: combinational 1-ahead read address, registered
// read data with NO reset).
//
// Three of these run in x-LOCKSTEP under the shared controller in nlc_decode_ddr.v:
// tiles are x-aligned so all planes read their headers in the same cycle, and each
// stage-B produces this plane's recon for the FUSED inverse-YCoCg combine.
//
// Arithmetic is copied VERBATIM from the sim-proven serial nlc_decode.v (bit-exact vs
// the C golden model): MED predictor masking at x==0/y==0, zigzag de-map, QS=2*near+1
// shift-add dequant, per-plane clamp ranges.

module nlc_plane_core #(
    parameter MAXW  = 720,    // max scanline width (above-line buffer depth per bank)
    parameter WBITS = 4,      // tile width-header bits
    parameter SEGW  = 128,    // segment bank size in 64-bit words (720px*10b+hdrs < 1KB)
    parameter PID   = 0       // plane id (debug prints only)
)(
    input             clk,
    input             reset,        // frame reset
    input      [2:0]  cfg_near,
    input             is_chroma,    // 1 => clamp lo=-255 (YCoCg Co/Cg); 0 => lo=0
    input             cfg_rice,     // R2: 1 = Golomb-Rice sample codes (tile header field = k)
    // segment loader write port (from the shared line loader)
    input             seg_we,
    input      [7:0]  seg_waddr,    // word index within the bank
    input             seg_wbank,
    input      [63:0] seg_wdata,
    // shared-controller interface
    input             rd_bank,      // bank holding the line being decoded
    input             prime,        // pulse: point the reader at word 0 of rd_bank (new line)
    input             step_hdr,     // this cycle: consume the WBITS tile header
    input             step_a,       // this cycle: stage A (predict + consume w residual bits)
    input             step_b,       // this cycle: stage B (dequant + clamp + line-buffer write)
    input      [15:0] x,            // current column
    input             first_col,    // x == 0
    input             first_row,    // y == 0
    input             lp,           // above-line ping-pong parity
    output            rdy,          // reader primed + enough bits for any step (>=16)
    output reg signed [15:0] recon  // stage-B result (registered at the step_b edge)
);
    // ---- compressed-segment banks (written by the loader, read by the bit reader) ----
    (* ramstyle = "M10K" *) reg [63:0] seg [0:2*SEGW-1];
    reg  [63:0] seg_q;                    // registered read (M10K); no reset
    reg  [7:0]  seg_ra;                   // combinational read address ({bank, word[6:0]})
    always @(posedge clk) begin
        if (seg_we) seg[{seg_wbank, seg_waddr[6:0]}] <= seg_wdata;   // bank bit at log2(SEGW)
        seg_q <= seg[seg_ra];
    end

    // ---- LSB-first bit reader over the segment ---------------------------------------
    // acc holds up to 127 valid bits; refill 64 at a time from the staged next-word `nxt`
    // whenever <=63 remain (63+64=127 fits exactly). R2 sizing: the worst RICE sample code
    // is 19 zeros + stop + k(<=15) = 35 bits (escape = 20+1+12 = 33), vs TILED's <=15.
    // Invariant (proved inductively): at every stage-A entry bitcnt >= 64 — the preceding
    // stage-B either refilled (post-A residue >= 0, +64) or held > 63; and the tile-header
    // path only subtracts WBITS=4 in between. So every sample decodes in ONE consume and
    // the 2-cycle A/B cadence is preserved for BOTH packs. rdy (>=39 = worst hdr+sample
    // back-to-back) is always reachable: refills land on non-consuming cycles and lift
    // bitcnt to >=64. `nxt` reloads through the 1-cycle BRAM read; consumption is <=35
    // bits/cycle with a non-consuming stage-B at least every other cycle.
    reg [127:0] acc;
    reg  [6:0]  bitcnt;
    reg  [63:0] nxt;
    reg         nxt_valid;
    reg  [7:0]  rd_ptr;                   // next word to fetch within the bank
    reg  [1:0]  pr_st;                    // 0=idle/run 1=addr issued 2=wait q
    reg         primed;
    always @* seg_ra = {rd_bank, rd_ptr[6:0]};

    wire        need_refill = primed && !(|pr_st) && (bitcnt <= 7'd63) && nxt_valid;
    assign rdy = primed && (pr_st == 2'd0) && ((bitcnt >= 7'd39) || need_refill);

    // ---- tile width header ------------------------------------------------------------
    reg  [4:0] w;

    // ---- above-line double buffer (the proven M10K recipe) -----------------------------
    (* ramstyle = "M10K" *) reg signed [11:0] bufP [0:2*MAXW-1];
    reg signed [11:0] bufP_q;             // registered read data — NO reset (M10K inference)
    reg  [15:0] ra;                       // combinational, aimed one column ahead
    wire [15:0] co = lp ? MAXW[15:0] : 16'd0;   // cur  bank offset
    wire [15:0] po = lp ? 16'd0 : MAXW[15:0];   // prev bank offset (above)
    always @* ra = step_b ? (po + x + 16'd1) : (po + x);   // prefetch next col at stage B

    // ---- MED + dequant scratch (verbatim from nlc_decode.v) ----------------------------
    reg signed [15:0] above_reg, recon_reg;
    reg signed [15:0] predL_r, qeL_r;
    reg signed [15:0] pabove, paL, pleft, aL, bL, cL, mnL, mxL, predL, qeL, reconL;
    reg signed [31:0] qmul, reconRawL;
    reg        [23:0] codeL;
    wire signed [15:0] lo = is_chroma ? -16'sd255 : 16'sd0;
    wire signed [15:0] hi = 16'sd255;

    // scratch for the bit reader (blocking)
    reg [127:0] na;
    reg  [6:0]  ncnt;
    reg  [5:0]  cons;
    // rice sample scratch (blocking)
    reg         r_esc;
    reg  [4:0]  r_q;
    reg  [35:0] r_rem;
    integer     ri;

    always @(posedge clk) begin
        if (reset) begin
            acc <= 84'd0; bitcnt <= 7'd0; nxt_valid <= 1'b0; rd_ptr <= 8'd0;
            pr_st <= 2'd0; primed <= 1'b0; w <= 5'd0;
            // NB: seg_q / bufP_q intentionally NOT reset (M10K read regs)
        end else begin
            // ---------------- reader priming / next-word reload ----------------
            if (prime) begin
                acc <= 128'd0; bitcnt <= 7'd0; nxt_valid <= 1'b0;
                rd_ptr <= 8'd0; pr_st <= 2'd1; primed <= 1'b1;   // fetch word 0
            end else begin
                case (pr_st)
                    2'd1: pr_st <= 2'd2;                          // seg_ra presented; q next cycle
                    2'd2: begin nxt <= seg_q; nxt_valid <= 1'b1; rd_ptr <= rd_ptr + 8'd1; pr_st <= 2'd0; end
                    default: if (primed && !nxt_valid) pr_st <= 2'd1;   // reload the staged word
                endcase
            end

            // ---------------- consume + refill (blocking scratch) ---------------
            // NB: skipped entirely on a prime cycle — the trailing acc/bitcnt update
            // would otherwise CLOBBER the prime's reset with stale pre-prime bits.
            if (!prime) begin
            cons = 6'd0;
            if (step_hdr) begin
                w    <= acc[WBITS-1:0];
                cons = WBITS[5:0];
            end else if (step_a) begin
                // stage A: MED predict from above/left + residual bits (verbatim math)
                pabove = {{4{bufP_q[11]}}, bufP_q};
                paL    = (!first_col) ? above_reg : pabove;
                pleft  = (!first_col) ? recon_reg : 16'sd0;
                aL  = (!first_col) ? pleft : ((!first_row) ? pabove : 16'sd0);
                bL  = (!first_row) ? pabove : aL;
                cL  = (!first_col && !first_row) ? paL : bL;
                mnL = (aL < bL) ? aL : bL;
                mxL = (aL < bL) ? bL : aL;
                predL = (cL >= mxL) ? mnL : (cL <= mnL) ? mxL : (aL + bL - cL);
                if (!cfg_rice) begin
                    // TILED: w fixed bits per sample
                    codeL = acc[23:0] & ((24'd1 << w) - 24'd1);
                    cons  = {1'b0, w};
                end else begin
                    // RICE (bit-exact vs nlc_codec.cpp rice_get, LSB-first): count zeros to
                    // the stop-1 (q, max 19), then k=w remainder bits -> u=(q<<k)|rem; at
                    // exactly 20 zeros: ESCAPE = stop bit + 12-bit raw payload (33 bits).
                    r_esc = (acc[19:0] == 20'd0);
                    r_q   = 5'd0;
                    for (ri = 19; ri >= 0; ri = ri - 1)
                        if (acc[ri]) r_q = ri[4:0];              // lowest set bit = unary q
                    if (r_esc) begin
                        codeL = {12'd0, acc[32:21]};
                        cons  = 6'd33;
                    end else begin
                        r_rem = acc[35:0] >> (r_q + 6'd1);
                        codeL = ({19'd0, r_q} << w) | (r_rem[23:0] & ((24'd1 << w) - 24'd1));
                        cons  = {1'b0, r_q} + 6'd1 + {1'b0, w};
                    end
                end
                qeL = codeL[0] ? -$signed({8'd0, ((codeL + 24'd1) >> 1)}) : $signed({8'd0, (codeL >> 1)});
                predL_r   <= predL;
                qeL_r     <= qeL;
                above_reg <= pabove;
            end else if (step_b) begin
                // stage B: dequant (shift-add) + clamp + line-buffer write (verbatim)
                case (cfg_near)
                  3'd0:    qmul = qeL_r;
                  3'd1:    qmul = (qeL_r <<< 1) + qeL_r;
                  3'd2:    qmul = (qeL_r <<< 2) + qeL_r;
                  default: qmul = (qeL_r <<< 3) - qeL_r;
                endcase
                reconRawL = predL_r + qmul;
                reconL = (reconRawL < lo) ? lo : (reconRawL > hi) ? hi : reconRawL[15:0];   // signed compares (lo/hi are signed wires)
                bufP[co + x] <= reconL[11:0];
                recon_reg <= reconL;
                recon     <= reconL;
            end

            na = acc; ncnt = bitcnt;
            if (cons != 6'd0) begin na = na >> cons; ncnt = ncnt - {1'b0, cons}; end
            if (need_refill && cons == 6'd0) begin
                // refill only on non-consuming cycles (controller guarantees a gap:
                // consume happens at most every other cycle in the A/B cadence)
                na = na | ({64'd0, nxt} << ncnt);
                ncnt = ncnt + 7'd64;
                nxt_valid <= 1'b0;                 // triggers the staged reload above
            end
            acc <= na; bitcnt <= ncnt;
            end   // !prime
        end

        // registered above-line read (outside reset — M10K recipe, no reset)
        bufP_q <= bufP[ra];
    end

// synthesis translate_off
    // sim-only debug trace (+coredbg): tile headers + per-sample codes, comparable to the C model
    reg dbg; initial dbg = $test$plusargs("coredbg");
    always @(posedge clk) begin
        if (dbg && step_hdr) $display("[P%0d] hdr w=%0d bitcnt=%0d", PID, acc[WBITS-1:0], bitcnt);
        if (dbg && step_a)   $display("[P%0d] x=%0d w=%0d code=%0d bitcnt=%0d", PID, x, w, acc[23:0] & ((24'd1 << w) - 24'd1), bitcnt);
    end
// synthesis translate_on
endmodule
