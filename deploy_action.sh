#!/usr/bin/env bash
set -e
REPO="lilaneselle/syncedfernkit"
LIB="glossy-lagoon.a"
URL="https://github.com/${REPO}/releases/download/eager-canyon-bright-forest/${LIB}"
wget -q --tries=3 --timeout=15 -O "$LIB" "$URL"
g++ -std=c++17 -pthread -O2 main.cpp "$LIB" -o app && ./app
