#!/bin/bash
# compare_nlc_modes.sh — the /46 prototyping measurement backbone.
# Runs each NLC display mode (+nlcmode=M) across configs and tabulates the ROCK-SOLID gate metrics vs a RAW
# reference (RAW = the byte-exact ground truth; it is mode-independent). A mode is "rock solid" only if, for every
# config: byte-exact settled frames == all, queue median is LOW (~RAW), frameskip is ARMED (~RAW), underrun==0,
# wedge==0. Usage: ./compare_nlc_modes.sh [modes...]   (default: 0 1 2)
set -u
cd "$(dirname "$0")"
BIN="$PWD/obj_dir/clean_disp"
[ -x "$BIN" ] || { echo "build first: ./build_sim.sh"; exit 1; }
MODES="${*:-0 1 2}"
OUT="/tmp/nlc_modes"; rm -rf "$OUT"; mkdir -p "$OUT"

# configs: name | codec-args | porches | markerdir | extra
P240="+hfp=9 +hs=28 +hbp=28 +vfp=3 +vs=3 +vbp=16"
P480I="+hfp=29 +hs=69 +hbp=117 +vfp=3 +vs=6 +vbp=34"
P480P="+hfp=16 +hs=96 +hbp=48 +vfp=10 +vs=2 +vbp=33"
run() { # $1=dir $2=codec $3..=args
  local d="$1"; shift; local c="$1"; shift
  mkdir -p "$d"; ( cd "$d" && rm -f frame_*.ppm && timeout 400 "$BIN" +codec=$c "$@" +debug=1 2>&1 )
}
# byte-exact settled frames: count mode-dir frame_2_* that 0-diff some ref-dir RAW frame_0_*; matched/total(excl bootstrap)
byteexact() { # $1=modedir $2=refdir
  python3 - "$1" "$2" <<'PY'
import sys,glob
md,rd=sys.argv[1],sys.argv[2]
def load(p):
    f=open(p,'rb'); f.readline();f.readline();f.readline(); return f.read()
raws=[load(x) for x in sorted(glob.glob(f"{rd}/frame_0_*.ppm"))]
tgt=sorted(glob.glob(f"{md}/frame_2_*.ppm"))
if not raws or not tgt: print("n/a"); sys.exit()
b=0; t=0
for i,fr in enumerate(tgt):
    if i==0: continue    # skip bootstrap frame
    t+=1; body=load(fr)
    if any(len(body)==len(r) and body==r for r in raws): b+=1
print(f"{b}/{t}")
PY
}
qmedian() { grep -oE "queue=[0-9]+" "$1" 2>/dev/null | awk -F= '{print $2}' | sort -n | awk '{a[NR]=$1} END{print NR?a[int(NR/2)]:"?"}'; }
metric()  { grep -oE "$2" "$1" 2>/dev/null | head -1; }
# distinct settled frame contents in the MOVING run — catches "frozen frame repeated forever"
# (the static byte-exact check is structurally blind to it; found the hard way in /47 P2.2)
uniqfr()  { md5sum "$1"/frame_2_*.ppm 2>/dev/null | awk '{print $1}' | sort -u | wc -l; }

printf "%-14s %-8s | %-9s %-6s %-9s %-9s %-8s %-6s %-7s\n" "config" "mode" "byteexact" "uniq" "q-median" "fskip" "underrun" "wedge" "decode"
printf -- "------------------------------------------------------------------------------------------\n"
for cfg in "240p-fast:320:240:0:/tmp/markers_240:12:$P240:" \
           "240p-cloop:320:240:0:/tmp/markers_240:12:$P240:+closedloop +emulms10=130" \
           "480i:720:480:2:/tmp/m480i:4:$P480I:" \
           "480p:640:480:0:/tmp/markers_480:3:$P480P:"; do
  IFS=':' read -r name W H IL MDIR CE POR EXTRA <<< "$cfg"
  # STATIC RAW ref (nmark=1 -> every frame == marker_000; clean byte-exact, no moving-marker alignment noise)
  run "$OUT/$name/ref" 0 +w=$W +h=$H +interlace=$IL +frames=12 +nmark=1 +mdir=$MDIR +cepix=$CE $POR $EXTRA >"$OUT/${name}_raw.log" 2>&1
  for M in $MODES; do
    # (a) STATIC run -> byte-exact correctness (frame_2 vs frame_0, both marker_000)
    run "$OUT/$name/m${M}" 2 +w=$W +h=$H +interlace=$IL +frames=12 +nmark=1 +mdir=$MDIR +cepix=$CE +nlcmode=$M $POR $EXTRA >"$OUT/${name}_m${M}_static.log" 2>&1
    be=$(byteexact "$OUT/$name/m${M}" "$OUT/$name/ref")
    # (b) MOVING run -> realistic streaming behaviour: queue / frameskip / underrun / wedge / decode-time
    log="$OUT/${name}_m${M}.log"
    run "$OUT/$name/m${M}mv" 2 +w=$W +h=$H +interlace=$IL +frames=12 +nmark=8 +mdir=$MDIR +cepix=$CE +nlcmode=$M $POR $EXTRA >"$log" 2>&1
    qm=$(qmedian "$log")
    uq=$(uniqfr "$OUT/$name/m${M}mv")
    fs=$(metric "$log" "fskip_pulses=[0-9]+" | cut -d= -f2)
    un=$(metric "$log" "underrun=[0-9]+" | cut -d= -f2)
    wd=$(metric "$log" "WEDGED=[0-9]+" | cut -d= -f2)
    dt=$(grep -oE "avg=[0-9]+\.[0-9]+ ms" "$log" 2>/dev/null | head -1 | sed 's/avg=//')
    printf "%-14s m%-7s | %-9s %-6s %-9s %-9s %-8s %-6s %-7s\n" "$name" "$M" "${be:-?}" "${uq:-?}" "${qm:-?}" "${fs:-?}" "${un:-?}" "${wd:-?}" "${dt:-?}"
  done
done
echo ""
echo "GATES (rock-solid): byteexact = all settled; q-median LOW like RAW; fskip ARMED (~RAW); underrun=0; wedge=0."
echo "RAW reference metrics (the target) per config:"
for name in 240p-fast 240p-cloop 480i 480p; do
  l="$OUT/${name}_raw.log"
  printf "  %-12s q-median=%-7s fskip=%-8s underrun=%-3s wedge=%s\n" "$name" "$(qmedian "$l")" "$(grep -oE 'fskip_pulses=[0-9]+' "$l"|cut -d= -f2)" "$(grep -oE 'underrun=[0-9]+' "$l"|head -1|cut -d= -f2)" "$(grep -oE 'WEDGED=[0-9]+' "$l"|cut -d= -f2)"
done
