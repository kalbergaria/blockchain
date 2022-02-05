# Blockchain
This project is meant to be an implementation of blockchain for the purpose of 
learning the implementation details, its vulnerabilities, and countermeasures 
for those vulnerabilities.

## Dependencies
### Installing libgcrypt
#### Ubuntu 20.04
```bash
sudo apt install libgcrypt20-dev
```

## Building
The build commands below are intended to be run from the reporitory's root.
### Generate UNIX Makefiles
```bash
cmake . -B ./build -G "Unix Makefiles"
```
### Clean Generated Files
```bash
sudo rm -rf ./build/*
```
### Build All Executables Using Generated Makefiles
```bash
make -f ./build/Makefile
```

## Coding Style
Source code should to adhere to the guidelines of the linked style guide. If 
there are intentional deviations from the style guide, they will be listed in 
this section.
[Google C++ Style Guide](https://google.github.io/styleguide/cppguide.html)
