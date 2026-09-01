#!/bin/bash
# build_baseline_hps.sh: build the upstream MiSTer_groovy with only the self-disabling selftest auto-launch
# hook added, as a new additive file, leaving the upstream groovy.cpp and main.cpp untouched. Output:
#   build_output/MiSTer_groovy_baseline   (upstream app plus a dormant launch hook; the receive and decode
#                                          path is unmodified)
set -e
export PATH=/opt/gcc-arm-10.2-2020.11-x86_64-arm-none-linux-gnueabihf/bin:$PATH
BUILD_DIR="/tmp/mister_build_baseline"
REPO_URL="https://github.com/MiSTer-devel/Main_MiSTer.git"
COMMIT_HASH="cab156339e523adce5f4126322a47735b7bb67bc"   # same pin as the clean HPS build
REPO="$(cd "$(dirname "$0")/.." && pwd)"
CLEAN="${CLEAN:-$(dirname "$REPO")/_clean/Groovy_MiSTer}"   # upstream checkout to build from
HOOK="$REPO/tools/groovy_selftest_launch.cpp"
OUT="$REPO/build_output/MiSTer_groovy_baseline"

rm -rf "$BUILD_DIR"; mkdir -p "$BUILD_DIR"
git clone -q "$REPO_URL" "$BUILD_DIR"
cd "$BUILD_DIR"; git checkout -q "$COMMIT_HASH"
cp -r "$CLEAN/hps_linux/src/"* .
# inject the test-only launch hook into the groovy support dir (leaves the upstream checkout pristine)
cp "$HOOK" support/groovy/groovy_selftest_launch.cpp
make clean >/dev/null 2>&1 || true
make _AF_XDP=0
cp MiSTer_groovy "$OUT"
echo "BASELINE HPS DONE -> $OUT"
# verify the constructor was retained
arm-none-linux-gnueabihf-nm -C "$OUT" 2>/dev/null | grep -i autolaunch || echo "WARN: autolaunch symbol not found"
