#!/bin/bash
# quartus_seed_sweep.sh — Plan §E RBF refit for the idle-timeout CONF_STR change.
#
# The Groovy design sits at ~100% block RAM, so closing timing is a placement lottery. This sweeps
# the Fitter SEED and keeps the best-timing result. Analysis & Synthesis is seed-independent, so we
# run quartus_map ONCE, then quartus_fit --seed=N -> quartus_sta per seed (the parallelizable part).
#
# PASS = no negative worst-case slack (setup AND hold, all clocks, all STA corners). The historically
# tight path here is pll_hdmi hold (see build_output/seed_sweep_57.log). Among passing seeds we keep
# the largest worst-case setup slack, write it into Groovy.qsf, and assemble the .rbf.
#
# Usage:  tools/quartus_seed_sweep.sh [seed ...]      (default seed set below; cap 32 per plan)
# Builds IN-PLACE: output_files/, db/, incremental_db/ are .gitignored, so git stays clean.
# Logs go to .notes/, not build_output/ - that directory is the shipped kit (rbf + HPS binary) and
# nothing else. Override with LOG=<path>.
set -u
export PATH="${QUARTUS_BIN:-$HOME/intelFPGA_lite/17.0/quartus/bin}:$PATH"
cd "$(dirname "$0")/.."                      # repo root (Groovy.qpf lives here)
REV=Groovy
SEEDS=("$@"); [ ${#SEEDS[@]} -eq 0 ] && SEEDS=(3 1 2 4 5 6 7 8)   # try the current pin (3) first
[ ${#SEEDS[@]} -gt 32 ] && { echo "cap is 32 seeds"; exit 2; }
LOG="${LOG:-.notes/seed_sweep.log}"   # build_output/ holds deployables only; build logs live in .notes/
: > "$LOG"
say(){ echo "$*" | tee -a "$LOG"; }

say "=== seed sweep start $(date '+%F %T')  seeds: ${SEEDS[*]} ==="
say "--- quartus_map (once; seed-independent) ---"
quartus_map "$REV" >> "$LOG" 2>&1 || { say "MAP FAILED — check $LOG"; exit 1; }

best_seed=""; best_slack=""
for s in "${SEEDS[@]}"; do
  say "--- seed $s: fit $(date '+%T') ---"
  quartus_fit "$REV" --seed="$s" >> "$LOG" 2>&1 || { say "seed $s: FIT FAILED (fit/routing)"; continue; }
  quartus_sta "$REV" >> "$LOG" 2>&1 || { say "seed $s: STA FAILED"; continue; }
  RPT=output_files/${REV}.sta.rpt
  # worst-case slacks across all reported corners; any negative = timing not closed
  worst=$(grep -iE "Worst-case (Setup|Hold|Recovery|Removal) Slack" -A2 "$RPT" 2>/dev/null \
          | grep -oE "[-]?[0-9]+\.[0-9]+" | sort -n | head -1)
  neg=$(grep -iE "Worst-case (Setup|Hold|Recovery|Removal) Slack" -A2 "$RPT" 2>/dev/null \
          | grep -oE "[-][0-9]+\.[0-9]+" | head -1)
  if [ -n "$neg" ]; then
    say "seed $s: FAIL  (worst negative slack $neg)"
  else
    say "seed $s: PASS  (worst-case slack ${worst:-?})"
    if [ -z "$best_slack" ] || awk "BEGIN{exit !(${worst:-0} > ${best_slack:-0})}"; then
      best_slack="$worst"; best_seed="$s"
      cp -f output_files/${REV}.sof "output_files/${REV}_seed${s}.sof" 2>/dev/null || true
    fi
    # early-out: comfortable margin -> stop sweeping. SWEEP_ALL=1 evaluates every seed instead
    # and keeps the largest slack, which is what you want when the design has just changed.
    if [ "${SWEEP_ALL:-0}" != "1" ]; then
      awk "BEGIN{exit !(${worst:-0} >= 0.10)}" && { say "seed $s clears +0.10 ns — stopping early"; break; }
    fi
  fi
done

if [ -z "$best_seed" ]; then
  say "=== NO PASSING SEED in ${SEEDS[*]} — take the plan R4/E fallback (MiSTer.ini key or HPS injection, no rbf) ==="
  exit 3
fi

say "=== winner: seed $best_seed (worst-case slack $best_slack) — assembling .rbf ==="
# NB: quartus_fit --seed PERSISTS 'set_global_assignment -name SEED N' into Groovy.qsf itself, so
# the winner ends up pinned as a one-line qsf change (review the diff; this script adds no other edit).
quartus_fit "$REV" --seed="$best_seed" >> "$LOG" 2>&1
quartus_sta "$REV" >> "$LOG" 2>&1
quartus_asm "$REV" >> "$LOG" 2>&1 || { say "ASM FAILED"; exit 1; }
# .sof -> .rbf (raw, for MiSTer). cpf writes output_files/Groovy.rbf
quartus_cpf -c -o bitstream_compression=on output_files/${REV}.sof output_files/${REV}.rbf >> "$LOG" 2>&1 \
  || quartus_cpf -c output_files/${REV}.sof output_files/${REV}.rbf >> "$LOG" 2>&1
if [ -f output_files/${REV}.rbf ]; then
  say "=== DONE seed $best_seed  rbf=$(md5sum output_files/${REV}.rbf | cut -d' ' -f1) ==="
  say "Groovy.qsf now shows SEED $best_seed (persisted by quartus_fit --seed; a 1-line diff to review)."
  say "Validate on hardware, then copy output_files/${REV}.rbf into the kit."
else
  say "=== rbf not produced — check $LOG ==="; exit 1
fi
