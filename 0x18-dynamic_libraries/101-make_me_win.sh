#!/bin/bash
wget -P /tmp https://github.com/RanafaB18/alx-low_level_programming/raw/main/0x18-dynamic_libraries/gm_hijack.so 
export LD_PRELOAD=/tmp/gm_hijack.so
