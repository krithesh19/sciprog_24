# Practical 5 - Fibonacci Series and Hyperbolic Tangent Comparison

This practical involves two programs: one to calculate the Fibonacci series and another to compare two approximations of the inverse hyperbolic tangent function.

---

## Programs

### 1. Fibonacci Series Program (`fibonacciseries.c`)

This program calculates and prints the Fibonacci series up to a specified number of terms. It prompts the user to enter the desired number of terms, then calculates and displays the series sequentially.

#### **How It Works:**
- The user inputs the value of `n`, representing the number of terms in the Fibonacci series.
- The program initializes the first two terms of the series (`0` and `1`).
- Subsequent terms are calculated as the sum of the two preceding terms.
- The full sequence is displayed up to the nth term.

#### **Example Output:**

Enter the value of n for the Fibonacci series: 10

Fibonacci series up to 10 terms:

0 1 1 2 3 5 8 13 21 34


---

### 2. Hyperbolic Tangent Comparison Program (`hyperbolictangent.c`)

This program calculates values of two approximations of the inverse hyperbolic tangent function (`artanh(x)`) for a range of `x` values and compares them. It computes the absolute difference between the two approximations and displays the result in a formatted table.

#### **How It Works:**
- The user inputs a precision delta (`Δx`) to define the step size for `x` values.
- For each `x` value in the range `[-1 + Δx, 1 - Δx]`, the program:
  - Calculates `artanh1(x)` and `artanh2(x)`, two approximations of the inverse hyperbolic tangent.
  - Computes the absolute difference between `artanh1(x)` and `artanh2(x)`.
  - Displays a table with `x`, `artanh1(x)`, `artanh2(x)`, and their difference.

#### **Example Output:**

Enter precision delta: 0.1

x artanh1(x) artanh2(x) Difference

-0.90 -1.2610980000 -1.4722194896 0.2111214896 -0.89 -1.2366708556 -1.4219258711 0.1852550155 -0.88 -1.2127037167 -1.3757676565 0.1630639398 ...


---

## Compilation and Execution

### **1. Fibonacci Series**
To compile and run the Fibonacci series program:
```bash
gcc fibonacciseries.c -o fibonacci
./fibonacci

### **1. Hyperbolic Tangent Comparison **
gcc hyperbolictangent.c -o hyperbolic_tangent
./hyperbolic_tangent


