#!/bin/sh -e
gcc -Wall -c *.c
ar -cr liball.a *.o
