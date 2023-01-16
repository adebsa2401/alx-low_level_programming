#!/bin/bash
wget -q --output-document=$HOME/lib101-makemewin.so https://github.com/adebsa2401/alx-low_level_programming/blob/master/0x18-dynamic_libraries/lib101-makemewin.so?raw=true
export LD_PRELOAD=$HOME/lib101-makemewin.so
