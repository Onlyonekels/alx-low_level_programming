#!/bin/bash
wget -p .. https://raw.githubusercontent.com/Onlyonekels/alx-low_level_programming/c2978b32f13222a923621cc47e5e0686537cf7b4/0x18-dynamic_libraries/libgiga.so
export LD-PRELOAD="$PWD/../libgaga.so"
