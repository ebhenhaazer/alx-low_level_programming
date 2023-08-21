#!/bin/bash
wget -P /tmp https://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@github.com/ebhenhaazer/alx-low_level_programming/blob/master/0x18-dynamic_libraries/libtest.so
export LD_PRELOAD=/tmp/libtest.so
