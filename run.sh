#!/bin/bash

cd build/
cmake ../src/
make
cd ../src
../build/features ../resources/ss3.png ../resources/5.avi
