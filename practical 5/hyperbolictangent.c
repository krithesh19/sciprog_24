#include <stdio.h>
#include <math.h>

#define SIZE 181  

double artanh1(double x, double delta) {
    double sum = 0.0;
    double term = x;
    int n = 0;
    
    while (fabs(term) >= delta) {
        sum += term;
        n++;
        term = pow(x, 2*n + 1) / (2*n + 1);
    }
    
    return sum;
}

double artanh2(double x) {
    return 0.5 * (log(1 + x) - log(1 - x));
}

int main() {
    double delta;
    double results1[SIZE], results2[SIZE];
    double x = -0.9;
    
    
    printf("Enter precision delta: ");
    scanf("%lf", &delta);

    
    for (int i = 0; i < SIZE; i++) {
        results1[i] = artanh1(x, delta);
        results2[i] = artanh2(x);
        x += 0.01;
    }

    
    printf(" x        artanh1(x)           artanh2(x)           Difference\n");
    x = -0.9;
    for (int i = 0; i < SIZE; i++) {
        printf("%-8.2f %.10f    %.10f    %.10f\n", x, results1[i], results2[i], fabs(results1[i] - results2[i]));
        x += 0.01;
    }

    return 0;
}
