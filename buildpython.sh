#!/bin/bash
#

gcc -dynamiclib -I/usr/include/python2.7 -lpython2.7 -o myModule.dylib myModule.c

mv myModule.dylib myModule.so

