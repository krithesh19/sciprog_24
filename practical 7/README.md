# Practical 7 - Estimation of e and Dynamic Memory Allocation

## Overview
This practical has two parts:

## Part 1: Estimation of e
In this part, we estimate the value of e using a series expansion:

f(x) = 1 + x + x^2/2! + x^3/3! + ... + x^n/n!

We use dynamic memory to store the terms of the series and calculate the result. The estimate is compared to the actual value of e to see how accurate it is.

## Part 2: Pointer Operations and Memory Allocation
This part shows how to:

*Dynamically allocate memory for an array.

*Fill the array with ones.

*Print the array.

*Free the memory to avoid memory leaks.

## Files

### Practical7_part1.c: Code for estimating e.

### Practical7_part2.c: Code for dynamic memory allocation and pointer operations.

## How to Compile and Run

### Part 1: Estimation of e

Compile:

gcc -o practical7_part1 practical7_part1.c

./practical7_part1

### Part 2: Pointer Operations

Compile:

gcc -o practical7_part2 practical7_part2.c

./practical7_part2
