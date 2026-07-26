// nlc_decoder_mux.v — drop-in replacement for the `lz4` instance in Groovy.sv.
//
// Presents the EXACT lz4 port interface so the blit FSM (and all its frame/vram
// bookkeeping) is reused UNCHANGED — only the instantiation line in Groovy.sv
// swaps `lz4 lz4(...)` for `nlc_decoder_mux lz4(...)` plus the extra codec_mode /
// nlc_* / cfg_* ports. Internally it instantiates both the real LZ4 decoder and
// the NLC decoder (nlc_decode_ddr) and muxes by codec_mode:
//
//   codec_mode != 2  → behaves byte-identically to today's LZ4 instance (the NLC
//                      block is held idle), so LZ4 / raw paths are untouched.
//   codec_mode == 2  → the NLC block decodes; LZ4 is idle and its watchdog masked.
//
// The NLC decoder is sim-verified bit-exact (tools/run_sim.sh). The one thing that
// can only be validated on hardware is the OUTPUT PACING — i.e. exactly when the
// FSM consumes a decoded word. First-cut: nlc out_ready = lz4_run && !lz4_stop
// (mirrors how the FSM gates LZ4). >>> This is THE knob to tune on hardware if
// frames tear/drop. <<<

module nlc_decoder_mux (
    input         lz4_clk,
    input         lz4_reset,
    input         lz4_mode_64,
    input         lz4_run,
    input         lz4_stop,
    input  [31:0] lz4_compressed_bytes,
    input  [63:0] lz4_compressed_long,
    input         lz4_write_long,

    output        lz4_write_ready,
    output [7:0]  lz4_uncompressed_byte,
    output        lz4_byte_valid,
    output [63:0] lz4_uncompressed_long,
    output        lz4_long_valid,
    output [31:0] lz4_uncompressed_bytes,
    output        lz4_paused,
    output        lz4_done,
    output        lz4_error,
    output [3:0]  lz4_state,
    output [31:0] lz4_writed_bytes,
    output [31:0] lz4_readed_bytes,
    output        lz4_read_ready,

    input  [63:0] lz4_delta_long,
    input         lz4_predictor,
    input  [1:0]  lz4_rgb_mode,
    output [31:0] lz4_dbg_prev_bytes,
    output        lz4_watchdog,

    // --- added for NLC selection ---
    input  [1:0]  codec_mode,   // 0=raw, 1=LZ4, 2=NLC
    input  [1:0]  nlc_near,
    input         nlc_color,
    input  [15:0] cfg_w,        // active width  (from switchres)
    input  [15:0] cfg_h         // active height (field-halved if interlaced)
);
    wire is_nlc = (codec_mode == 2'd2);

    // ---- internal LZ4 decoder (idle when NLC) ---------------------------------
    wire        li_write_ready, li_byte_valid, li_long_valid, li_paused, li_done, li_error, li_read_ready, li_watchdog;
    wire [7:0]  li_uncompressed_byte;
    wire [63:0] li_uncompressed_long;
    wire [31:0] li_uncompressed_bytes, li_writed_bytes, li_readed_bytes, li_dbg_prev_bytes;
    wire [3:0]  li_state;

    lz4 u_lz4 (
        .lz4_clk(lz4_clk), .lz4_reset(lz4_reset), .lz4_mode_64(lz4_mode_64),
        .lz4_run(lz4_run && !is_nlc), .lz4_stop(lz4_stop),
        .lz4_compressed_bytes(lz4_compressed_bytes), .lz4_compressed_long(lz4_compressed_long),
        .lz4_write_long(lz4_write_long && !is_nlc),
        .lz4_write_ready(li_write_ready), .lz4_uncompressed_byte(li_uncompressed_byte),
        .lz4_byte_valid(li_byte_valid), .lz4_uncompressed_long(li_uncompressed_long),
        .lz4_long_valid(li_long_valid), .lz4_uncompressed_bytes(li_uncompressed_bytes),
        .lz4_paused(li_paused), .lz4_done(li_done), .lz4_error(li_error), .lz4_state(li_state),
        .lz4_writed_bytes(li_writed_bytes), .lz4_readed_bytes(li_readed_bytes),
        .lz4_read_ready(li_read_ready), .lz4_delta_long(lz4_delta_long),
        .lz4_predictor(lz4_predictor), .lz4_rgb_mode(lz4_rgb_mode),
        .lz4_dbg_prev_bytes(li_dbg_prev_bytes), .lz4_watchdog(li_watchdog)
    );

    // ---- internal NLC decoder (idle-ish when not NLC) -------------------------
    wire        ni_write_ready, ni_long_valid, ni_paused, ni_done;
    wire [63:0] ni_uncompressed_long;
    wire [31:0] ni_uncompressed_bytes, ni_writed_bytes, ni_readed_bytes;

    nlc_decode_ddr #(.MAXW(720), .WBITS(4), .NP(3)) u_nlc (
        .clk(lz4_clk), .reset(lz4_reset),
        .cfg_w(cfg_w), .cfg_h(cfg_h), .cfg_near({1'b0, nlc_near}), .cfg_tile(7'd16), .cfg_color(nlc_color),
        .compressed_long(lz4_compressed_long),
        .write_long(lz4_write_long && is_nlc),
        .write_ready(ni_write_ready),
        .uncompressed_long(ni_uncompressed_long),
        .long_valid(ni_long_valid),
        .out_ready(lz4_run && !lz4_stop),       // <<< pacing knob (hardware-tune) >>>
        .uncompressed_bytes(ni_uncompressed_bytes),
        .writed_bytes(ni_writed_bytes),
        .readed_bytes(ni_readed_bytes),
        .paused(ni_paused),
        .done(ni_done)
    );

    // ---- output mux (the FSM reads these) -------------------------------------
    assign lz4_write_ready        = is_nlc ? ni_write_ready        : li_write_ready;
    assign lz4_uncompressed_long  = is_nlc ? ni_uncompressed_long  : li_uncompressed_long;
    assign lz4_long_valid         = is_nlc ? ni_long_valid         : li_long_valid;
    assign lz4_uncompressed_bytes = is_nlc ? ni_uncompressed_bytes : li_uncompressed_bytes;
    assign lz4_writed_bytes       = is_nlc ? ni_writed_bytes       : li_writed_bytes;
    assign lz4_readed_bytes       = is_nlc ? ni_readed_bytes       : li_readed_bytes;
    assign lz4_paused             = is_nlc ? ni_paused             : li_paused;
    assign lz4_done               = is_nlc ? ni_done               : li_done;
    assign lz4_error              = is_nlc ? 1'b0                  : li_error;
    assign lz4_watchdog           = is_nlc ? 1'b0                  : li_watchdog;   // NLC cannot wedge
    assign lz4_read_ready         = is_nlc ? 1'b1                  : li_read_ready;
    // debug/observability — always from the LZ4 instance
    assign lz4_uncompressed_byte  = li_uncompressed_byte;
    assign lz4_byte_valid         = li_byte_valid;
    assign lz4_state              = li_state;
    assign lz4_dbg_prev_bytes     = li_dbg_prev_bytes;
endmodule
