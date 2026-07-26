#!/bin/bash
# build_baseline_hps.sh — build the CLEAN MiSTer_groovy with ONLY the self-disabling selftest auto-launch hook
# added (a new additive file; the clean groovy.cpp/main.cpp are untouched). Output:
#   build_output/MiSTer_groovy_baseline   (== clean app + dormant launch hook; the receive/decode path is clean)
set -e
export PATH=/opt/gcc-arm-10.2-2020.11-x86_64-arm-none-linux-gnueabihf/bin:$PATH
BUILD_DIR="/tmp/mister_build_baseline"
REPO_URL="https://github.com/MiSTer-devel/Main_MiSTer.git"
COMMIT_HASH="cab156339e523adce5f4126322a47735b7bb67bc"   # same pin as the clean HPS build
CLEAN=/mnt/c/git/_clean/Groovy_MiSTer
HOOK=/mnt/c/git/Groovy_MiSTer/tools/groovy_selftest_launch.cpp
OUT=/mnt/c/git/Groovy_MiSTer/build_output/MiSTer_groovy_baseline

rm -rf "$BUILD_DIR"; mkdir -p "$BUILD_DIR"
git clone -q "$REPO_URL" "$BUILD_DIR"
cd "$BUILD_DIR"; git checkout -q "$COMMIT_HASH"
cp -r "$CLEAN/hps_linux/src/"* .
# inject the test-only launch hook into the groovy support dir (keeps /_clean pristine)
cp "$HOOK" support/groovy/groovy_selftest_launch.cpp
make clean >/dev/null 2>&1 || true
make _AF_XDP=0
cp MiSTer_groovy "$OUT"
echo "BASELINE HPS DONE -> $OUT"
# verify the constructor was retained
arm-none-linux-gnueabihf-nm -C "$OUT" 2>/dev/null | grep -i autolaunch || echo "WARN: autolaunch symbol not found"
