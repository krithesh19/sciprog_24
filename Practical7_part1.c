#include <stdio.h>
#include <stdlib.h>

double factorial(int n) {
    double result = 1.0;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

double estimate_e(int order) {
    double *terms = (double *)malloc((order + 1) * sizeof(double));
    if (terms == NULL) {
        printf("Memory allocation failed.\n");
        return 0.0;
    }

    terms[0] = 1.0;  // f(0)
    double sum = terms[0];

    for (int i = 1; i <= order; i++) {
        terms[i] = 1.0 / factorial(i);
        sum += terms[i];
    }

    free(terms);
    return sum;
}

int main() {
    double actual_e = 2.718281828459045;
    for (int order = 1; order <= 15; order++) {
        double estimate = estimate_e(order);
        printf("Order %d: Estimated e = %.10f, Difference = %.10f\n", order, estimate, actual_e - estimate);
    }
    return 0;
}
