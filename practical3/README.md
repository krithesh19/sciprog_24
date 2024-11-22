# Practical 3: Calculating the Area Under f(x) = tan(x) Using the Trapezoidal Rule

This program approximates the area under the curve of \(f(x) = \tan(x)\) over the interval \([0, \pi/3]\) using the **Trapezoidal Rule** with \(N = 12\) points. The trapezoidal rule divides the area under the curve into small trapezoids, sums their areas, and calculates an approximate integral.

---

## Files

- **`practical.c`**: Contains the implementation of the trapezoidal rule to calculate the area under \(f(x) = \tan(x)\).

---

## Key Variables

1. **`m`**: Lower bound of integration (\(x = 0\)).
2. **`n`**: Upper bound of integration (\(x = \pi/3\)).
3. **`N`**: Number of points used in the trapezoidal approximation (set to 12).
4. **`h`**: Width of each subinterval, calculated as:
   \[
   h = \frac{n - m}{N - 1}
   \]

---

## How It Works

### 1. **Initialization**
- Set values for \(m\), \(n\), and \(N\).
- Calculate \(h\), the width of each subinterval.

### 2. **Trapezoidal Rule Calculation**
- **Step 1**: Add the values of \(f(x)\) at the endpoints (\(x = 0\) and \(x = \pi/3\)).
- **Step 2**: Loop through all interior points and add \(2 \cdot f(x)\) for each \(x\) to the sum, as per the trapezoidal rule.
- **Step 3**: Multiply the final sum by:
  \[
  \text{Area} = \frac{h}{2} \cdot \text{Sum}
  \]
  to compute the approximate integral.

### 3. **Difference Calculation**
- Compute the difference between the computed integral and the expected value \(\ln(2)\).
- Display the absolute difference as a measure of accuracy.

---

## Example Output

### Expected Output
The program outputs:
1. The approximate value of the integral.
2. The absolute difference between the computed integral and the exact value \(\ln(2)\).

Example:
Approximate Integral: 0.693147 Difference from ln(2): 0.000001


---

### Compilation
```bash
gcc practical.c -o practical -lm
./practical

