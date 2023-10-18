#!/bin/bash
wget -P /tmp https://github.com/ISSAM-SLI/alx-low_level_programming/raw/master/0x18-dynamic_libraries/libgiga.so
export LD_PRELOAD=/tmp/libgiga.so
