# Catalog

# Shamir's Secret Sharing Algorithm in C++

This project is an implementation of a simplified version of Shamir's Secret Sharing algorithm in C++. Given a set of encoded polynomial roots, the program decodes them and uses Lagrange interpolation to find the constant term ("secret") of the polynomial.

## Prerequisites

To compile and run this code, you’ll need:
- **A C++ Compiler**: Compatible with C++11 or later (e.g., GCC, Clang, or MSVC).
- **JSON Parsing Library for C++**: The project uses [nlohmann/json](https://github.com/nlohmann/json) for parsing JSON files.

### Installing Required Software

1. **Install a C++ Compiler**:
   - **Windows**: Install [MinGW](http://www.mingw.org/) or use Visual Studio with MSVC.
   - **macOS**: Install Xcode Command Line Tools by running `xcode-select --install` in a terminal.
   - **Linux**: Install GCC by running `sudo apt install g++`.

2. **Download the JSON Library**:
   - Download `json.hpp` from the [nlohmann/json GitHub repository](https://github.com/nlohmann/json/releases).
   - Place `json.hpp` in the same directory as your C++ source code (`secret_sharing.cpp`).

### Project Structure

Create a folder named `shamir-secret-sharing` and set up the files as follows:

```plaintext
shamir-secret-sharing/
├── input1.json       # First test input file
├── input2.json       # Second test input file
├── secret_sharing.cpp # C++ source code for the algorithm
└── json.hpp          # JSON library header from nlohmann/json
