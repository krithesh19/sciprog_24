# Practical 9 - Magic Square Validation Program

This practical contains a program to validate whether a given matrix is a magic square. It includes multiple files for modular programming and uses dynamic memory and efficient logic to perform matrix validation.

## Files Overview

1. **`magic_square.c`**
   - Contains the main logic for checking whether a matrix is a magic square.
   - Implements functions to validate rows, columns, and diagonals for equal sums.

2. **`magic_square.h`**
   - Header file with function prototypes for magic square validation.
   - Includes necessary libraries and constants.

3. **`main_stub.c`**
   - Provides a stub for testing the functions in `magic_square.c`.
   - Reads matrix input and invokes validation logic.

4. **`magic_square.txt`**
   - Contains sample test cases for matrix input.
   - Used to manually test the program's output.

5. **`not_magic_square.txt`**
   - Contains sample test cases for matrices that are not magic squares.
   - Helps validate the program's accuracy in identifying invalid matrices.

---

## How to Compile and Run

### Compilation
To compile the program, use the following command:
```bash
gcc main_stub.c magic_square.c -o magic_square -lm


Execution
To run the compiled program:

```bash
./magic_square

---
###  Program Functionality
Magic Square Validation
A matrix is a magic square if:

All rows, columns, and diagonals have the same sum.
The matrix contains unique positive integers.

###Steps:
The program reads matrix input (hardcoded or from a file).
Validates the sums of rows, columns, and diagonals.
Outputs whether the matrix is a magic square or not.

---
Example Input and Output

### Input (Matrix)
4 9 2
3 5 7
8 1 6


### Output
The given matrix is a magic square.

### Input (Matrix)
4 9 2
3 5 7
8 1 5

### Output
The given matrix is NOT a magic square.

