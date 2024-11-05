# Practical 4: Tangent Calculations and Area Estimation Using the Trapezoidal Rule

This program calculates tangent values for angles from 0 to 60 degrees in 5-degree increments and computes the area under the curve of tan(x) within this range using the Trapezoidal Rule.

## Program Overview:

### Tangent Value Calculation:

Converts angles from degrees to radians.

Calculates tan(x) for angles at 5-degree intervals (0, 5, 10, ..., 60 degrees).

Stores each calculated tangent value in an array and displays them.

### Area Calculation:

Applies the Trapezoidal Rule to approximate the area under tan(x) from 0 to 60 degrees.

Uses a step size of 5 degrees, converted to radians.

Outputs the total computed area.

### Files:

main.c: Contains functions for tangent calculations, display, and area computation.

### Key Functions:

degrees_to_radians(int degrees): Converts an angle in degrees to radians.

calculate_tan_values(): Computes and stores tan(x) values at 5-degree intervals.

print_tan_values(): Displays the calculated tan(x) values.

calculate_area(): Calculates the area under tan(x) from 0 to 60 degrees using the Trapezoidal Rule.

Compilation and Execution:

### To compile and run the program:

bash

gcc main.c -o practical4 -lm

./practical4

 ### Output:

The program will display the tangent values and the calculated area: xyz
