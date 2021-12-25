#!/bin/sh

sudo add-apt-repository ppa:ubuntu-toolchain-r/test
sudo apt update -y

sudo apt install -y build-essential cmake curl libmpfr-dev libmpc-dev libgmp-dev e2fsprogs ninja-build qemu-system-gui qemu-system-x86 qemu-utils ccache rsync unzip texinfo
sudo apt -y install gcc-10 g++-10
sudo apt -y install libgtk-3-dev libpixman-1-dev libsdl2-dev libspice-server-dev

../Meta/serenity.sh rebuild-toolchain
