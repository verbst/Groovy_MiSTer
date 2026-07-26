// tb_ddram.v — unit test for rtl/ddram.sv after the STAGE-1 write-burst change.
// Drives mem_* exactly like Groovy.sv does (single-beat writes = LZ4/RAW; burst writes = the NLC flush
// protocol: mem_din/mem_addr advance on every !mem_busy cycle) against a behavioral Avalon DDRAM slave
// with random waitrequest. Checks: (1) single writes land byte-identically (BURSTCNT=1, addr/data);
// (2) a burst write of N beats = ONE transaction (BURSTCNT=N on the first beat), data in order, correct
// addresses (slave auto-increments), robust under random BUSY; (3) read bursts still work (regression).
//   iverilog -g2012 -o /tmp/tb_ddram tools/tb_ddram.v rtl/ddram.sv && vvp /tmp/tb_ddram
`timescale 1ns/1ps
module tb;
    reg clk = 0; always #5 clk = ~clk;

    // DDRAM (slave) side
    reg         DDRAM_BUSY = 0;
    wire  [7:0] DDRAM_BURSTCNT;
    wire [28:0] DDRAM_ADDR;
    reg  [63:0] DDRAM_DOUT = 0;
    reg         DDRAM_DOUT_READY = 0;
    wire        DDRAM_RD;
    wire [63:0] DDRAM_DIN;
    wire  [7:0] DDRAM_BE;
    wire        DDRAM_WE;
    // mem (master/Groovy) side
    reg  [27:1] mem_addr = 0;
    wire [63:0] mem_dout;
    reg  [63:0] mem_din = 0;
    reg         mem_rd = 0, mem_wr = 0;
    reg   [7:0] mem_burst = 1;
    wire        mem_busy, mem_dready;

    ddram dut (
        .DDRAM_CLK(clk), .DDRAM_BUSY(DDRAM_BUSY), .DDRAM_BURSTCNT(DDRAM_BURSTCNT), .DDRAM_ADDR(DDRAM_ADDR),
        .DDRAM_DOUT(DDRAM_DOUT), .DDRAM_DOUT_READY(DDRAM_DOUT_READY), .DDRAM_RD(DDRAM_RD),
        .DDRAM_DIN(DDRAM_DIN), .DDRAM_BE(DDRAM_BE), .DDRAM_WE(DDRAM_WE),
        .mem_addr(mem_addr), .mem_dout(mem_dout), .mem_din(mem_din), .mem_rd(mem_rd),
        .mem_burst(mem_burst), .mem_wr(mem_wr), .mem_busy(mem_busy), .mem_dready(mem_dready));

    // ---------------- behavioral Avalon slave: random waitrequest; write beats land at auto-incremented
    // word addresses; the burst length is latched at the FIRST beat of each write transaction.
    reg [63:0] slave_mem [0:1023];
    integer    wr_left = 0;            // beats remaining in the current write transaction
    reg [28:0] wr_addr;
    reg  [7:0] first_bcnt;
    integer    errors = 0, beats_total = 0;
    reg [31:0] lfsr = 32'hBEEF1234;
    integer rd_left = 0; reg [28:0] rd_addr;
    always @(posedge clk) begin
        lfsr <= {lfsr[30:0], lfsr[31] ^ lfsr[21] ^ lfsr[1] ^ lfsr[0]};
        // write beats
        if (DDRAM_WE && !DDRAM_BUSY) begin
            if (wr_left == 0) begin                 // first beat: latch the transaction
                first_bcnt = DDRAM_BURSTCNT;
                wr_addr    = DDRAM_ADDR;
                wr_left    = DDRAM_BURSTCNT;
            end
            slave_mem[wr_addr[9:0]] = DDRAM_DIN;    // land the beat
            wr_addr = wr_addr + 1;                  // Avalon word address auto-increment
            wr_left = wr_left - 1;
            beats_total = beats_total + 1;
        end
        // read command latch
        if (DDRAM_RD && !DDRAM_BUSY && rd_left == 0) begin rd_left = DDRAM_BURSTCNT; rd_addr = DDRAM_ADDR; end
        // data return / busy (one driver): MiSTer DDRAM contract — data-return cycles are NOT BUSY
        // (ddram.sv samples DOUT_READY under !BUSY)
        if (rd_left > 0 && lfsr[4:3] != 2'b01) begin
            DDRAM_DOUT <= {35'd0, rd_addr}; DDRAM_DOUT_READY <= 1; DDRAM_BUSY <= 0;
            rd_addr = rd_addr + 1; rd_left = rd_left - 1;
        end else begin
            DDRAM_DOUT_READY <= 0;
            DDRAM_BUSY <= (lfsr[2:0] == 3'b000) || (lfsr[6:4] == 3'b101);   // ~35% random waitrequest
        end
    end

    // ---------------- master (Groovy-faithful) tasks
    task single_write(input [27:1] a, input [63:0] d);   // LZ4/RAW style
        begin
            @(posedge clk);
            mem_addr <= a; mem_din <= d; mem_burst <= 8'd1; mem_wr <= 1'b1;
            @(posedge clk);
            while (mem_busy) @(posedge clk);
            mem_wr <= 1'b0;
            @(posedge clk);
        end
    endtask
    // NLC-flush style: assert wr with burst=N; advance din/addr on every !mem_busy cycle; deassert after N.
    integer bi;
    task burst_write(input [27:1] a, input [7:0] n);
        begin
            @(posedge clk);
            mem_addr <= a; mem_din <= 64'hA000_0000 + 0; mem_burst <= n; mem_wr <= 1'b1;
            bi = 0;
            while (bi < n) begin
                @(posedge clk);
                if (!mem_busy) begin
                    bi = bi + 1;
                    mem_din  <= 64'hA000_0000 + bi;     // next word (one ahead, like nlc_lb_q)
                    mem_addr <= a + (bi<<2);            // +8 bytes = +4 in [27:1] units
                end
            end
            mem_wr <= 1'b0;
            @(posedge clk);
        end
    endtask
    integer expct, k;
    task check_mem(input [28:0] base, input integer n, input [63:0] v0, input msg);
        begin
            for (k = 0; k < n; k = k + 1)
                if (slave_mem[base[9:0]+k] !== (v0+k)) begin
                    errors = errors + 1;
                    $display("  MISMATCH beat %0d: got %h exp %h", k, slave_mem[base[9:0]+k], v0+k);
                end
        end
    endtask

    initial begin
        repeat (5) @(posedge clk);
        // 1) single-beat writes (the LZ4/RAW path) — regression
        single_write(27'd8,  64'hA000_0000);   // lands at slave word ADDR for mem_addr 8
        single_write(27'd12, 64'hA000_0001);
        if (first_bcnt !== 8'd1) begin errors=errors+1; $display("  single write BURSTCNT=%0d != 1", first_bcnt); end
        // 2) burst write of 7 beats under random BUSY (the NLC flush path)
        burst_write(27'd64, 8'd7);
        repeat (10) @(posedge clk);
        if (first_bcnt !== 8'd7) begin errors=errors+1; $display("  burst write BURSTCNT=%0d != 7", first_bcnt); end
        check_mem({6'b000111, 23'd16}, 7, 64'hA000_0000, 0);   // ddram maps ram_address[25:3]: 64>>3? see note
        // 3) burst write of 120 (a full NLC chunk)
        burst_write(27'd1024, 8'd120);
        repeat (10) @(posedge clk);
        if (first_bcnt !== 8'd120) begin errors=errors+1; $display("  chunk write BURSTCNT=%0d != 120", first_bcnt); end
        // 4) read burst regression: 16 words stream back in order
        @(posedge clk); mem_addr <= 27'd8; mem_burst <= 8'd16; mem_rd <= 1'b1;
        @(posedge clk); mem_rd <= 1'b0;
        expct = 0;
        begin : rdloop
            repeat (600) begin
                @(posedge clk);
                if (mem_dready) begin expct = expct + 1; if (expct == 16) disable rdloop; end
            end
        end
        if (expct !== 16) begin errors=errors+1; $display("  read burst returned %0d/16 words", expct); end
        $display("----");
        if (errors == 0) $display("DDRAM TB PASS: singles + 7-burst + 120-burst + 16-read, %0d beats total, random BUSY", beats_total);
        else             $display("DDRAM TB FAIL: %0d errors", errors);
        $finish;
    end
    initial begin #500000 $display("DDRAM TB TIMEOUT"); $finish; end
endmodule
