# Practical 2: Exploring Floating Point Arithmetic

This practical explores floating-point arithmetic through two main exercises using C programs. The exercises focus on understanding floating-point limitations and summing series with different precisions.

### Program Details

### Conversion Program (conversion.c):

Demonstrates the behavior of floating-point and integer representations.

Exercises include compiling the program, observing differences between floating-point and integer outputs, and calculating the number of binary digits a float can represent.

Uses the log function from the math library for calculations.

### Summation Program (sum.c):

Calculates the sum of the series 1 + 1/2 + 1/3 + ... + 1/1000.

Compares the precision of two summation methods and prints the difference between them.

Shows the impact of summation order on floating-point precision.

### Compilation and Execution

To compile and run each program, use the following commands:

### Conversion Program

bash

gcc conversion.c -o conversion -lm

./conversion

### Summation Program

bash

gcc sum.c -o sum -lm

./sum
