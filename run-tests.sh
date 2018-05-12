#!/usr/bin/env bash

./make-tests.sh | tee AllTests.c 
rm -rf build
mkdir build
cd build
cmake ..
make && make test
read -p "Press enter to continue"
