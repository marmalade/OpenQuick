#!/bin/sh

export NACL_ARCH=i686
make -j10 PLATFORM=nacl DEBUG=1
make -j10 PLATFORM=nacl DEBUG=0

export NACL_ARCH=x86_64
make -j10 PLATFORM=nacl DEBUG=1
make -j10 PLATFORM=nacl DEBUG=0

export NACL_ARCH=arm
make -j10 PLATFORM=nacl DEBUG=1
make -j10 PLATFORM=nacl DEBUG=0
