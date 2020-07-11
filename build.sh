#!/bin/bash
if [ ! -d build ];then
    mkdir build
else
echo "???????"
fi
cd build
cmake -G "Visual Studio 15 2017 Win64" ..
