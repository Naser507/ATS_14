#!/bin/bash

# Clean previous release
rm -rf release/linux/*

# Create required folders
mkdir -p release/linux/bin
mkdir -p release/linux/configs
mkdir -p release/linux/assets

# Copy runtime outputs
cp build/bin/ATS_14 release/linux/bin/
cp build/bin/libui_core.so release/linux/bin/

# Copy configs
cp configs/manifest.json release/linux/configs/

echo "Linux release prepared."