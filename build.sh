#!/bin/sh

g++ -o bin/$(basename $1) -std=c++20 -O2 -Wall $1
