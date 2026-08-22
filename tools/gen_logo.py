#!/usr/bin/env python3
"""Regenerate the Groovy-NLC idle screensaver sprite.

Reads the pristine MiSTer mark from tools/logo_mister_orig.h and writes a
re-styled 64x64 sprite to hps_linux/src/support/groovy/logo.h:

  * the background disc is re-tinted from MiSTer navy to CIRCLE_RGB
  * the three RGB bars keep their exact colours, shortened to BAR_DST_H rows
  * an "NLC" wordmark is drawn below them

The array stays exactly 64*64*3 = 12288 bytes, so loadLogo() in
support/groovy/groovy.cpp (fixed 64-row / 192-byte memcpy, bounce bounds
192x176) needs no change at all, and the sprite costs the same .rodata and
the same cycles as before.

Byte order in the header is B,G,R -- see Groovy.sv decode_pixel():
  {r_vram_in1, g_vram_in1, b_vram_in1} <= word64[00 +:24]
with word64 assembled little-endian from DDR, so memory byte 0 is blue.

Usage:
    python3 tools/gen_logo.py            # regenerate the sprite
    python3 tools/gen_logo.py --selftest # prove parse+emit round-trips exactly
"""

import os
import re
import sys

W = H = 64
ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
SRC = os.path.join(ROOT, "tools", "logo_mister_orig.h")
def header_bytes(eol):
    """Exact size of the emitted header: a 42-char declaration, 191 data lines
    of 386 chars, a last data line of 384, each + eol, then a bare "};"."""
    n = len(eol)
    return (42 + n) + 191 * (386 + n) + (384 + n) + 2
DST = os.path.join(ROOT, "hps_linux", "src", "support", "groovy", "logo.h")

# ---- palette of the source art -------------------------------------------
NAVY = (0x1E, 0x34, 0x50)
BARS = (("R", (0xFA, 0x28, 0x28)),
        ("G", (0x64, 0xDC, 0x46)),
        ("B", (0x32, 0x5A, 0xC8)))

# ---- restyle knobs -------------------------------------------------------
CIRCLE_RGB = (0x33, 0x20, 0x5A)   # deep violet, replaces the MiSTer navy
TEXT_RGB   = (0xFF, 0xFF, 0xFF)   # drop to (0xC8,0xC8,0xD8) if it blooms on the CRT
BAR_DST_Y0 = 9                    # bars are squashed into rows 9..40
BAR_DST_H  = 32
TEXT_Y0    = 43                   # wordmark occupies rows 43..53
TEXT_GAP   = 3
# Below this, a fitted bar term is disc-rim fringe noise rather than real bar
# coverage. The rim strays top out at 0.09 and the faintest genuine bar edge is
# 0.12, so 0.10 separates them cleanly; build() asserts nothing leaks past the
# detected band, which is what would silently break if that ever stopped holding.
BAR_EPS    = 0.10

# 9x11 glyphs, 2px strokes -- only the three letters we need
FONT = {
    "N": ["XX.....XX", "XX.....XX", "XXX....XX", "XXXX...XX", "XX.XX..XX",
          "XX..XX.XX", "XX...XXXX", "XX....XXX", "XX.....XX", "XX.....XX",
          "XX.....XX"],
    "L": ["XX.......", "XX.......", "XX.......", "XX.......", "XX.......",
          "XX.......", "XX.......", "XX.......", "XX.......", "XXXXXXXXX",
          "XXXXXXXXX"],
    "C": ["..XXXXX..", ".XXXXXXX.", "XXX...XXX", "XX.....XX", "XX.......",
          "XX.......", "XX.......", "XX.....XX", "XXX...XXX", ".XXXXXXX.",
          "..XXXXX.."],
}
GW, GH = 9, 11


def read_header(path):
    """Parse a logo.h into 4096 (R,G,B) tuples, plus the file's line ending.

    The repo is `* text=auto`, so the same file is LF on one checkout and CRLF
    on another. Emitting whatever the source uses keeps the tool reproducible
    on either, and keeps the EOL out of the git diff.
    """
    with open(path, "rb") as f:
        raw = f.read()
    eol = "\r\n" if b"\r\n" in raw else "\n"
    text = raw.decode("latin1")
    vals = [int(v, 16) for v in re.findall(r"0x([0-9a-fA-F]{2})", text)]
    if len(vals) != W * H * 3:
        raise SystemExit("%s holds %d bytes, expected %d" % (path, len(vals), W * H * 3))
    # stored B,G,R
    return [(vals[i + 2], vals[i + 1], vals[i]) for i in range(0, len(vals), 3)], eol


def dot(a, b):
    return a[0] * b[0] + a[1] * b[1] + a[2] * b[2]


def unmix(p):
    """Decompose p into a*NAVY + b*BAR + (1-a-b)*BLACK, keeping the residual.

    Returns (a, b, bar_index_or_None, residual_rgb). Verified against the real
    art: max residual 10.7/255 over 80 fringe pixels, mean 0.41, so the
    anti-aliasing of both the disc rim and the bar edges survives intact.
    """
    best = None
    for idx, (_, bar) in enumerate(BARS):
        uu, ww, uw = dot(NAVY, NAVY), dot(bar, bar), dot(NAVY, bar)
        det = uu * ww - uw * uw
        if abs(det) < 1e-9:
            continue
        a = (dot(p, NAVY) * ww - dot(p, bar) * uw) / det
        b = (dot(p, bar) * uu - dot(p, NAVY) * uw) / det
        a = min(1.0, max(0.0, a))
        b = min(1.0, max(0.0, b))
        res = tuple(p[i] - (a * NAVY[i] + b * bar[i]) for i in range(3))
        err = dot(res, res)
        if best is None or err < best[0]:
            best = (err, a, b, idx, res)
    # navy-only fit (the disc rim, where no bar is anywhere near)
    a = min(1.0, max(0.0, dot(p, NAVY) / dot(NAVY, NAVY)))
    res = tuple(p[i] - a * NAVY[i] for i in range(3))
    err = dot(res, res)
    if best is None or err < best[0]:
        best = (err, a, 0.0, None, res)
    a, b, idx, res = best[1], best[2], best[3], best[4]
    if b < BAR_EPS:
        # A sliver of "bar" fitted onto a disc-rim pixel is fringe noise, not
        # real bar coverage. Re-fit as navy-only so the whole fringe lands in
        # the residual and survives the recolour untouched.
        a = min(1.0, max(0.0, dot(p, NAVY) / dot(NAVY, NAVY)))
        b, idx = 0.0, None
        res = tuple(p[i] - a * NAVY[i] for i in range(3))
    return a, b, idx, res


def build(selftest=False):
    src, eol = read_header(SRC)

    disc = [[0.0] * W for _ in range(H)]          # total disc coverage (bars included)
    barc = [[0.0] * W for _ in range(H)]          # bar coverage
    barid = [[None] * W for _ in range(H)]
    resid = [[(0.0, 0.0, 0.0)] * W for _ in range(H)]

    for y in range(H):
        for x in range(W):
            a, b, idx, r = unmix(src[y * W + x])
            # Deliberately unclamped: a+b can land a hair over 1.0 on saturated
            # bar pixels, and clamping here would cost a 1-LSB round-trip error.
            disc[y][x] = a + b
            barc[y][x] = b
            barid[y][x] = idx
            resid[y][x] = r

    if selftest:
        circle_rgb, squash, text = NAVY, False, False
    else:
        circle_rgb, squash, text = CIRCLE_RGB, True, True

    # ---- vertical squash of the bar layer --------------------------------
    # Find the band from rows that are solidly bar (>= 0.5), then take one more
    # row each side to keep the soft caps. Deriving it from "any coverage at
    # all" would swallow the whole sprite the moment a rim pixel fits a sliver
    # of bar, silently wrecking the resample scale.
    core = [y for y in range(H) if max(barc[y]) >= 0.5]
    src_y0 = core[0] - 1 if core[0] > 0 and max(barc[core[0] - 1]) > 0 else core[0]
    src_y1 = core[-1] + 1 if core[-1] < H - 1 and max(barc[core[-1] + 1]) > 0 else core[-1]
    src_h = src_y1 - src_y0 + 1
    for y in range(H):
        if not src_y0 <= y <= src_y1:
            assert max(barc[y]) == 0.0, (
                "bar coverage %.3f leaked outside the band at row %d -- raise "
                "BAR_EPS, or those pixels lose their residual" % (max(barc[y]), y))

    new_barc = [[0.0] * W for _ in range(H)]
    new_barid = [[None] * W for _ in range(H)]
    if squash:
        scale = src_h / float(BAR_DST_H)
        for t in range(BAR_DST_H):
            lo, hi = t * scale, (t + 1) * scale
            for x in range(W):
                acc, wsum = 0.0, {}
                sy = int(lo)
                while sy < hi:
                    w = min(hi, sy + 1) - max(lo, sy)
                    cov = barc[src_y0 + sy][x]
                    acc += cov * w
                    if barid[src_y0 + sy][x] is not None and cov > 0:
                        k = barid[src_y0 + sy][x]
                        wsum[k] = wsum.get(k, 0.0) + cov * w
                    sy += 1
                if acc > 0:
                    cov = min(1.0, acc / scale)
                    new_barc[BAR_DST_Y0 + t][x] = 1.0 if cov > 0.999 else cov
                    new_barid[BAR_DST_Y0 + t][x] = max(wsum, key=wsum.get)
    else:
        new_barc, new_barid = barc, barid

    # ---- composite -------------------------------------------------------
    out = []
    for y in range(H):
        row = []
        for x in range(W):
            # Additive composite, matching the unmix model exactly: the disc
            # contributes whatever coverage the bars do not take. Inside the
            # disc that reduces to the usual (1-b)*circle + b*bar over-blend;
            # on the rim it keeps the partial coverage intact.
            b = new_barc[y][x]
            a = max(0.0, disc[y][x] - b)
            px = [a * circle_rgb[i] for i in range(3)]
            if b > 0:
                bar = BARS[new_barid[y][x]][1]
                px = [px[i] + b * bar[i] for i in range(3)]
            # The residual restores the original fringe character, but only
            # where no bar is involved either before or after the squash --
            # the moved bar band regenerates its own anti-aliasing. With the
            # squash off (selftest) it is added everywhere, which makes the
            # reconstruction exact.
            if not squash or (barc[y][x] == 0.0 and b == 0.0):
                px = [px[i] + resid[y][x][i] for i in range(3)]
            row.append([min(255.0, max(0.0, v)) for v in px])
        out.append(row)

    # ---- wordmark --------------------------------------------------------
    if text:
        word = "NLC"
        tw = len(word) * GW + (len(word) - 1) * TEXT_GAP
        x0 = (W - tw) // 2
        for i, ch in enumerate(word):
            ox = x0 + i * (GW + TEXT_GAP)
            for gy, line in enumerate(FONT[ch]):
                for gx, c in enumerate(line):
                    if c != "X":
                        continue
                    y, x = TEXT_Y0 + gy, ox + gx
                    # disc[] is deliberately unclamped upstream, so clamp it
                    # here before using it as an alpha.
                    cov = min(1.0, max(0.0, disc[y][x]))   # never spill past the rim
                    if cov <= 0:
                        continue
                    out[y][x] = [out[y][x][k] * (1.0 - cov) + TEXT_RGB[k] * cov
                                 for k in range(3)]

    return [tuple(int(round(min(255.0, max(0.0, v)))) for v in out[y][x])
            for y in range(H) for x in range(W)]


def emit(path, px, eol="\n"):
    """Write logo.h in the exact original fixed-width format, 64 bytes/line."""
    data = []
    for r, g, b in px:
        data += [b, g, r]                        # back to B,G,R
    assert len(data) == W * H * 3 == 12288, len(data)
    # Every byte must render as exactly two hex digits, or the fixed-width
    # layout (and the 12288-byte array) silently changes size.
    bad = [v for v in data if not 0 <= v <= 255]
    assert not bad, "channel values out of range: %r" % (bad[:8],)

    lines = ["static const unsigned char logoImage[] = {"]
    for i in range(0, len(data), 64):
        chunk = data[i:i + 64]
        last = (i + 64 >= len(data))
        s = "  " + ", ".join("0x%02x" % v for v in chunk)
        lines.append(s if last else s + ", ")
    blob = eol.join(lines) + eol + "};"
    assert len(blob) == header_bytes(eol), (
        "emitted %d bytes, expected %d -- the fixed-width layout changed"
        % (len(blob), header_bytes(eol)))
    with open(path, "wb") as f:
        f.write(blob.encode("ascii"))


def ascii_art(px):
    def ch(p):
        r, g, b = p
        if (r, g, b) == (0, 0, 0):
            return " "
        if r > 200 and g > 200 and b > 200:
            return "W"
        if r > 140 and g < 100:
            return "R"
        if g > 140:
            return "G"
        if b > 140 and r < 100:
            return "B"
        return "o"
    return "\n".join("|" + "".join(ch(px[y * W + x]) for x in range(W)) + "|"
                     for y in range(H))


def main():
    selftest = "--selftest" in sys.argv
    px = build(selftest)
    _, eol = read_header(SRC)

    if selftest:
        emit(DST + ".selftest", px, eol)
        with open(SRC, "rb") as f:
            want = f.read()
        with open(DST + ".selftest", "rb") as f:
            got = f.read()
        os.remove(DST + ".selftest")
        if want != got:
            raise SystemExit("SELFTEST FAILED: round-trip is not byte-identical")
        print("selftest OK: parse+emit round-trips %d bytes exactly" % len(want))
        return

    # ---- asserts ---------------------------------------------------------
    assert len(px) == W * H, len(px)
    for y in range(H):
        for x in range(W):
            dx, dy = x - 31.5, y - 31.5
            if dx * dx + dy * dy > 33.5 * 33.5:
                assert px[y * W + x] == (0, 0, 0), \
                    "pixel outside the disc is not black at (%d,%d): %r -- loadLogo() " \
                    "has no clipping, the sprite must stay inside 64x64" % (x, y, px[y * W + x])
    present = set(px)
    for name, bar in BARS:
        assert bar in present, "bar colour %s %r vanished" % (name, bar)
    assert CIRCLE_RGB in present, "circle colour %r missing" % (CIRCLE_RGB,)
    assert TEXT_RGB in present, "wordmark colour %r missing" % (TEXT_RGB,)

    emit(DST, px, eol)
    print(ascii_art(px))
    print()
    print("wrote %s (%d bytes on disk, %d sprite bytes, %d distinct colours)"
          % (DST, os.path.getsize(DST), W * H * 3, len(present)))


if __name__ == "__main__":
    main()
