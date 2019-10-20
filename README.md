# Example Project with GoogleTest as submodule

## Building and Testing
```
mkdir build
cd build && cmake ..
make
./project_main
./runUnitTests
```
or
```
./build.sh
```


## Adding a submodule
```
git submodule add git@github.com:google/googletest.git extern/googletest
git submodule init
git submodule update
```

## Check Code Style
Checking code stype with cpplint.
```
conda create --name ctci python
source activate ctci
pip install -r requirements.txt

cpplint **/*.cpp
```


## Acknowledgements and References
Based on https://github.com/selyunin/gtest_submodule.  GoogleTest submodule located in extern/googletest.

https://github.com/cpplint/cpplint
https://github.com/google/googletest
https://github.com/google/googletest/blob/master/googletest/docs/primer.md