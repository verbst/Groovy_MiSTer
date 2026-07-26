#!/usr/bin/env python3
# latency_report.py — announce -> displayed-content latency from a clean_disp run (P2.4 /47).
#
# Method: a RAW reference run (same markers) provides ground-truth content->marker labels:
# each RAW dumped frame is labeled with the nearest preceding [ANN] frame number (RAW displays
# its announce essentially immediately). Then, for the run under test, each dumped frame's
# content md5 is looked up in the RAW label table; the first display of marker N gives
# latency = CAP_cyc(first frame showing N) - ANN_cyc(N). Reported in ms (clk_sys 83.33MHz).
#
# usage: latency_report.py <raw_dir> <raw_log> <dut_dir> <dut_log> [clk_mhz]
import sys, os, glob, re, hashlib

def parse_log(p):
    ann, cap = {}, []          # ann[fr]=cyc ; cap=[(file,cyc)]
    for l in open(p, errors='ignore'):
        m = re.match(r'\[ANN\] fr=(\d+) cyc=(\d+)', l)
        if m: ann[int(m.group(1))] = int(m.group(2))
        m = re.match(r'\[CAP\] file=(\S+) cyc=(\d+)', l)
        if m: cap.append((m.group(1), int(m.group(2))))
    return ann, cap

def body_md5(path):
    with open(path, 'rb') as f:
        f.readline(); f.readline(); f.readline()
        return hashlib.md5(f.read()).hexdigest()

def main():
    raw_dir, raw_log, dut_dir, dut_log = sys.argv[1:5]
    clk = float(sys.argv[5]) if len(sys.argv) > 5 else 83.333
    r_ann, r_cap = parse_log(raw_log)
    # label RAW frames: nearest preceding announce
    label = {}
    for f, cyc in r_cap:
        prev = [fr for fr, ac in r_ann.items() if ac <= cyc]
        if not prev: continue
        fr = max(prev, key=lambda x: r_ann[x])
        p = os.path.join(raw_dir, f)
        if os.path.exists(p): label.setdefault(body_md5(p), fr)
    d_ann, d_cap = parse_log(dut_log)
    lat, seen = [], set()
    for f, cyc in sorted(d_cap, key=lambda x: x[1]):
        p = os.path.join(dut_dir, f)
        if not os.path.exists(p): continue
        fr = label.get(body_md5(p))
        if fr is None or fr in seen or fr not in d_ann: continue
        seen.add(fr)
        lat.append((fr, (cyc - d_ann[fr]) / (clk * 1000.0)))   # ms
    if not lat:
        print("no content matches (transition frames only?)"); return
    vals = [v for _, v in lat]
    vals_s = sorted(vals)
    print(f"matched {len(lat)} frames | announce->display latency ms: "
          f"min={min(vals):.1f} median={vals_s[len(vals_s)//2]:.1f} max={max(vals):.1f}")
    print("  per-frame:", " ".join(f"{fr}:{v:.1f}" for fr, v in lat))

main()
