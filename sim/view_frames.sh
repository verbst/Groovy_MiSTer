#!/bin/bash
# view_frames.sh — make the sim's dumped frames viewable in Windows (we're in WSL, /mnt/c is the C: drive).
# Converts a run's .ppm frames to PNG + a contact sheet + an animated GIF in /mnt/c/temp/sim_out/<name>/.
#   view_frames.sh <name> <ppm_glob_dir> <ppm_prefix>      e.g. view_frames.sh raw320 /tmp/cleanrun frame_0
set -e
NAME="${1:?name}"; SRC="${2:?ppm dir}"; PREb="${3:?ppm prefix, e.g. frame_0}"
OUT="/mnt/c/temp/sim_out/$NAME"
mkdir -p "$OUT"
shopt -s nullglob
files=("$SRC/${PREb}_"*.ppm)
[ ${#files[@]} -gt 0 ] || { echo "no frames matching $SRC/${PREb}_*.ppm"; exit 1; }
echo "converting ${#files[@]} frames -> $OUT"
i=0
for f in "${files[@]}"; do
  printf -v n "%03d" "$i"
  ffmpeg -y -loglevel error -i "$f" "$OUT/$n.png"
  i=$((i+1))
done
# contact sheet: 1 row if few frames, else 4 cols
cols=4; [ ${#files[@]} -lt 4 ] && cols=${#files[@]}
ffmpeg -y -loglevel error -framerate 1 -i "$OUT/%03d.png" -vf "scale=320:-1,tile=${cols}x$(( (${#files[@]}+cols-1)/cols ))" "$OUT/_sheet.png" 2>/dev/null || true
# animated GIF (2 fps so you can see frame-to-frame changes/flicker)
ffmpeg -y -loglevel error -framerate 2 -i "$OUT/%03d.png" -vf "scale=480:-1" "$OUT/_anim.gif" 2>/dev/null || true
echo "done -> $OUT  (open in Windows: C:\\temp\\sim_out\\$NAME)"
ls -1 "$OUT"
