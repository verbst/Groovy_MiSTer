#!/bin/bash
# build_nlc_hps.sh — build MiSTer_groovy from the FRESH repo's hps_linux/src (with the NLC handling) + the
# self-disabling selftest launch hook. Output: build_output/MiSTer_groovy_nlc.
set -e
export PATH=/opt/gcc-arm-10.2-2020.11-x86_64-arm-none-linux-gnueabihf/bin:$PATH
BUILD_DIR="/tmp/mister_build_nlc"
REPO_URL="https://github.com/MiSTer-devel/Main_MiSTer.git"
COMMIT_HASH="cab156339e523adce5f4126322a47735b7bb67bc"
SRC=/mnt/c/git/Groovy_MiSTer
OUT=/mnt/c/git/Groovy_MiSTer/build_output/MiSTer_groovy_nlc
mkdir -p /mnt/c/git/Groovy_MiSTer/build_output
rm -rf "$BUILD_DIR"; mkdir -p "$BUILD_DIR"
git clone -q "$REPO_URL" "$BUILD_DIR"
cd "$BUILD_DIR"; git checkout -q "$COMMIT_HASH"
cp -r "$SRC/hps_linux/src/"* .
cp "$SRC/tools/groovy_selftest_launch.cpp" support/groovy/groovy_selftest_launch.cpp
make clean >/dev/null 2>&1 || true
make _AF_XDP=0
cp MiSTer_groovy "$OUT"
echo "NLC HPS DONE -> $OUT"
