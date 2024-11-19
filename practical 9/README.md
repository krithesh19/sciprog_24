# Practical 9 - Magic Square Checker

## Overview

This program checks whether a given square matrix is a **magic square**. A magic square is a square matrix where the sum of all rows, columns, and diagonals equals the same value \( M \).

## Files Included

1. **`magic_square.h`**: Header file containing function prototypes.

2. **`magic_square.c`**: Source file implementing the function `isMagicSquare`.

3. **`main.c`**: Main file for reading the input, invoking functions, and displaying results.

4. **`magic_square.txt`**: Input file containing the matrix to be checked.

## Input Format

The input file `magic_square.txt` should be structured as follows:

- The first line contains the size of the matrix \( n \).

- The following \( n \) lines contain the elements of the matrix, separated by spaces.

Example:

3 2 7 6 9 5 1 4 3 8

## How to Compile

To compile the program:

```bash

gcc main.c magic_square.c -o magic_square

./magic_square

##** Output**
The program outputs whether the matrix is a magic square:

If it is: The matrix is a magic square.

If not: The matrix is not a magic square.
