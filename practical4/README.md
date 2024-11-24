# Practical 4: Tangent Calculations and Area Estimation Using the Trapezoidal Rule

This program calculates the tangent values for angles between 0 and 60 degrees in 5-degree increments and approximates the area under the curve of \( \tan(x) \) over the same range using the **Trapezoidal Rule**.

---

## Program Overview

### 1. **Tangent Value Calculation**
- Converts angles from degrees to radians.
- Calculates \( \tan(x) \) for angles at 5-degree intervals (0°, 5°, 10°, ..., 60°).
- Stores the tangent values in an array and displays them.

### 2. **Area Calculation**
- Uses the **Trapezoidal Rule** to approximate the area under \( \tan(x) \) from 0° to 60°.
- Utilizes a step size of 5 degrees (converted to radians for calculations).
- Outputs the computed area.

---

## Files

1. **`main.c`**: Contains the implementation of tangent calculations, display, and area computation.

---

## Key Functions

### **`degrees_to_radians(int degrees)`**
- Converts an angle from degrees to radians.
- Formula: 
  \[
  \text{radians} = \text{degrees} \times \frac{\pi}{180}
  \]

### **`calculate_tan_values()`**
- Computes and stores \( \tan(x) \) values at 5-degree intervals in an array.

### **`print_tan_values()`**
- Prints the calculated \( \tan(x) \) values to the console.

### **`calculate_area()`**
- Approximates the area under \( \tan(x) \) from 0° to 60° using the **Trapezoidal Rule**.
- Formula:
  \[
  \text{Area} = \frac{h}{2} \cdot \left[f(x_0) + 2 \cdot \sum_{i=1}^{N-1} f(x_i) + f(x_N)\right]
  \]
  where \( h \) is the step size and \( f(x) = \tan(x) \).

---

## Compilation and Execution

To compile and run the program:

### Compilation
```bash
gcc main.c -o practical4 -lm
./practical4

---
### Example Output
Tangent values:
tan(0°) = 0.0000
tan(5°) = 0.0875
tan(10°) = 0.1763
...
tan(60°) = 1.7321

Calculated Area:
Area under tan(x) from 0° to 60°: 0.8976
