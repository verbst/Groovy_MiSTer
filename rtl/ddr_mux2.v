//
// ddr_mux2.v: 2-master transaction-atomic arbiter for ddram's mem_* port (NLC mode 2).
//
// M0 = the Groovy blit FSM (legacy, and it has priority): its port is bit-transparent whenever
//      it has anything in flight. The grant only moves when M0 is provably quiescent, so the
//      FSM's pulse and level DDR idioms are preserved untouched, by construction.
// M1 = the NLC decode engine (explicit req/gnt handshake; drives the port only while gnt=1,
//      holds m1_req through a whole transaction, drops it between transactions).
//
// Grant rules, derived from the FSM's request idioms (all sites audited):
//   * every ddr_data_req (read) is asserted exactly one cycle after a same-state `!ddr_busy`
//     check, and is dropped once the FSM observes busy=1 ("request latched");
//   * every ddr_data_write is level-held until the FSM observes `!ddr_busy` acceptance.
// Therefore:
//   * G_M0 -> G_PEND only when M0 is idle THIS cycle (!m0_rd && !m0_wr && !mem_busy) and M1
//     wants the bus.
//   * G_PEND (one cycle or more): m0_busy is forced high, so no FSM state can take a new
//     `!ddr_busy` decision. A request decided in the last G_M0 cycle lands here: reads pass
//     through, because the ddram edge-detect must not miss the pulse, and cancel the switch;
//     writes are blocked, being level-held upstream so a blocked write just waits one cycle,
//     and also cancel the switch. If M0 stays quiet and the bus is free, grant M1.
//   * G_M1: M0 sees busy=1, so writes hold and reads cannot be issued, the FSM never having
//     seen !busy.
//   * G_DRAIN: entered the moment M1 drops m1_req. m1_gnt falls combinationally with m1_req so
//     it is never stale, a new m1_req is ignored here (one transaction per grant: M1 must win a
//     fresh arbitration round through G_M0 and G_PEND, which makes M0's priority structural),
//     and the grant returns to M0 once the bus has drained.
// A write burst can never be split: entering G_PEND requires !m0_wr, and ddram consumes burst
// continuation beats only from the owner that keeps mem_wr asserted through the last beat.
//
// M1 contract: hold m1_req through the whole transaction (all read beats received, or all write
// beats accepted), drop it after; issue rd/wr only while m1_gnt=1.
//
module ddr_mux2
(
        input         clk,

        // master 0: the blit FSM (transparent legacy port, priority)
        input  [27:1] m0_addr,
        input  [63:0] m0_din,
        input         m0_rd,
        input  [7:0]  m0_burst,
        input         m0_wr,
        output        m0_busy,
        output        m0_dready,

        // master 1: the NLC engine (req/gnt)
        input         m1_req,
        output        m1_gnt,
        input  [27:1] m1_addr,
        input  [63:0] m1_din,
        input         m1_rd,
        input  [7:0]  m1_burst,
        input         m1_wr,
        output        m1_busy,
        output        m1_dready,

        // downstream: ddram's mem_* port (mem_dout fans out to both masters directly)
        output [27:1] mem_addr,
        output [63:0] mem_din,
        output        mem_rd,
        output [7:0]  mem_burst,
        output        mem_wr,
        input         mem_busy,
        input         mem_dready,

        output [1:0]  dbg_grant          // telemetry: current grant state
);

localparam G_M0 = 2'd0, G_PEND = 2'd1, G_M1 = 2'd2, G_DRAIN = 2'd3;
reg [1:0] g = G_M0;
assign dbg_grant = g;

always @(posedge clk) begin
  case (g)
    G_M0:    if (m1_req && !m0_rd && !m0_wr && !mem_busy) g <= G_PEND;
    G_PEND:  if (m0_rd || m0_wr || !m1_req) g <= G_M0;   // M0 woke (or M1 gave up) -> cancel
             else if (!mem_busy)            g <= G_M1;   // still quiet -> grant M1
    G_M1:    if (!m1_req) g <= G_DRAIN;                  // transaction over -> re-arbitrate from scratch
    G_DRAIN: if (!m1_rd && !m1_wr && !mem_busy) g <= G_M0;
    default: g <= G_M0;
  endcase
end

// request path: M1 owns it in G_M1 and G_DRAIN (residual beats); M0 owns it in G_M0 and
// G_PEND (reads must pass in PEND; writes are blocked there, being level-held upstream)
wire m1_owns = (g == G_M1) || (g == G_DRAIN);
assign mem_addr  = m1_owns ? m1_addr  : m0_addr;
assign mem_din   = m1_owns ? m1_din   : m0_din;
assign mem_burst = m1_owns ? m1_burst : m0_burst;
assign mem_rd    = m1_owns ? m1_rd    : m0_rd;
assign mem_wr    = m1_owns ? m1_wr    : (g == G_M0) ? m0_wr : 1'b0;

// master views
assign m0_busy   = (g == G_M0) ? mem_busy : 1'b1;
assign m0_dready = !m1_owns ? mem_dready : 1'b0;      // beats of an M0 read issued in G_PEND drain after the cancel
assign m1_busy   = m1_owns ? mem_busy : 1'b1;
assign m1_dready = m1_owns ? mem_dready : 1'b0;
assign m1_gnt    = (g == G_M1) && m1_req;             // falls WITH req: a new request can never see a stale grant

// synthesis translate_off
// invariant: M0 must never issue a read while granted away. Every FSM read follows a !busy
// observation, which G_PEND/G_M1 make impossible. If this ever fires, an unguarded request
// site slipped in and its pulse was lost (deadlock upstream).
always @(posedge clk) if (m1_owns && m0_rd) $display("[DDRMUX2-VIOLATION] m0_rd while granted to M1 at %0t", $time);
// synthesis translate_on

endmodule
