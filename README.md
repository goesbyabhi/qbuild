# QBuild

A simple C++ based build system for simplifying building C++ files by leveraging g++ for my C++ side projects

## build.config
This is the build.config file:
```
source_files: file1.cpp file2.cpp
output_executable: executable_name
compiler: g++
flags: -Wall -std=c++20 -O3
```
source_files: here you should enter the files that you want to compile (generally it would be main.cpp or main.c) but more files can be added by adding a space between them
output_executable: this is your executable name
compiler: this can be g++ or gcc or whatever you want to invoke
flags: here you can make use of the g++ flags or gcc flags or linkers or whatever stuff you want

## Building this project
- Install Make. Then type the following in your console
```sh
make
```
- Feel free to modify the executable name in makefile or rename it if you want.
- Get the executable and place it in your project that you want to build using this build_system. Make sure the build.config file is present. Then run
```sh
./{executable_name}
```
- This will output whatever you want.

## Motivation
- Its a hassle to type that big g++ commands again and again. CMake and Make are cool and I wanted to make something like that.
