#!/bin/bash
# run_sta.sh — /47 P-side A-clock experiment: compile the standalone NLC decoder with the clock
# constrained at each target MHz and report worst setup slack. Usage: ./run_sta.sh [mhz ...]
# (default: 120 150). Results land in sta_results.txt; full logs in sta_<mhz>.log.
set -e
cd "$(dirname "$0")"
Q="${QUARTUS_BIN:-$HOME/intelFPGA_lite/17.0/quartus/bin}"
MHZS="${*:-120 150}"
: > sta_results.txt
for M in $MHZS; do
  P=$(python3 -c "print(f'{1000.0/$M:.3f}')")
  printf 'create_clock -name clk -period %s [get_ports clk]\n' "$P" > aclk_sta.sdc
  echo "=== $M MHz (period ${P} ns) ===" | tee -a sta_results.txt
  "$Q/quartus_sh" --flow compile aclk_sta > "sta_${M}.log" 2>&1 || { echo "COMPILE FAILED (see sta_${M}.log)" | tee -a sta_results.txt; continue; }
  # worst setup slack from the STA report
  grep -A8 "Slow 1100mV 85C Model Setup Summary" output_files/aclk_sta.sta.rpt | head -10 | tee -a sta_results.txt
done
echo "---- done; see sta_results.txt"
