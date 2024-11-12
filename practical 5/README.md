# Practical - Fibonacci Series and Hyperbolic Tangent Comparison

## Fibonacci Series Program

This program calculates and prints the Fibonacci series up to a specified number of terms. It prompts the user to enter the number of terms they wish to see, then calculates and displays each term in the series sequentially.

File: fibonacciseries.c

### How It Works:

The user inputs the value of n, representing the number of terms.

The program initializes the first two terms of the Fibonacci sequence as 0 and 1.

It then calculates each subsequent term by summing the previous two terms, displaying the full sequence up to the nth term.

### Example Output:

Enter the value of n for the Fibonacci series: 10

Fibonacci series up to 10 terms:

0 1 1 2 3 5 8 13 21 34


## Hyperbolic Tangent Comparison Program

This program calculates the values of two approximations of the inverse hyperbolic tangent function (artanh(x)) for a range of x values and then compares them. It computes the difference between the two approximations and displays the result.

File: hyperbolictangent.c

## How It Works:
The user inputs a precision delta, which determines the range of x values for the calculation.

For each x value within the range, the program calculates artanh1(x) and artanh2(x), two different approximations of the inverse hyperbolic tangent.

It then computes the absolute difference between these two values and displays x, artanh1(x), artanh2(x), and their difference in a formatted table.


### Example Output:

diff

Enter precision delta: 0.1

x          artanh1(x)         artanh2(x)        Difference

-0.90      -1.2610980000    -1.4722194896     0.2111214896

-0.89      -1.2366708556    -1.4219258711     0.1852550155

-0.88      -1.2127037167    -1.3757676565     0.1630639398

...


### Compilation and Execution

To compile and run each program:

### Fibonacci Series

bash

gcc fibonacciseries.c -o fibonacci

./fibonacci

### Hyperbolic Tangent Comparison

bash

gcc hyperbolictangent.c -o hyperbolic_tangent

./hyperbolic_tangent

This will generate and display the respective outputs for each program, allowing you to observe the Fibonacci sequence and the difference between the two hyperbolic tangent approximations.


