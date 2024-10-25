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


## Compiling and Running the Code

### Step 1: Compile the Code

Open a terminal or command prompt, navigate to the `shamir-secret-sharing` directory, and compile the code with the following command:

```bash
g++ -std=c++11 -o secret_sharing secret_sharing.cpp

This will create an executable file named secret_sharing.

### Step 2: Run the Code with Input Files
To calculate the secret (constant term c) for each JSON input file, use the following commands:
./secret_sharing input1.json
./secret_sharing input2.json

### Expected Output
After running each command, you should see the output in the terminal, which will display the secret (constant term c) calculated from the polynomial:
The secret (constant term c) for the input file input1.json is: [calculated_output]
The secret (constant term c) for the input file input2.json is: [calculated_output]

### Example Output
Here’s a sample output format (exact numbers will vary based on input data):
The secret (constant term c) for the input file input1.json is: 12345
The secret (constant term c) for the input file input2.json is: 67890

### Notes
Ensure json.hpp is in the same directory as secret_sharing.cpp to avoid compilation errors.
You can add additional JSON input files to test more cases. Just specify the file name as an argument when running the program.
This project assumes all coefficients are integers, as described in the task constraints.
