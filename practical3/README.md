# Practical 3 - Description


Practical 3: Calculating the Area Under 
𝑓
(
𝑥
)
=
tan
⁡
(
𝑥
)
f(x)=tan(x) Using the Trapezoidal Rule
This program calculates the area under the curve 
𝑓
(
𝑥
)
=
tan
⁡
(
𝑥
)
f(x)=tan(x) from 
𝑥
=
0
x=0 to 
𝑥
=
𝜋
/
3
x=π/3 using the trapezoidal rule with 
𝑁
=
12
N=12 points. The trapezoidal rule approximates the integral by dividing the area under the curve into trapezoids, calculating their areas, and summing them.

Files
Practical.c: Contains the code for calculating the area using the trapezoidal rule.
Explanation of Key Variables
m: The lower bound of integration, set to 0.
n: The upper bound of integration, set to 
𝜋
/
3
π/3.
N: The number of points used in the trapezoidal approximation, set to 12.
h: The width of each subinterval.
How It Works
Initialization: The values of m, n, and N are set, and h (the width of each subinterval) is calculated.
Trapezoidal Rule Calculation:
The function values at the endpoints 
𝑥
=
0
x=0 and 
𝑥
=
𝜋
/
3
x=π/3 are added first.
For each interior point, the function 
𝑓
(
𝑥
)
=
tan
⁡
(
𝑥
)
f(x)=tan(x) is evaluated, and twice its value is added to the sum (as required by the trapezoidal rule).
Integral Approximation: The sum is multiplied by the interval width over 2 to obtain the integral approximation.
Difference Calculation: The difference between the computed integral and the expected value 
ln
⁡
(
2
)
ln(2) is calculated and displayed.
Expected Output
The program will output the absolute difference between the computed integral and the exact value 
ln
⁡
(
2
)
ln(2):

makefile
Copy code
Difference: <value>
Compilation and Execution
To compile and run the program:

bash
Copy code
gcc Practical.c -o practical
./practical
This output gives an indication of the accuracy of the trapezoidal approximation compared to the exact value of the integral.