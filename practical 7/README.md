# Practical 7 - Estimation of e and Dynamic Memory Allocation

## Overview
This practical consists of two parts:

### Part 1: Estimation of \( e \)
- In this part, the value of \( e \) is estimated using the series expansion:
  \[
  f(x) = 1 + x + \frac{x^2}{2!} + \frac{x^3}{3!} + \dots + \frac{x^n}{n!}
  \]
- Dynamic memory is used to store the terms of the series for computation.
- The estimate is compared to the actual value of \( e \) to analyze the accuracy.

### Part 2: Pointer Operations and Memory Allocation
This part demonstrates the following:
- Dynamically allocating memory for an array.
- Filling the array with ones.
- Printing the array.
- Freeing the allocated memory to avoid memory leaks.

---

## Files
- **`Practical7_part1.c`**: Contains the code for estimating \( e \).
- **`Practical7_part2.c`**: Contains the code for dynamic memory allocation and pointer operations.

---

## How to Compile and Run

### Part 1: Estimation of \( e \)

To compile:
```bash
gcc -o practical7_part1 practical7_part1.c

To run:
```bash
./practical7_part1

### Part 2: Pointer Operations

To compile:
```bash
gcc -o practical7_part2 practical7_part2.c

To run:
```bash
./practical7_part2
