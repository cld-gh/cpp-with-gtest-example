#!/bin/bash
mkdir build
cd build && cmake ..
make
./project_main
./runUnitTests