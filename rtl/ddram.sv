//
// ddram.v
// Copyright (c) 2019 Sorgelig
//
//
// This source file is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published
// by the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// This source file is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.
//
// ------------------------------------------
//
// /55 WEDGE HARDENING (read-beat liveness):
//  * Avalon readdatavalid (DDRAM_DOUT_READY) is INDEPENDENT of waitrequest
//    (DDRAM_BUSY). The historical template only sampled DOUT_READY inside the
//    !DDRAM_BUSY block, so a beat arriving during busy was silently dropped and
//    the edge-latched read_req never cleared -> mem_busy stuck high forever ->
//    both ddr_mux2 masters (blit FSM + NLC engine) frozen = the /55 permanent
//    red-screen wedge signature. Read beats are now consumed UNCONDITIONALLY.
//  * state-000 arbitration used to require (mem_wr && !read_req) vs
//    (read_req && !mem_wr): both pending = neither served = deadlock by
//    construction. Reads (edge-latched, master already committed and counting
//    beats) now win; writes are level-held upstream and simply wait.
//  * read watchdog: if an issued read stops receiving beats for 2^16 cycles
//    (~0.8ms @82MHz, >>100x any legit latency), the remaining beats are
//    synthesized (data 0xDEAD...) so the masters' beat counters always
//    terminate. dbg_timeout_cnt saturates at 15 for telemetry.
//

module ddram
(
        input         DDRAM_CLK,
        input         DDRAM_BUSY,
        output  [7:0] DDRAM_BURSTCNT,
        output [28:0] DDRAM_ADDR,
        input  [63:0] DDRAM_DOUT,
        input         DDRAM_DOUT_READY,
        output        DDRAM_RD,
        output [63:0] DDRAM_DIN,
        output  [7:0] DDRAM_BE,
        output        DDRAM_WE,

        input  [27:1] mem_addr,
        output [63:0] mem_dout,
        input  [63:0] mem_din,
        input         mem_rd,
        input  [7:0]  mem_burst,
        input         mem_wr,
        output        mem_busy,
        output        mem_dready,

        // /55 telemetry
        output [2:0]  dbg_state,        // {read_req, state[1:0]}
        output [3:0]  dbg_timeout_cnt   // saturating count of read-watchdog fires
);

reg  [7:0] ram_burst = 8'd1;
reg [63:0] ram_out;
reg [63:0] ram_data;
reg [27:1] ram_address;

reg        ram_read = 0;
reg        ram_write = 0;
reg  [7:0] ram_be = 8'hFF;
reg  [7:0] ram_index = 0;

reg data_ready = 0;
reg read_req = 0;

reg [2:0] state = 3'b000;

// /55 read watchdog
reg [16:0] rd_wd = 0;
reg  [3:0] timeout_cnt = 0;
wire       rd_wd_fired = rd_wd[16];

always @(posedge DDRAM_CLK) begin

        reg old_rd;

        old_rd <= mem_rd;

        if (mem_rd && !old_rd) read_req  <= 1'b1;

        data_ready <= 1'b0;

        // /55: read beats consumed regardless of DDRAM_BUSY (Avalon: readdatavalid
        // is independent of waitrequest). Missing beats are synthesized when the
        // watchdog fires so a read transaction ALWAYS terminates.
        if (state == 3'b010) begin
                rd_wd <= rd_wd + 17'd1;
                if (DDRAM_DOUT_READY || rd_wd_fired) begin
                        // real beat re-arms the window; a synthesized beat keeps it
                        // saturated so the rest of a dead burst drains 1 beat/cycle
                        rd_wd                     <= DDRAM_DOUT_READY ? 17'd0 : rd_wd;
                        data_ready                <= 1'b1;
                        ram_out                   <= DDRAM_DOUT_READY ? DDRAM_DOUT : 64'hDEADDEADDEADDEAD;
                        if (rd_wd_fired && timeout_cnt != 4'hF) timeout_cnt <= timeout_cnt + 4'd1;
                        if (ram_index == ram_burst) begin
                          state                   <= 3'b000;
                          read_req                <= 1'b0;
                        end else begin
                          ram_index               <= ram_index + 8'd1;
                        end
                end
        end

        if(!DDRAM_BUSY) begin
                ram_write <= 1'b0;
                ram_read  <= 1'b0;

                case(state)
                        3'b000:
                        begin
                          // /55: reads first — read_req is edge-latched (the master is
                          // already counting beats); a level-held write just waits.
                          if (read_req) begin
                            ram_address   <= mem_addr;
                            ram_read      <= 1'b1;
                            ram_burst     <= (mem_burst == 8'd0) ? 8'd1 : mem_burst;
                            ram_index     <= 8'd1;
                            rd_wd         <= 17'd0;
                            state         <= 3'b010;
                          end
                          else if (mem_wr) begin
                            ram_data      <= mem_din;
                            ram_address   <= mem_addr;
                            ram_write     <= 1'b1;
                            // STAGE 1 BURST WRITES: latch the burst length for writes too (was hardwired 1).
                            // mem_burst==0 guards a stale/zero burst. Single-beat writers (LZ4/RAW present
                            // mem_burst=1) behave byte-identically to before.
                            ram_burst     <= (mem_burst == 8'd0) ? 8'd1 : mem_burst;
                            if (mem_burst > 8'd1) begin
                              ram_index   <= 8'd2;              // word 2 of the burst is consumed next
                              state       <= 3'b001;
                            end
                          end
                        end
                        3'b001:                // write-burst continuation: stream one beat per non-busy cycle.
                        begin                  // the master (Groovy) advances mem_din on the same !mem_busy
                                               // cycles, one word ahead of ram_data (a posted pipeline).
                          ram_data      <= mem_din;
                          ram_write     <= 1'b1;
                          if (ram_index == ram_burst) state <= 3'b000;
                          else                        ram_index <= ram_index + 8'd1;
                        end
                        default: ;             // 010 handled above (busy-independent)
                endcase
        end


end

assign DDRAM_BURSTCNT = ram_burst;   // STAGE 1: writes present their latched burst too (was WE ? 1 : ram_burst)
assign DDRAM_BE       = ram_read ? 8'hFF : ram_be;
// /51 RELOCATION: back to the standard MiSTer core DDR window at 0x30000000. The 0x1C000000
// location (448MB, "Faster!") sits INSIDE Linux-managed RAM (mem=511M on stock MiSTer) — the
// kernel hands those physical pages to processes/page-cache, and the FPGA + the HPS app
// scribble them (and get scribbled): proven by the /49-/51 CRC fingerprints (foreign NLC/LZ4
// stream bytes inside process heaps; FB rows zeroed by kernel pages). 0x30000000 is outside
// System RAM (ends 0x1FEFFFFF) on every stock install. Its historical slowness was scaler-
// traffic bank contention — measured again post-move via the selftest pacing telemetry.
// MUST match groovy.cpp BASEADDR (deploy RBF + MiSTer_groovy together).
assign DDRAM_ADDR     = {4'b0011, ram_address[27:3]}; // RAM at 0x30000000
//assign DDRAM_ADDR     = {6'b000111, ram_address[25:3]}; // RAM at 0x1C000000 (collides with Linux RAM)
assign DDRAM_RD       = ram_read;
assign DDRAM_DIN      = ram_data;
assign DDRAM_WE       = ram_write;

assign mem_dout         = ram_out;
assign mem_dready       = data_ready;
assign mem_busy         = DDRAM_BUSY || read_req;

assign dbg_state       = {read_req, state[1:0]};
assign dbg_timeout_cnt = timeout_cnt;

endmodule
