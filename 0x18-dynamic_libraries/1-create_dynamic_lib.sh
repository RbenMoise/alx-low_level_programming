#!/bin/bash
gcc -c -fPIC *.c
gcc -shared -o liball.so *.oi
export LD_LIBRARY_PSTH=.:$LD_LIBRARY_PATH
