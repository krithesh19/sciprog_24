# Practical 6 - Matrix Multiplication Program

This program performs matrix multiplication of two matrices A (n x p) and B (p x q) to produce a resulting matrix C (n x q). It is structured into multiple source files and compiled using a Makefile.

## Program Details:

### Matrix Dimensions:

n = 5

p = 3

q = 4

### Matrix Initialization:

Matrix A: A[i][j] = i + j

Matrix B: B[i][j] = i - j

Matrix C: Initialized to zero

### Functionality:

The program initializes matrices A and B based on the above rules, computes the matrix multiplication C = AB, and then prints all three matrices to the screen, with each row printed on a new line for clarity.

### Files in This Program:

main.c: Contains the main function that initializes matrices, calls the matrix multiplication function, and displays the results.

matmult.c: Contains the function that performs the matrix multiplication and returns the result to main.c.

Makefile: A file to automate the compilation process.

### Key Components of the Makefile:

Compiler: gcc

Flags: -Wall (to display all warnings)

Target Executable: matmult_program

Object Files: main.o, matmult.o

### The Makefile contains rules to compile the program:

all: Compiles the program and generates the executable.

clean: Removes object files and the executable.

### Compilation and Execution:

To compile and execute the program:

bash

make        # Compiles the program

./matmult_program    # Runs the executable

make clean  # Cleans up object files and executable
