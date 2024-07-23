Example how to calc CRC-16/ISO-HDLC, CRC-16/ISO-IEC-14443-3-B, CRC-16/X-25, CRC-B, X-25 using boost C++ library.
## Add submodule
This repo already use submodule (you don't need to do this code)
```
git submodule add -b master https://github.com/boostorg/crc
```
## Prerequisites
```
git clone --recurse-submodules --remote-submodules https://github.com/AndreiCherniaev/CRC-16_X_25 && cd CRC-16_X_25/
```
## Compiling
```
cmake -S src/ -B build-host/
cmake --build build-host/ --parallel
```
## Test
```
build-host/test_crc
```