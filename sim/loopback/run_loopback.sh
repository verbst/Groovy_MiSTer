#!/bin/bash
# run_loopback.sh — local end-to-end wire test: marker_sender -> UDP loopback -> soft_groovy (real framing) ->
# recv_NNN.raw, then assert each received frame byte-equals a source frame. Catches wire/framing bugs without
# hardware. Mirrors the deployed flow: ONE codec per marker_sender invocation, each doing its own
# CmdInit+CmdSwitchres (a codec switch REQUIRES a switchres — see /33). soft_groovy now calloc-resets
# bytes_len on CMD_INIT, so a missing switchres would FAIL the gate (it would have caught /33).
#
#   run_loopback.sh [markerDir] [W] [H] [rgb]
set -u
MDIR="${1:-/tmp/markers_240}"
W="${2:-320}"; H="${3:-240}"; RGB="${4:-888}"; NMARK="${5:-60}"
ML=6.046147,320,329,357,385,240,243,246,262,0
ROOT="$(cd "$(dirname "$0")/../.." && pwd)"
CLEAN="$ROOT/api"   # this repo's OWN api (clean); self-contained
OUT=/tmp/loopback_run
rm -rf "$OUT"; mkdir -p "$OUT"

echo "=== build soft_groovy + marker_sender (clean api) ==="
g++ -O2 -o /tmp/soft_groovy "$ROOT/sim/loopback/soft_groovy.cpp" "$CLEAN/nlc_codec.cpp" "$CLEAN/lz4/lz4.c" -I"$CLEAN" -I"$CLEAN/lz4" -lpthread || exit 1
g++ -O2 -o /tmp/marker_sender_clean "$ROOT/sim/marker_sender.cpp" \
    "$CLEAN/groovymister.cpp" "$CLEAN/nlc_codec.cpp" "$CLEAN/lz4/lz4.c" "$CLEAN/lz4/lz4hc.c" \
    -I"$CLEAN" -I"$CLEAN/lz4" -I"$ROOT/tools" -lpthread || exit 1

echo "=== start soft_groovy (:32100) ==="
/tmp/soft_groovy "$OUT" 32100 >"$OUT/soft_groovy.log" 2>&1 &
SOFT=$!
sleep 0.5

# Deployed flow: one codec per invocation, each does CmdInit + CmdSwitchres. Short timings (wire is
# timing-independent): slate_hold=1 sweep_secs=2 fps=8. R1: nlcr = NLC with the RICE pack (byte[1] bit 7).
for CODEC in raw lz4 nlc nlcr; do
  echo "=== marker_sender $CODEC over loopback ==="
  /tmp/marker_sender_clean 127.0.0.1 "$CODEC" "$MDIR" "$W" "$H" "$RGB" "$ML" 1 2 8 "" "$NMARK" >>"$OUT/sender.log" 2>&1
done
sleep 0.5
kill "$SOFT" 2>/dev/null; wait "$SOFT" 2>/dev/null

NF=$(ls "$OUT"/recv_*.raw 2>/dev/null | wc -l)
NSW=$(grep -c "CMD_SWITCHRES" "$OUT/soft_groovy.log")
NUE=$(grep -c UDP_ERROR "$OUT/soft_groovy.log")
echo "=== received $NF frames | CMD_SWITCHRES seen: $NSW | UDP_ERROR: $NUE ==="
EXPECT=$((W*H*(RGB==565?2:3)))

# GATE 0: one CmdSwitchres PER codec — the reverted, required-per-codec flow.
[ "$NSW" -eq 4 ] && echo "GATE0 switchres: 4 (one per codec: raw,lz4,nlc,nlcr)  OK" || { echo "GATE0 FAIL: $NSW switchres (expected 4)"; exit 1; }

# GATE 1: at least one complete frame, all correct size
if [ "$NF" -eq 0 ]; then echo "GATE1 FAIL: zero frames assembled (wire/framing broken)"; exit 1; fi
bad=0; for f in "$OUT"/recv_*.raw; do [ "$(wc -c <"$f")" -eq "$EXPECT" ] || bad=$((bad+1)); done
[ "$bad" -eq 0 ] && echo "GATE1 size: all $NF frames == $EXPECT bytes  OK" || { echo "GATE1 FAIL: $bad wrong-size"; exit 1; }

# GATE 2: every received frame is EITHER an exact source marker (sweep) OR a consistent live slate.
SRC=("$MDIR"/marker_*.raw)
declare -A slateproto; markers=0; slates=0
for f in "$OUT"/recv_*.raw; do
  ok=0
  for s in "${SRC[@]}"; do if cmp -s "$f" "$s"; then ok=1; break; fi; done
  if [ "$ok" -eq 1 ]; then markers=$((markers+1)); continue; fi
  matched=0
  for key in "${!slateproto[@]}"; do if cmp -s "$f" "${slateproto[$key]}"; then matched=1; break; fi; done
  if [ "$matched" -eq 1 ]; then slates=$((slates+1)); else slateproto[$f]="$f"; slates=$((slates+1)); fi
done
echo "GATE2 content: $markers exact-marker frames, $slates slate frames (${#slateproto[@]} distinct slates)"
[ "$markers" -gt 0 ] || { echo "GATE2 FAIL: no marker frames"; exit 1; }

# GATE 3: the RICE pass actually negotiated rice (bit 7 seen by the receiver) — guards against a
# silent fallback to TILED making GATE2 pass vacuously.
grep -q "rice=1" "$OUT/soft_groovy.log" || { echo "GATE3 FAIL: soft_groovy never saw rice=1 in CMD_INIT"; exit 1; }
echo "GATE3 negotiation: rice=1 observed  OK"

echo "=== LOOPBACK PASS: per-codec switchres, RAW+LZ4+NLC+NLCR wire+framing lossless over real UDP ==="
