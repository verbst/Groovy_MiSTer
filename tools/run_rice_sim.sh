#!/usr/bin/env bash
# run_rice_sim.sh — R2 gate: the parallel decoder (nlc_decode_ddr + nlc_plane_core) bit-exact
# against the C golden model for BOTH packs (TILED regression + RICE), incl. real-corpus
# 720x480 frames, pathological output back-pressure, and the cyc/px throughput gate.
#
#   tools/run_rice_sim.sh [gm_dump_dir]     # default tools/gm_dump (the /59 real corpus)
#
# Needs: iverilog, g++. No FPGA/hardware.
set -e
cd "$(dirname "$0")"
DUMP="${1:-gm_dump}"
mkdir -p /tmp/nlc_vec
g++ -O2 -o nlc_vectors nlc_vectors.cpp ../api/nlc_codec.cpp -I../api
pass=0; fail=0

RTL="../rtl/nlc_decode_ddr.v ../rtl/nlc_plane_core.v"

run_ddr() { # LABEL PACK W H NEAR COLOR TILE [frame] [stallN]
  local LABEL=$1 PACK=$2 W=$3 H=$4 NEAR=$5 COLOR=$6 TILE=$7 FRAME=${8:-} STALL=${9:-0}
  ./nlc_vectors --out /tmp/nlc_vec --w "$W" --h "$H" --near "$NEAR" --color "$COLOR" \
                --pack "$PACK" --tile "$TILE" ${FRAME:+--frame "$FRAME"} >/dev/null 2>&1
  iverilog -g2012 -I /tmp/nlc_vec -o /tmp/tb_ddr tb_nlc_ddr.v $RTL 2>/dev/null
  local r; r=$(vvp /tmp/tb_ddr ${STALL:++stallN=$STALL} 2>/dev/null | grep -oE "DDR TB (PASS|FAIL|TIMEOUT)" | head -1)
  printf "  %-46s %s\n" "$LABEL" "${r:-NO-VERDICT}"
  [ "$r" = "DDR TB PASS" ] && pass=$((pass+1)) || fail=$((fail+1))
}

echo "== R2: TILED regression (must stay green after the 128-bit reader) =="
for C in ycocg rgb; do for N in 0 1 2; do
  run_ddr "tiled 64x48 near=$N $C"        tiled 64 48 "$N" "$C" 16
done; done
run_ddr "tiled 33x7 odd-width"            tiled 33 7 0 ycocg 16
run_ddr "tiled 100x20 tile=32"            tiled 100 20 0 ycocg 32
run_ddr "tiled 16x16 tile=8 near2 rgb"    tiled 16 16 2 rgb 8

echo "== R2: RICE matrix =="
for C in ycocg rgb; do for N in 0 1 2; do
  run_ddr "rice  64x48 near=$N $C"        rice 64 48 "$N" "$C" 16
done; done
run_ddr "rice  16x2 tiny"                 rice 16 2 0 ycocg 16
run_ddr "rice  33x7 odd-width"            rice 33 7 0 ycocg 16
run_ddr "rice  100x20 tile=32"            rice 100 20 0 ycocg 32
run_ddr "rice  17x5 tile straddle"        rice 17 5 1 ycocg 16
run_ddr "rice  320x240 synth"             rice 320 240 0 ycocg 16
run_ddr "rice  320x240 synth stallN=7"    rice 320 240 0 ycocg 16 "" 7

# ESCAPE coverage: adaptive k at tile=16 can NEVER escape (q <= u_max*T/sum <= T = 16 < 20),
# so escapes need tile=32 + impulse content: flat-0 rows with one 255 spike per 32-tile ->
# row-0 residual sum=510 -> k=4 -> q=510>>4=31 >= 20 = GUARANTEED escape codes in the golden.
python3 -c "
import sys
W,H=64,48
d=bytearray(W*H*3)
for y in range(0,H,4):
    for x in range(16,W,32):
        i=(y*W+x)*3
        d[i]=d[i+1]=d[i+2]=255
open('/tmp/nlc_vec/impulse.raw','wb').write(d)"
run_ddr "rice  64x48 tile=32 ESCAPE codes"  rice 64 48 0 rgb 32 /tmp/nlc_vec/impulse.raw
run_ddr "rice  64x48 tile=32 ESCAPE ycocg"  rice 64 48 0 ycocg 32 /tmp/nlc_vec/impulse.raw
run_ddr "rice  64x48 tile=32 ESCAPE stall"  rice 64 48 0 rgb 32 /tmp/nlc_vec/impulse.raw 7

if [ -d "$DUMP" ]; then
  F0=$(ls "$DUMP"/frame_720x480_888_*.raw | head -1)
  F1=$(ls "$DUMP"/frame_720x480_888_*.raw | sed -n '60p')
  echo "== R2: REAL-CORPUS 720x480 (HW geometry) =="
  for N in 0 1; do
    run_ddr "rice  720x480 REAL near=$N"  rice 720 480 "$N" ycocg 16 "$F0"
  done
  run_ddr "rice  720x480 REAL#2 near=1"   rice 720 480 1 ycocg 16 "${F1:-$F0}"
  run_ddr "rice  720x480 REAL stallN=5"   rice 720 480 1 ycocg 16 "$F0" 5
  run_ddr "tiled 720x480 REAL regression" tiled 720 480 0 ycocg 16 "$F0"
else
  echo "!! real corpus dir '$DUMP' missing — 720-wide gates SKIPPED (do not ship without them)"
  fail=$((fail+1))
fi

echo "== R2: cyc/px throughput (rice, real frame, unconstrained drain) =="
if [ -d "$DUMP" ]; then
  ./nlc_vectors --out /tmp/nlc_vec --w 720 --h 480 --near 1 --color ycocg --pack rice --tile 16 --frame "$F0" >/dev/null 2>&1
  iverilog -g2012 -I /tmp/nlc_vec -o /tmp/tb_meas tb_nlc_meas.v $RTL 2>/dev/null
  vvp /tmp/tb_meas 2>/dev/null | grep -E "cycles|PAUSED|STALLED" | sed 's/^/  /'
fi

echo "== NEGATIVE check: rice bits on cfg_rice=0 must FAIL (TB discriminates) =="
./nlc_vectors --out /tmp/nlc_vec --w 64 --h 48 --near 0 --color ycocg --pack rice --tile 16 >/dev/null 2>&1
sed -i 's/^localparam VEC_PACK  = 2;.*$/localparam VEC_PACK  = 1;  \/\/ FORCED WRONG for the negative check/' /tmp/nlc_vec/params.vh
iverilog -g2012 -I /tmp/nlc_vec -o /tmp/tb_neg tb_nlc_ddr.v $RTL 2>/dev/null
NEG=$( (vvp /tmp/tb_neg 2>/dev/null || true) | grep -oE "DDR TB (PASS|FAIL|TIMEOUT)" | head -1)
if [ "$NEG" = "DDR TB PASS" ]; then echo "  NEGATIVE check FAILED (wrong pack decoded 'correctly'?!)"; fail=$((fail+1));
else echo "  negative check OK (wrong pack -> $NEG)"; pass=$((pass+1)); fi

echo "== $pass passed, $fail failed =="
[ "$fail" -eq 0 ]
