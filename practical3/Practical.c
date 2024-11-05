//***WEEK-3 PRACTICAL3

#include <stdio.h>
#include <math.h>

int main() {
   
    double m = 0.0;
    double n = M_PI / 3.0;  

   
    int N = 12;
    double h = (n - m) / (N - 1);  

    
    double sum = 0.0;

    
    sum += tan(m) + tan(n);

    for (int i = 1; i < N - 1; i++) {
        double x_i = m + i * h;
        sum += 2 * tan(x_i);
    }

    double integral = (n - m) / (2.0 * (N - 1)) * sum;

    printf("Difference: %.6f\n", fabs(integral - log(2.0)));

    return 0;
}