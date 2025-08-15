# Building ggetpasswd

## Table of contents

* [Prerequisites](#prerequisites)
* [Building the binary](#building-the-binary)
* [Installing](#installing)

## Prerequisites

To build ggetpasswd, you must make sure to have all neccesary tools installed. The following tools
are required:

* A C++ compiler
* CMake >= v3.10
* [cxxopts >= v3.3.0][cxxopts-link]
* Git

## Building the binary

Firstly, create the build directory where you will build your binary in.

```bash
mkdir build
cd build
```

Now, create the Makefile and execute it.

```bash
cmake ..
cmake --build
```

## Installing

To install the binary, simply execute this command inside the build directory:

```bash
cmake --install
```

[cxxopts-link]: https://github.com/jarro2783/cxxopts/tree/v3.3.0
