# onepackage (op)
Package and launch.

## Runtime Prerequisites

1. Linux 

## Build Prerequisites with Ubuntu 20
```
sudo apt install g++ cmake python python3-pip
sudo pip3 install conan
```

## Building
```
mkdir build && cd build
conan install ..
cmake ..
cmake --build . --config Release
./bin/op
cd ..
```

## Install
```
sudo ln -s `pwd`/build/bin/op /usr/local/bin/op
```
