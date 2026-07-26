// tb_ddr_mux2.v — unit test for rtl/ddr_mux2.v (the /47 Mode-2 two-master DDR arbiter).
// Stack under test: two masters -> ddr_mux2 -> REAL rtl/ddram.sv -> behavioral Avalon slave
// (the tb_ddram.v model + a hold-free window after read beats, matching the f2sdram bridge's
// behavior the FSM's `dready && !busy` exit idiom depends on).
//
// M0 drives the port with Groovy.sv's EXACT idioms (decide on !busy, assert rd next cycle, drop
// rd once busy observed; writes level-held; burst-write din advances on !busy): the arbiter must
// be perfectly transparent to it. M1 drives engine-style (req/gnt, one transaction per grant).
// Checks: every op completes (per-op watchdog = no lost pulses/deadlock), all written data lands
// byte-exact (mirror scoreboard), all read data matches the mirror, write bursts atomic, the
// arbiter never raises m0_busy on M0's final read beat (the exit-idiom hazard), M1 grant waits
// bounded, and the DDRMUX2-VIOLATION assertion never fires.
//   iverilog -g2012 -o /tmp/tb_mux tools/tb_ddr_mux2.v rtl/ddr_mux2.v rtl/ddram.sv && vvp /tmp/tb_mux
`timescale 1ns/1ps
module tb;
    reg clk = 0; always #5 clk = ~clk;

    // ---------------- DDRAM (Avalon slave) side
    reg         DDRAM_BUSY = 0;
    wire  [7:0] DDRAM_BURSTCNT;
    wire [28:0] DDRAM_ADDR;
    reg  [63:0] DDRAM_DOUT = 0;
    reg         DDRAM_DOUT_READY = 0;
    wire        DDRAM_RD;
    wire [63:0] DDRAM_DIN;
    wire  [7:0] DDRAM_BE;
    wire        DDRAM_WE;

    // ---------------- master 0 (FSM-faithful)
    reg  [27:1] m0_addr = 0;
    reg  [63:0] m0_din  = 0;
    reg         m0_rd = 0, m0_wr = 0;
    reg   [7:0] m0_burst = 1;
    wire        m0_busy, m0_dready;

    // ---------------- master 1 (engine-style)
    reg         m1_req = 0;
    wire        m1_gnt;
    reg  [27:1] m1_addr = 0;
    reg  [63:0] m1_din  = 0;
    reg         m1_rd = 0, m1_wr = 0;
    reg   [7:0] m1_burst = 1;
    wire        m1_busy, m1_dready;

    // ---------------- arbiter -> ddram plumbing
    wire [27:1] mem_addr;
    wire [63:0] mem_din, mem_dout;
    wire        mem_rd, mem_wr, mem_busy, mem_dready;
    wire  [7:0] mem_burst;

    ddr_mux2 mux (
        .clk(clk),
        .m0_addr(m0_addr), .m0_din(m0_din), .m0_rd(m0_rd), .m0_burst(m0_burst), .m0_wr(m0_wr),
        .m0_busy(m0_busy), .m0_dready(m0_dready),
        .m1_req(m1_req), .m1_gnt(m1_gnt),
        .m1_addr(m1_addr), .m1_din(m1_din), .m1_rd(m1_rd), .m1_burst(m1_burst), .m1_wr(m1_wr),
        .m1_busy(m1_busy), .m1_dready(m1_dready),
        .mem_addr(mem_addr), .mem_din(mem_din), .mem_rd(mem_rd), .mem_burst(mem_burst), .mem_wr(mem_wr),
        .mem_busy(mem_busy), .mem_dready(mem_dready));

    ddram ddr (
        .DDRAM_CLK(clk), .DDRAM_BUSY(DDRAM_BUSY), .DDRAM_BURSTCNT(DDRAM_BURSTCNT), .DDRAM_ADDR(DDRAM_ADDR),
        .DDRAM_DOUT(DDRAM_DOUT), .DDRAM_DOUT_READY(DDRAM_DOUT_READY), .DDRAM_RD(DDRAM_RD),
        .DDRAM_DIN(DDRAM_DIN), .DDRAM_BE(DDRAM_BE), .DDRAM_WE(DDRAM_WE),
        .mem_addr(mem_addr), .mem_dout(mem_dout), .mem_din(mem_din), .mem_rd(mem_rd),
        .mem_burst(mem_burst), .mem_wr(mem_wr), .mem_busy(mem_busy), .mem_dready(mem_dready));

    // ---------------- behavioral Avalon slave (tb_ddram model + hold-free window after beats)
    reg [63:0] slave_mem [0:2047];
    integer    wr_left = 0;
    reg [28:0] wr_addr;
    reg  [7:0] first_bcnt;
    integer    errors = 0, beats_total = 0, rd_left = 0, hold_free = 0;
    reg [28:0] rd_addr;
    reg [31:0] lfsr = 32'hBEEF1234;
    reg [31:0] seed = 0;
    initial begin
        if ($value$plusargs("seed=%d", seed)) begin
            lfsr = lfsr ^ seed;
        end
    end
    always @(posedge clk) begin
        lfsr <= {lfsr[30:0], lfsr[31] ^ lfsr[21] ^ lfsr[1] ^ lfsr[0]};
        if (DDRAM_WE && !DDRAM_BUSY) begin
            if (wr_left == 0) begin first_bcnt = DDRAM_BURSTCNT; wr_addr = DDRAM_ADDR; wr_left = DDRAM_BURSTCNT; end
            slave_mem[wr_addr[10:0]] = DDRAM_DIN;
            wr_addr = wr_addr + 1;
            wr_left = wr_left - 1;
            beats_total = beats_total + 1;
        end
        if (DDRAM_RD && !DDRAM_BUSY && rd_left == 0) begin rd_left = DDRAM_BURSTCNT; rd_addr = DDRAM_ADDR; end
        if (rd_left > 0 && lfsr[4:3] != 2'b01) begin
            DDRAM_DOUT <= slave_mem[rd_addr[10:0]]; DDRAM_DOUT_READY <= 1; DDRAM_BUSY <= 0;
            rd_addr = rd_addr + 1; rd_left = rd_left - 1;
            hold_free = 2;   // f2sdram keeps waitrequest low around data returns (the FSM exit idiom relies on it)
        end else begin
            DDRAM_DOUT_READY <= 0;
            if (hold_free > 0) begin DDRAM_BUSY <= 0; hold_free = hold_free - 1; end
            else DDRAM_BUSY <= (lfsr[2:0] == 3'b000) || (lfsr[6:4] == 3'b101);   // ~35% random waitrequest
        end
    end

    // ---------------- shared scoreboard mirror (drivers write-through on their acceptance beats;
    // address spaces are disjoint: M0 words 0..1023, M1 words 1024..2047 — slave word addr = ddram
    // ADDR mapping of mem_addr[27:1]>>2, but both mirror and slave index with the same [10:0] slice
    // of the auto-incremented Avalon address, so we mirror at (mem_addr>>2) & 2047)
    reg [63:0] mirror [0:2047];
    integer i;
    initial for (i = 0; i < 2048; i = i + 1) begin slave_mem[i] = {32'hD0D0_0000 | i, i[31:0]}; mirror[i] = slave_mem[i]; end
    // ddram maps DDRAM_ADDR = {6'b000111, mem_addr[25:3]} -> slave word index = mem_addr[25:3] (mod 2048 here)
    function [10:0] widx(input [27:1] a); widx = a[13:3]; endfunction

    // ---------------- global monitors
    integer viol = 0, m1_wait_max = 0, m1_wait_cur = 0, grants = 0;
    reg m1_gnt_d = 0;
    always @(posedge clk) begin
        if ((mux.g == 2'd2 || mux.g == 2'd3) && m0_rd) begin viol = viol + 1; errors = errors + 1; end   // mirrors the module's own assertion
        m1_gnt_d <= m1_gnt;
        if (m1_gnt && !m1_gnt_d) grants = grants + 1;
        if (m1_req && !m1_gnt) begin
            m1_wait_cur = m1_wait_cur + 1;
            if (m1_wait_cur > m1_wait_max) m1_wait_max = m1_wait_cur;
        end else m1_wait_cur = 0;
    end

    // ---------------- M0 driver (Groovy-FSM-faithful idioms)
    integer m0_ops = 0, m0_beat, m0_guard;
    reg [31:0] m0_rnd = 32'h12345678;
    reg [27:1] m0_a;
    reg  [7:0] m0_n;
    reg [63:0] m0_v;
    task m0_next_rnd; m0_rnd = {m0_rnd[30:0], m0_rnd[31]^m0_rnd[21]^m0_rnd[1]^m0_rnd[0]}; endtask

    // FSM read: wait !busy (the decide cycle), assert rd NEXT cycle, drop rd once busy observed,
    // count dready beats; on the final beat the FSM exits on `dready && !busy` — flag if busy was
    // high there (the wedge hazard the arbiter must never induce).
    task m0_read(input [27:1] a, input [7:0] n);
        begin
            m0_guard = 0;
            // FAITHFUL FSM TIMING: after @(posedge clk), reads in the active region see PRE-edge
            // values — exactly what a clocked FSM's decision sees. Decide and NBA-assert at the
            // SAME edge (an extra edge between check and assert is 2-cycle latency the real FSM
            // never has, and races the arbiter's PEND window — found the hard way).
            @(posedge clk);
            while (m0_busy) begin @(posedge clk); m0_guard = m0_guard + 1; if (m0_guard > 5000) begin errors=errors+1; $display("M0 READ pre-busy watchdog"); disable m0_read; end end
            m0_addr <= a; m0_burst <= n; m0_rd <= 1'b1;
            m0_beat = 0; m0_guard = 0;
            while (m0_beat < n) begin
                @(posedge clk);
                if (m0_busy) m0_rd <= 1'b0;       // request latched -> drop the pulse (FSM idiom)
                if (m0_dready) begin
                    if (mem_dout !== mirror[widx(a) + m0_beat]) begin
                        errors = errors + 1;
                        $display("M0 READ MISMATCH op %0d beat %0d: got %h exp %h", m0_ops, m0_beat, mem_dout, mirror[widx(a)+m0_beat]);
                    end
                    m0_beat = m0_beat + 1;
                    if (m0_beat == n && m0_busy) begin errors = errors + 1; $display("M0 final-beat busy=1 (exit-idiom hazard) op %0d", m0_ops); end
                end
                m0_guard = m0_guard + 1;
                if (m0_guard > 5000) begin errors = errors + 1; $display("M0 READ watchdog op %0d beat %0d/%0d", m0_ops, m0_beat, n); disable m0_read; end
            end
            m0_rd <= 1'b0;
            @(posedge clk);
        end
    endtask

    // FSM single write: level-held until accepted (!busy)
    task m0_write1(input [27:1] a, input [63:0] d);
        begin
            @(posedge clk);
            m0_addr <= a; m0_din <= d; m0_burst <= 8'd1; m0_wr <= 1'b1;
            @(posedge clk);
            m0_guard = 0;
            while (m0_busy) begin @(posedge clk); m0_guard = m0_guard + 1; if (m0_guard > 5000) begin errors=errors+1; $display("M0 WR1 watchdog"); disable m0_write1; end end
            mirror[widx(a)] = d;                  // accepted this edge
            m0_wr <= 1'b0;
            @(posedge clk);
        end
    endtask

    // NLC-flush-style burst write: level-held, din/addr advance on every !busy cycle
    task m0_writeb(input [27:1] a, input [7:0] n, input [63:0] v0);
        begin
            @(posedge clk);
            m0_addr <= a; m0_din <= v0; m0_burst <= n; m0_wr <= 1'b1;
            m0_beat = 0; m0_guard = 0;
            while (m0_beat < n) begin
                @(posedge clk);
                if (!m0_busy) begin
                    mirror[widx(a) + m0_beat] = v0 + m0_beat;   // beat accepted
                    m0_beat = m0_beat + 1;
                    m0_din  <= v0 + m0_beat;                     // one ahead, like nlc_lb_q
                end
                m0_guard = m0_guard + 1;
                if (m0_guard > 8000) begin errors = errors + 1; $display("M0 WRB watchdog op %0d beat %0d/%0d", m0_ops, m0_beat, n); disable m0_writeb; end
            end
            m0_wr <= 1'b0;
            @(posedge clk);
        end
    endtask

    // ---------------- M1 driver (engine-style: req/gnt, one transaction per grant)
    integer m1_ops = 0, m1_beat, m1_guard;
    reg [31:0] m1_rnd = 32'hCAFED00D;
    reg [27:1] m1_a;
    reg  [7:0] m1_n;
    task m1_next_rnd; m1_rnd = {m1_rnd[30:0], m1_rnd[31]^m1_rnd[21]^m1_rnd[1]^m1_rnd[0]}; endtask

    reg m1_trace = 0;   // debug: set inside a driver task to get a cycle trace of one op
    always @(posedge clk) if (m1_trace)
        $display("M1TRC t=%0t g=%0d req=%b gnt=%b m1_rd=%b m1_busy=%b mem_rd=%b read_req=%b DBUSY=%b st=%b bcnt=%0d DRD=%b",
                 $time, mux.g, m1_req, m1_gnt, m1_rd, m1_busy, mem_rd, ddr.read_req, DDRAM_BUSY, ddr.state, mem_burst, DDRAM_RD);

    task m1_read(input [27:1] a, input [7:0] n);
        begin
            @(posedge clk);
            m1_req <= 1'b1;
            m1_guard = 0;
            while (!m1_gnt) begin @(posedge clk); m1_guard = m1_guard + 1; if (m1_guard > 20000) begin errors=errors+1; $display("M1 GNT watchdog (read)"); m1_req<=0; disable m1_read; end end
            @(posedge clk);
            m1_addr <= a; m1_burst <= n; m1_rd <= 1'b1;
            m1_beat = 0; m1_guard = 0;
            while (m1_beat < n) begin
                @(posedge clk);
                if (m1_busy) m1_rd <= 1'b0;
                if (m1_dready) begin
                    if (mem_dout !== mirror[widx(a) + m1_beat]) begin
                        errors = errors + 1;
                        $display("M1 READ MISMATCH op %0d beat %0d: got %h exp %h", m1_ops, m1_beat, mem_dout, mirror[widx(a)+m1_beat]);
                    end
                    m1_beat = m1_beat + 1;
                end
                m1_guard = m1_guard + 1;
                if (m1_guard > 5000) begin
                    errors = errors + 1;
                    $display("M1 READ watchdog op %0d beat %0d/%0d | g=%0d m1_rd=%b m1_busy=%b mem_rd=%b mem_busy=%b ddram.state=%b ddram.read_req=%b ddram.ram_burst=%0d slave.rd_left=%0d",
                             m1_ops, m1_beat, n, mux.g, m1_rd, m1_busy, mem_rd, mem_busy, ddr.state, ddr.read_req, ddr.ram_burst, rd_left);
                    m1_rd<=0; m1_req<=0; disable m1_read;
                end
            end
            m1_rd  <= 1'b0;
            m1_req <= 1'b0;
            m1_trace = 0;
            @(posedge clk);
        end
    endtask

    task m1_writeb(input [27:1] a, input [7:0] n, input [63:0] v0);
        begin
            @(posedge clk);
            m1_req <= 1'b1;
            m1_guard = 0;
            while (!m1_gnt) begin @(posedge clk); m1_guard = m1_guard + 1; if (m1_guard > 20000) begin errors=errors+1; $display("M1 GNT watchdog (write)"); m1_req<=0; disable m1_writeb; end end
            @(posedge clk);
            m1_addr <= a; m1_din <= v0; m1_burst <= n; m1_wr <= 1'b1;
            m1_beat = 0; m1_guard = 0;
            while (m1_beat < n) begin
                @(posedge clk);
                if (!m1_busy) begin
                    mirror[widx(a) + m1_beat] = v0 + m1_beat;
                    m1_beat = m1_beat + 1;
                    m1_din  <= v0 + m1_beat;
                end
                m1_guard = m1_guard + 1;
                if (m1_guard > 8000) begin errors = errors + 1; $display("M1 WRB watchdog op %0d beat %0d/%0d", m1_ops, m1_beat, n); m1_wr<=0; m1_req<=0; disable m1_writeb; end
            end
            m1_wr  <= 1'b0;
            m1_req <= 1'b0;
            @(posedge clk);
        end
    endtask

    // ---------------- traffic: phase A = M0 alone (transparent-path smoke); phase B = concurrent chaos
    integer m0_done = 0, m1_done = 0, phase = 0;
    initial begin : M0FLOW
        repeat (10) @(posedge clk);
        // phase A: M0 alone
        for (m0_ops = 0; m0_ops < 60; m0_ops = m0_ops + 1) begin
            m0_next_rnd;
            m0_a = {14'd0, m0_rnd[9:3], 3'b000};                   // words 0..127 region (x8 bytes; +128 beats stays < 896)
            m0_n = (m0_rnd[16:10] % 8'd120) + 8'd1;
            m0_v = {32'hA0000000 + m0_ops, m0_rnd};
            case (m0_rnd[1:0])
                2'd0: m0_read(m0_a, m0_n);
                2'd1: m0_write1(m0_a, m0_v);
                default: m0_writeb(m0_a, m0_n, m0_v);
            endcase
        end
        phase = 1;
        // phase B: concurrent with M1, back-to-back + random gaps
        for (m0_ops = 60; m0_ops < 460; m0_ops = m0_ops + 1) begin
            m0_next_rnd;
            m0_a = (m0_rnd[9:0] % 10'd896) << 2;   // word w -> mem_addr value w<<2; base+128 beats <= 1023 stays in M0's half
            m0_n = (m0_rnd[16:10] % 8'd128) + 8'd1;
            m0_v = {32'hA0000000 + m0_ops, m0_rnd};
            case (m0_rnd[1:0])
                2'd0: m0_read(m0_a, m0_n);
                2'd1: m0_write1(m0_a, m0_v);
                default: m0_writeb(m0_a, (m0_n % 8'd120) + 8'd1, m0_v);
            endcase
            if (m0_rnd[6:2] == 5'd7) repeat (m0_rnd[4:0]) @(posedge clk);   // occasional idle gap
        end
        m0_done = 1;
    end

    initial begin : M1FLOW
        wait (phase == 1);
        for (m1_ops = 0; m1_ops < 200; m1_ops = m1_ops + 1) begin
            m1_next_rnd;
            m1_a = ((m1_rnd[9:0] % 10'd896) << 2) | 28'h1000;   // words 1024..1919 (base+128 <= 2047: stays in M1's half)
            m1_n = (m1_rnd[16:10] % 8'd128) + 8'd1;
            if (m1_rnd[0]) m1_read(m1_a, m1_n);
            else           m1_writeb(m1_a, (m1_n % 8'd120) + 8'd1, {32'hB0000000 + m1_ops, m1_rnd});
            if (m1_rnd[5:2] == 4'd3) repeat (m1_rnd[5:0]) @(posedge clk);
        end
        m1_done = 1;
    end

    // ---------------- verdict
    initial begin
        wait (m0_done && m1_done);
        repeat (50) @(posedge clk);
        $display("----");
        $display("ops: m0=%0d m1=%0d  beats=%0d  m1 grants=%0d  m1 max gnt wait=%0d cyc  violations=%0d",
                 m0_ops, m1_ops, beats_total, grants, m1_wait_max, viol);
        if (errors == 0 && grants > 50) $display("DDR_MUX2 TB PASS");
        else                            $display("DDR_MUX2 TB FAIL: %0d errors, %0d grants", errors, grants);
        $finish;
    end
    initial begin #20000000 $display("DDR_MUX2 TB TIMEOUT (deadlock?) m0_ops=%0d m1_ops=%0d", m0_ops, m1_ops); $finish; end
endmodule
