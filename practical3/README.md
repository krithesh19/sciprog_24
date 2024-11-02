# Practical 3: Calculating the Area Under f(x) = tan(x) Using the Trapezoidal Rule

This program approximates the area under the curve of f(x) = tan(x) from x = 0 to x = π/3 using the trapezoidal rule with N = 12 points. The trapezoidal rule calculates the integral by dividing the area under the curve into trapezoids and then summing their areas.

### Files

Practical.c: Contains the code for calculating the area using the trapezoidal rule.

### Explanation of Key Variables

m: Lower bound of integration, set to 0.
n: Upper bound of integration, set to π/3.
N: Number of points used in the trapezoidal approximation, set to 12.
h: Width of each subinterval.
How It Works

Initialization: Sets values for m, n, and N, and calculates h (the width of each subinterval).

### Trapezoidal Rule Calculation:
Adds the function values at the endpoints x = 0 and x = π/3.
For each interior point, evaluates f(x) = tan(x) and adds twice its value to the sum, as required by the trapezoidal rule.
Integral Approximation: Multiplies the sum by (n - m) / [2 * (N - 1)] to obtain the integral approximation.
Difference Calculation: Computes the difference between the computed integral and the expected value ln(2), displaying this difference as a measure of accuracy.
Expected Output The program outputs the absolute difference between the computed integral and the exact value ln(2).

### Compilation and Execution To compile and run the program:

bash

gcc Practical.c -o practical
./practical

This output provides an indication of the accuracy of the trapezoidal approximation compared to the exact value of the integral.
