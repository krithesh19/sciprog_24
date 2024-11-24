# Practical 6 - Matrix Multiplication Program

This program performs matrix multiplication of two matrices \( A \) (n x p) and \( B \) (p x q) to produce a resulting matrix \( C \) (n x q). It is structured into multiple source files and compiled using a Makefile for efficient management.

## Program Details:

### Matrix Dimensions:
- \( n = 5 \)
- \( p = 3 \)
- \( q = 4 \)

### Matrix Initialization:
- **Matrix A**: \( A[i][j] = i + j \)
- **Matrix B**: \( B[i][j] = i - j \)
- **Matrix C**: Initialized to zero.

### Functionality:
1. Initializes matrices \( A \) and \( B \) using the provided rules.
2. Computes the matrix multiplication \( C = AB \).
3. Prints all three matrices (\( A \), \( B \), and \( C \)) to the screen with each row displayed on a new line for clarity.

### Files in This Program:
- **`main.c`**: Contains the main function to initialize matrices, call the matrix multiplication function, and display results.
- **`matmult.c`**: Contains the function for performing matrix multiplication.
- **`Makefile`**: Automates the compilation process.

### Key Components of the Makefile:
- **Compiler**: `gcc`
- **Flags**: `-Wall` (displays all warnings)
- **Target Executable**: `matmult_program`
- **Object Files**: `main.o`, `matmult.o`

### Makefile Rules:
1. **`all`**: Compiles the program and generates the executable.
2. **`clean`**: Removes object files and the executable.

### Compilation and Execution:

To compile and run the program, follow these steps:

1. Compile the program:
   ```bash
    make

2. Run the executable:
   ```bash
   ./matmult_program

3.Clean up object files and executable:
 ```bash
   make clean 
