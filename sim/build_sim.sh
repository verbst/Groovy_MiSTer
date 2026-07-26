#!/bin/bash
# build_sim.sh — build the clean_disp_tb Verilator frame-dumping sim from THIS repo's clean RTL.
# Extracts the clean blit FSM from this repo's Groovy.sv, then Verilator-builds the display stack
# (real rtl/vga.v + fifo_vga.v + lz4.v + binary_to_bcd.v + the dcfifo/vga_overlay stubs).
set -e
cd "$(dirname "$0")"
ROOT="$(cd .. && pwd)"

echo "=== extract clean FSM from $ROOT/Groovy.sv ==="
./extract_clean_fsm.sh /tmp/clean_fsm_gen

echo "=== verilator build (fixed ddram) ==="
verilator --binary -j 0 --timing -Wno-fatal \
  -I/tmp/clean_fsm_gen \
  -o clean_disp \
  clean_disp_tb.v \
  "$ROOT/rtl/vga.v" "$ROOT/rtl/fifo_vga.v" "$ROOT/rtl/lz4.v" "$ROOT/rtl/binary_to_bcd.v" \
  "$ROOT/rtl/nlc_decode_ddr.v" "$ROOT/rtl/nlc_plane_core.v" "$ROOT/rtl/ddr_mux2.v" "$ROOT/rtl/nlc_engine.v" \
  "$ROOT/rtl/ddram.sv" \
  "$ROOT/tools/dcfifo_sim.v" "$ROOT/tools/vga_overlay_sim.v"

echo "=== built sim/obj_dir/clean_disp ==="

# /55 wedge regression variant: same stack with the PRE-fix ddram (sim/ddram_legacy.v).
# Under +rdvbusy_every=N this build must BUS-WEDGE (proves the mechanism); the fixed
# build above must survive the identical hazard with bit-identical frames. Skip with LEGACY55=0.
if [ "${LEGACY55:-1}" = "1" ]; then
echo "=== verilator build (legacy ddram, /55 wedge repro) ==="
verilator --binary -j 0 --timing -Wno-fatal -DDDRAM_LEGACY \
  -I/tmp/clean_fsm_gen \
  --Mdir obj_dir_legacy55 \
  -o clean_disp_legacy55 \
  clean_disp_tb.v \
  "$ROOT/rtl/vga.v" "$ROOT/rtl/fifo_vga.v" "$ROOT/rtl/lz4.v" "$ROOT/rtl/binary_to_bcd.v" \
  "$ROOT/rtl/nlc_decode_ddr.v" "$ROOT/rtl/nlc_plane_core.v" "$ROOT/rtl/ddr_mux2.v" "$ROOT/rtl/nlc_engine.v" \
  ddram_legacy.v \
  "$ROOT/tools/dcfifo_sim.v" "$ROOT/tools/vga_overlay_sim.v"
echo "=== built sim/obj_dir_legacy55/clean_disp_legacy55 ==="
fi
