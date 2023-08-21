#!/bin/bash
wget -P /tmp https://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@github.com/ebhenhaazer/alx-low_level_programming/blob/master/0x18-dynamic_libraries/libtest.so
export LD_PRELOAD=/tmp/libtest.so
