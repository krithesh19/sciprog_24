# Practical 2: Exploring Floating Point Arithmetic

This practical explores floating-point arithmetic through two main exercises using C programs. The exercises aim to understand floating-point limitations and analyze the precision of summing series in different orders.

---

## Program Details

### 1. Conversion Program (`conversion.c`)
- **Purpose:** Demonstrates the behavior of floating-point and integer representations.
- **Exercises:**  
  - Observe differences between floating-point and integer outputs.
  - Calculate the number of binary digits a `float` can represent using the logarithmic formula.
- **Features:**  
  - Utilizes the `log` function from the math library for binary digit calculations.

### 2. Summation Program (`sum.c`)
- **Purpose:** Calculates the sum of the series \( 1 + \frac{1}{2} + \frac{1}{3} + \ldots + \frac{1}{1000} \).
- **Exercises:**  
  - Compares two summation methods:
    1. Summing from smallest to largest (ascending order).
    2. Summing from largest to smallest (descending order).
  - Prints the difference between the results of both methods to highlight the impact of summation order on floating-point precision.

---

## Compilation and Execution

To compile and run each program, use the following commands:

### 1. Conversion Program
```bash
gcc conversion.c -o conversion -lm
./conversion

### 2. Summation Program
gcc sum.c -o sum -lm
./sum
