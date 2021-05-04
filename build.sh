#!/bin/bash

if [ -f ./bin ];  then
	mkdir ./bin
fi

for f in Problem-*/*; do
	mkdir -p ./bin/$f
	gcc -g -O0 -Wall -o ./bin/$f/main $f/main.c
done
