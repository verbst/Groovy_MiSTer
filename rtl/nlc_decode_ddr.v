// nlc_decode_ddr.v — STAGE B PARALLEL near-lossless decoder (wire format v2).
//
// Drop-in replacement for the serial wrapper: same ports, same LZ4-compatible counter
// semantics, same Groovy.sv integration. Internally a complete rework for throughput:
//
//   input FIFO (256x64, accepts 128-word feed bursts)
//     -> LINE LOADER: word-router for the v2 line record
//        [8B header: u16 lenY,lenCo,lenCg (padded byte lengths)] Y-seg Co-seg Cg-seg
//        (all 64-bit-word-aligned) — routes each plane's segment into that plane's bank
//        (ping-pong: loads line N+1 while line N decodes)
//     -> 3x nlc_plane_core DECODING IN x-LOCKSTEP (one shared controller):
//        C_HDR (all planes consume their tile header together — tiles are x-aligned)
//        then per pixel C_A/C_B: the proven 2-cycle MED recurrence, three planes in
//        parallel = ~2.06 cyc/PIXEL (vs ~7.19 serial) = ~40 Mpix/s @82.75MHz, above
//        the 25.2 Mpix/s 480p60 beam.
//     -> FUSED COMBINE: the cycle after each stage-B, inverse YCoCg-R (or RGB pass)
//        on the three recons -> 3 RGB bytes -> 64-bit word packer
//     -> OUTPUT FIFO (128x64) with a registered presented head: the decoder NEVER
//        hard-stalls on the consumer; the Groovy FSM drains words (long_valid /
//        out_ready) while decode continues.
//
// Determinism preserved: TILED front-end, plus the R2 Golomb-Rice front-end (cfg_rice)
// whose per-symbol length is HARD-BOUNDED by the 20-zero escape (max 35 bits/sample; the
// plane cores' 128-bit accumulators guarantee single-cycle decode at the same 2-cycle
// A/B cadence) — the decoder cannot wedge in either pack mode. Bit order per
// nlc_codec.h (LSB-first; 64-bit word = LE bytes).

module nlc_decode_ddr #(
    parameter MAXW  = 720,
    parameter WBITS = 4,
    parameter NP    = 3      // interface compat; this implementation decodes 3 planes
)(
    input             clk,
    input             reset,
    input      [15:0] cfg_w,
    input      [15:0] cfg_h,
    input      [2:0]  cfg_near,
    input      [6:0]  cfg_tile,
    input             cfg_color,
    input             cfg_rice,     // R2: 1 = Golomb-Rice sample codes (tile header = k)
    // compressed input: 64-bit words
    input      [63:0] compressed_long,
    input             write_long,
    output            write_ready,
    // uncompressed output: 64-bit RGB-byte words, valid/ready
    output reg [63:0] uncompressed_long,
    output reg        long_valid,
    input             out_ready,
    output reg [31:0] uncompressed_bytes,   // 8 per word PRESENTED (LZ4-compatible pacing)
    output reg [31:0] writed_bytes,         // compressed bytes accepted (feed watermark)
    output reg [31:0] readed_bytes,         // compressed bytes consumed by the loader
    output            paused,               // loader is starved for input
    output            done
);
    localparam SEGW = 128;                  // words per plane segment bank

    // =========================== input FIFO (256 x 64) ================================
    (* ramstyle = "M10K" *) reg [63:0] ififo [0:255];
    reg  [63:0] if_q;                       // registered read (no reset — M10K)
    reg  [8:0]  if_head, if_tail;
    wire [8:0]  if_count = if_head - if_tail;
    wire        if_empty = (if_count == 9'd0);
    assign write_ready = (9'd256 - if_count) >= 9'd136;   // room for a full 128-word burst
    // fwd decls used across blocks (Questa requires declaration before use)
    reg         bank_consumed;              // comb pulse from the controller (C_EOL)
    reg         dec_bank;                   // bank being DECODED (controller)
    reg  [7:0]  of_head, of_tail;           // output FIFO pointers (packer block)
    wire [7:0]  of_count = of_head - of_tail;
    reg         pk_flushed;                 // packer's final word pushed (controller C_FLUSH -> C_DONE)

    always @(posedge clk) begin
        if (write_long) ififo[if_head[7:0]] <= compressed_long;
        if_q <= ififo[if_tail[7:0]];
    end

    // =========================== line loader (word router) ============================
    // Staged pop: present the tail address one cycle, take if_q the next (1 word/2cyc —
    // 4B/cyc routing, far above the worst-case feed need).
    reg         iw_valid;
    reg  [63:0] iw;
    reg         ip_st;                      // 0=idle 1=tail address presented
    localparam LD_HDR = 2'd0, LD_SEG = 2'd1, LD_MARK = 2'd2, LD_DONE = 2'd3;
    reg  [1:0]  ld_st;
    reg  [1:0]  ld_pl;                      // plane being routed
    reg  [8:0]  ld_left0, ld_left1, ld_left2;   // words remaining per plane segment
    wire [8:0]  ld_left_cur = (ld_pl == 2'd0) ? ld_left0 : (ld_pl == 2'd1) ? ld_left1 : ld_left2;
    reg  [7:0]  ld_waddr;
    reg         ld_bank;                    // bank being LOADED
    reg  [1:0]  bank_rdy;                   // per-bank: a full line record is loaded
    reg  [15:0] ld_lines;                   // line records fully loaded
    reg  [2:0]  seg_we_r;                   // per-plane segment write strobes (registered set)
    reg  [7:0]  seg_wa_r;
    reg  [63:0] seg_wd_r;

    wire ld_want = (ld_st == LD_HDR || ld_st == LD_SEG) && (ld_lines < cfg_h) && !bank_rdy[ld_bank];
    assign paused = if_empty && !iw_valid && ld_want && !done;

    always @(posedge clk) begin
        seg_we_r <= 3'b000;
        if (reset) begin
            if_head <= 9'd0; if_tail <= 9'd0; iw_valid <= 1'b0; ip_st <= 1'b0;
            ld_st <= LD_HDR; ld_pl <= 2'd0; ld_waddr <= 8'd0; ld_bank <= 1'b0;
            bank_rdy <= 2'b00; ld_lines <= 16'd0;
            writed_bytes <= 32'd0; readed_bytes <= 32'd0;
        end else begin
            if (write_long) begin if_head <= if_head + 9'd1; writed_bytes <= writed_bytes + 32'd8; end

            // staged pop (address cycle, then data cycle)
            if (!iw_valid) begin
                if (!ip_st) begin
                    if (!if_empty) ip_st <= 1'b1;                  // tail presented to the BRAM
                end else begin
                    iw <= if_q; iw_valid <= 1'b1; if_tail <= if_tail + 9'd1;
                    readed_bytes <= readed_bytes + 32'd8; ip_st <= 1'b0;
                end
            end

            // route the staged word
            if (iw_valid && ld_want) begin
                if (ld_st == LD_HDR) begin
                    // v2 line header: u16 PADDED byte lengths -> 64-bit word counts (len>>3)
                    ld_left0 <= iw[11:3];
                    ld_left1 <= iw[27:19];
                    ld_left2 <= iw[43:35];
                    ld_pl    <= 2'd0;
                    ld_waddr <= 8'd0;
                    ld_st    <= LD_SEG;
                    iw_valid <= 1'b0;
                end else begin                                     // LD_SEG
                    if (ld_left_cur == 9'd0) begin
                        // segment complete (or empty): advance plane / finish the line
                        if (ld_pl == 2'd2) ld_st <= LD_MARK;
                        else begin ld_pl <= ld_pl + 2'd1; ld_waddr <= 8'd0; end
                    end else begin
                        seg_we_r[ld_pl] <= 1'b1;
                        seg_wa_r        <= ld_waddr;
                        seg_wd_r        <= iw;
                        ld_waddr        <= ld_waddr + 8'd1;
                        iw_valid        <= 1'b0;
                        case (ld_pl)
                            2'd0: ld_left0 <= ld_left0 - 9'd1;
                            2'd1: ld_left1 <= ld_left1 - 9'd1;
                            default: ld_left2 <= ld_left2 - 9'd1;
                        endcase
                        if (ld_left_cur == 9'd1) begin
                            if (ld_pl == 2'd2) ld_st <= LD_MARK;
                            else begin ld_pl <= ld_pl + 2'd1; ld_waddr <= 8'd0; end
                        end
                    end
                end
            end
            if (ld_st == LD_MARK) begin
                bank_rdy[ld_bank] <= 1'b1;
                ld_bank  <= ~ld_bank;
                ld_lines <= ld_lines + 16'd1;
                ld_st    <= (ld_lines + 16'd1 >= cfg_h) ? LD_DONE : LD_HDR;
            end
            if (bank_consumed) bank_rdy[dec_bank] <= 1'b0;
        end
    end

    // =========================== plane cores ==========================================
    // step signals are COMBINATIONAL from the controller state so the cores execute each
    // step in the SAME cycle as the state (x/tcnt stay coherent with stage A/B).
    wire        prime_all, step_hdr, step_a, step_b;
    reg  [15:0] x, y;
    reg         lp;
    wire        first_col = (x == 16'd0);
    wire        first_row = (y == 16'd0);
    wire [2:0]  core_rdy;
    wire signed [15:0] rec0, rec1, rec2;

    nlc_plane_core #(.MAXW(MAXW), .WBITS(WBITS), .SEGW(SEGW), .PID(0)) coreY (
        .clk(clk), .reset(reset), .cfg_near(cfg_near), .is_chroma(1'b0), .cfg_rice(cfg_rice),
        .seg_we(seg_we_r[0]), .seg_waddr(seg_wa_r), .seg_wbank(ld_bank), .seg_wdata(seg_wd_r),
        .rd_bank(dec_bank), .prime(prime_all), .step_hdr(step_hdr), .step_a(step_a), .step_b(step_b),
        .x(x), .first_col(first_col), .first_row(first_row), .lp(lp), .rdy(core_rdy[0]), .recon(rec0));
    nlc_plane_core #(.MAXW(MAXW), .WBITS(WBITS), .SEGW(SEGW), .PID(1)) coreCo (
        .clk(clk), .reset(reset), .cfg_near(cfg_near), .is_chroma(cfg_color), .cfg_rice(cfg_rice),
        .seg_we(seg_we_r[1]), .seg_waddr(seg_wa_r), .seg_wbank(ld_bank), .seg_wdata(seg_wd_r),
        .rd_bank(dec_bank), .prime(prime_all), .step_hdr(step_hdr), .step_a(step_a), .step_b(step_b),
        .x(x), .first_col(first_col), .first_row(first_row), .lp(lp), .rdy(core_rdy[1]), .recon(rec1));
    nlc_plane_core #(.MAXW(MAXW), .WBITS(WBITS), .SEGW(SEGW), .PID(2)) coreCg (
        .clk(clk), .reset(reset), .cfg_near(cfg_near), .is_chroma(cfg_color), .cfg_rice(cfg_rice),
        .seg_we(seg_we_r[2]), .seg_waddr(seg_wa_r), .seg_wbank(ld_bank), .seg_wdata(seg_wd_r),
        .rd_bank(dec_bank), .prime(prime_all), .step_hdr(step_hdr), .step_a(step_a), .step_b(step_b),
        .x(x), .first_col(first_col), .first_row(first_row), .lp(lp), .rdy(core_rdy[2]), .recon(rec2));

    // =========================== shared controller ====================================
    localparam C_WAIT = 3'd0, C_PRIME = 3'd1, C_HDR = 3'd2, C_A = 3'd3, C_B = 3'd4,
               C_EOL  = 3'd5, C_FLUSH = 3'd6, C_DONE = 3'd7;
    reg  [2:0]  cst;
    reg  [15:0] tcnt;
    reg  [2:0]  pw;                          // prime-settle counter (cores drop rdy 1 cyc after prime)
    reg         done_r;
    assign done = done_r;
    wire        all_rdy   = &core_rdy;
    // gate a whole TILE's worth of output space before its header (16 px = 6 words + slack),
    // so tiles then run unstalled at the flat 2 cyc/px cadence.
    wire        out_space = (8'd128 - of_count) >= 8'd10;
    // combinational step pulses (cores act in the SAME cycle as the state)
    assign prime_all     = (cst == C_WAIT) && bank_rdy[dec_bank];
    assign step_hdr      = (cst == C_HDR)  && all_rdy && out_space;
    assign step_a        = (cst == C_A);
    assign step_b        = (cst == C_B);
    always @* bank_consumed = (cst == C_EOL);

    always @(posedge clk) begin
        if (reset) begin
            cst <= C_WAIT; x <= 16'd0; y <= 16'd0; lp <= 1'b0; dec_bank <= 1'b0;
            tcnt <= 16'd0; pw <= 3'd0; done_r <= 1'b0;
        end else begin
            case (cst)
                C_WAIT: if (bank_rdy[dec_bank]) begin pw <= 3'd0; cst <= C_PRIME; end
                C_PRIME: begin                        // wait the re-prime to settle, then readers ready
                    pw <= (pw == 3'd7) ? pw : pw + 3'd1;
                    if (pw >= 3'd3 && all_rdy) cst <= C_HDR;
                end
                C_HDR: if (step_hdr) begin            // headers consumed this cycle in lockstep
                    tcnt <= ((x + {9'd0, cfg_tile}) <= cfg_w) ? {9'd0, cfg_tile} : (cfg_w - x);
                    cst <= C_A;
                end
                C_A: cst <= C_B;
                C_B: begin                            // stage B executes this cycle with the CURRENT x
                    x    <= x + 16'd1;
                    tcnt <= tcnt - 16'd1;
                    if (x + 16'd1 == cfg_w)      cst <= C_EOL;
                    else if (tcnt == 16'd1)      cst <= C_HDR;
                    else                         cst <= C_A;
                end
                C_EOL: begin
                    // bank released (bank_consumed comb this cycle); swap parity, next line
                    dec_bank <= ~dec_bank;
                    lp <= ~lp;
                    x  <= 16'd0;
                    y  <= y + 16'd1;
                    cst <= (y + 16'd1 == cfg_h) ? C_FLUSH : C_WAIT;
                end
                C_FLUSH: if (pk_flushed) cst <= C_DONE;  // wait for the packer's final word
                C_DONE: done_r <= (of_count == 8'd0) && !long_valid;   // everything delivered
                default: cst <= C_WAIT;
            endcase
        end
    end

    // =========================== fused combine ========================================
    reg comb_v;
    always @(posedge clk) comb_v <= reset ? 1'b0 : step_b;
// synthesis translate_off
    reg cdbg; initial cdbg = $test$plusargs("coredbg");
    always @(posedge clk) if (cdbg && comb_v)
        $display("[COMB] rec=(%0d,%0d,%0d) -> RGB=(%0d,%0d,%0d)", rec0, rec1, rec2, clamp8(oR), clamp8(oG), clamp8(oB));
// synthesis translate_on
    // inverse YCoCg-R on the three registered recons (valid the cycle after stage B)
    wire signed [15:0] it = rec0 - (rec2 >>> 1);
    wire signed [15:0] iG = rec2 + it;
    wire signed [15:0] iB = it - (rec1 >>> 1);
    wire signed [15:0] iR = iB + rec1;
    wire signed [15:0] oR = cfg_color ? iR : rec0;
    wire signed [15:0] oG = cfg_color ? iG : rec1;
    wire signed [15:0] oB = cfg_color ? iB : rec2;
    function [7:0] clamp8(input signed [15:0] v);
        clamp8 = (v < 0) ? 8'd0 : (v > 255) ? 8'd255 : v[7:0];
    endfunction

    // =========================== packer + output FIFO (128 x 64) ======================
    (* ramstyle = "M10K" *) reg [63:0] ofifo [0:127];
    reg  [63:0] of_q;                        // registered read (no reset — M10K)
    reg         of_pop_st;                   // head refresh: 0=idle 1=tail address presented
    reg  [95:0] pk_acc;
    reg  [6:0]  pk_n;                        // valid bytes in pk_acc
    reg  [95:0] pk_na;                       // blocking scratch
    reg  [6:0]  pk_nn;

    always @(posedge clk) begin
        if (reset) begin
            pk_acc <= 96'd0; pk_n <= 7'd0; pk_flushed <= 1'b0;
            of_head <= 8'd0; of_tail <= 8'd0; of_pop_st <= 1'b0;
            long_valid <= 1'b0; uncompressed_bytes <= 32'd0;
        end else begin
            // ---- pack 3 bytes per combined pixel; push full 64-bit words ----
            pk_na = pk_acc; pk_nn = pk_n;
            if (comb_v) begin
                pk_na = pk_na | ({72'd0, clamp8(oB), clamp8(oG), clamp8(oR)} << {pk_nn, 3'b000});
                pk_nn = pk_nn + 7'd3;
            end
            if (pk_nn >= 7'd8) begin
                ofifo[of_head[6:0]] <= pk_na[63:0];
                of_head <= of_head + 8'd1;
                pk_na = pk_na >> 64;
                pk_nn = pk_nn - 7'd8;
            end else if (cst == C_FLUSH && !pk_flushed) begin
                if (pk_nn != 7'd0) begin                       // flush the final partial word
                    ofifo[of_head[6:0]] <= pk_na[63:0];
                    of_head <= of_head + 8'd1;
                    pk_na = 96'd0; pk_nn = 7'd0;
                end
                pk_flushed <= 1'b1;
            end
            pk_acc <= pk_na; pk_n <= pk_nn;

            // ---- presented head: registered, refreshed through the BRAM after each pop ----
            of_q <= ofifo[of_tail[6:0]];
            if (long_valid && out_ready) begin
                long_valid <= 1'b0;                            // popped
                of_tail    <= of_tail + 8'd1;
                of_pop_st  <= 1'b0;
            end else if (!long_valid) begin
                if (of_count != 8'd0) begin
                    if (!of_pop_st) of_pop_st <= 1'b1;         // tail presented to the BRAM
                    else begin
                        uncompressed_long  <= of_q;
                        long_valid         <= 1'b1;
                        uncompressed_bytes <= uncompressed_bytes + 32'd8;
                        of_pop_st          <= 1'b0;
                    end
                end
            end
        end
    end
endmodule
