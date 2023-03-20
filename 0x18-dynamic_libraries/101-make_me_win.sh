#!/bin/bash
wget -P /tmp/ https://raw.github.com/Snazo09/alx-low_level_programming/0x18-dynamic_libraries/win.so
export LD_PRELOAD=/tmp/win.so
