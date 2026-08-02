#!/bin/bash
# run_reconnect.sh — reproduce and then validate the fix for the setAutoReconnect() reconnect hang
# (UPSTREAM_REPORT_groovymister_reconnect_state.md). Builds the real client twice — once from the
# PRISTINE api at git HEAD (the buggy lib) and once from the WORKING TREE (the fix) — and runs the
# fake_core + recon_driver harness against each, for both host patterns (keephigh, restartlow).
#
# Expected:
#   BEFORE (pristine):  keephigh -> WaitSync hangs (driver killed by timeout);  restartlow -> reconnect loop (reconnects >> 1)
#   AFTER  (fixed):     keephigh -> no hang, one reconnect;                     restartlow -> recovers, one reconnect
#
# Usage: run_reconnect.sh
set -u
ROOT="$(cd "$(dirname "$0")/../.." && pwd)"
API="$ROOT/api"
HERE="$ROOT/sim/reconnect"
OUT="$(mktemp -d /tmp/recon_run.XXXXXX)"
PRE="$OUT/pristine_api"
PORT=32200
mkdir -p "$PRE"

cleanup() { [ -n "${FAKE_PID:-}" ] && kill "$FAKE_PID" 2>/dev/null; }
trap cleanup EXIT

echo "=== extract PRISTINE api (git HEAD) ==="
git -C "$ROOT" show HEAD:api/groovymister.cpp > "$PRE/groovymister.cpp" || { echo "git show cpp failed"; exit 1; }
git -C "$ROOT" show HEAD:api/groovymister.h  > "$PRE/groovymister.h"  || { echo "git show h failed"; exit 1; }
if diff -q "$PRE/groovymister.cpp" "$API/groovymister.cpp" >/dev/null; then
  echo "WARNING: working tree groovymister.cpp is identical to HEAD — the fix is not applied/uncommitted-vs-committed check is moot."
fi

echo "=== build fake_core + recon_driver (BEFORE=pristine, AFTER=fixed) ==="
g++ -O2 -o "$OUT/fake_core" "$HERE/fake_core.cpp" || { echo "fake_core build failed"; exit 1; }
# BEFORE: pristine groovymister.{cpp,h} (-I $PRE first), current nlc/lz4 (unchanged)
g++ -O2 -o "$OUT/recon_driver_before" "$HERE/recon_driver.cpp" \
    "$PRE/groovymister.cpp" "$API/nlc_codec.cpp" "$API/lz4/lz4.c" "$API/lz4/lz4hc.c" \
    -I"$PRE" -I"$API" -I"$API/lz4" -lpthread || { echo "before-driver build failed"; exit 1; }
# AFTER: working-tree (fixed) api
g++ -O2 -o "$OUT/recon_driver_after" "$HERE/recon_driver.cpp" \
    "$API/groovymister.cpp" "$API/nlc_codec.cpp" "$API/lz4/lz4.c" "$API/lz4/lz4hc.c" \
    -I"$API" -I"$API/lz4" -lpthread || { echo "after-driver build failed"; exit 1; }
echo "builds OK"

# run_case <label> <driver-bin> <mode> <timeout_s> -> writes $OUT/<label>.log, sets RC / MAXWAIT / RECON
run_case() {
  local label="$1" drv="$2" mode="$3" tmo="$4"
  echo
  echo "----- $label : mode=$mode timeout=${tmo}s -----"
  # hole 2.5s (~156 frames at 16ms pacing); nafter=320 so the frame budget spans the hole AND leaves
  # ~100 post-reconnect frames to observe the hang/recovery (60 healthy + ~156 hole + ~100 post).
  "$OUT/fake_core" "$PORT" 60 2500 >"$OUT/${label}.fake.log" 2>&1 &
  FAKE_PID=$!
  sleep 0.6
  timeout "$tmo" "$drv" 127.0.0.1 "$PORT" "$mode" 60 320 >"$OUT/${label}.log" 2>&1
  RC=$?
  kill "$FAKE_PID" 2>/dev/null; wait "$FAKE_PID" 2>/dev/null; FAKE_PID=""
  local done_line; done_line="$(grep '\[driver\] DONE' "$OUT/${label}.log" | tail -1)"
  MAXWAIT="$(sed -n 's/.*maxWaitMs=\([0-9.]*\).*/\1/p' <<<"$done_line")"
  RECON="$(sed -n 's/.*reconnects=\([0-9]*\).*/\1/p' <<<"$done_line")"
  [ -z "$MAXWAIT" ] && MAXWAIT="n/a"
  [ -z "$RECON" ]   && RECON="n/a"
  echo "rc=$RC maxWaitMs=$MAXWAIT reconnects=$RECON"
  grep -E '\[driver\] (start|DONE)|BLACK-HOLE|reconnect epoch|WaitSync=[0-9]{3,}' "$OUT/${label}.log" | sed 's/^/    /' | tail -8
}

gt() { awk "BEGIN{exit !($1 > $2)}"; }   # $1 > $2 for floats

PASS=1

# --- BEFORE (pristine, buggy) ---
run_case before_keephigh   "$OUT/recon_driver_before" keephigh   20
if [ "$RC" -eq 124 ] || { [ "$MAXWAIT" != "n/a" ] && gt "$MAXWAIT" 1000; }; then
  BK="REPRODUCED (hang: rc=$RC maxWaitMs=$MAXWAIT)"; else BK="NOT reproduced (rc=$RC maxWaitMs=$MAXWAIT)"; PASS=0; fi

run_case before_restartlow "$OUT/recon_driver_before" restartlow 40
if [ "$RECON" != "n/a" ] && [ "$RECON" -gt 1 ] 2>/dev/null; then
  BR="REPRODUCED (reconnect loop: reconnects=$RECON)"; else BR="NOT reproduced (reconnects=$RECON)"; PASS=0; fi

# --- AFTER (fixed) ---
run_case after_keephigh    "$OUT/recon_driver_after"  keephigh   40
if [ "$RC" -eq 0 ] && [ "$MAXWAIT" != "n/a" ] && ! gt "$MAXWAIT" 300 && [ "$RECON" -ge 1 ] 2>/dev/null; then
  AK="FIXED (no hang: maxWaitMs=$MAXWAIT reconnects=$RECON)"; else AK="FAIL (rc=$RC maxWaitMs=$MAXWAIT reconnects=$RECON)"; PASS=0; fi

run_case after_restartlow  "$OUT/recon_driver_after"  restartlow 40
if [ "$RC" -eq 0 ] && [ "$MAXWAIT" != "n/a" ] && ! gt "$MAXWAIT" 300 && [ "$RECON" -ge 1 ] 2>/dev/null && [ "$RECON" -le 2 ] 2>/dev/null; then
  AR="FIXED (recovered: maxWaitMs=$MAXWAIT reconnects=$RECON)"; else AR="FAIL (rc=$RC maxWaitMs=$MAXWAIT reconnects=$RECON)"; PASS=0; fi

echo
echo "================= SUMMARY ================="
printf "  BEFORE keephigh   : %s\n" "$BK"
printf "  BEFORE restartlow : %s\n" "$BR"
printf "  AFTER  keephigh   : %s\n" "$AK"
printf "  AFTER  restartlow : %s\n" "$AR"
echo "  logs: $OUT"
echo "==========================================="
if [ "$PASS" -eq 1 ]; then echo "OVERALL: PASS (bug reproduced on pristine, fixed on working tree)"; exit 0; fi
echo "OVERALL: FAIL"; exit 1
