#include <stdio.h>

int gcd_iterative(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int gcd_recursive(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd_recursive(b, a % b);
}

int main() {
    int num1, num2;
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    int result_iterative = gcd_iterative(num1, num2);
    int result_recursive = gcd_recursive(num1, num2);

    printf("GCD (Iterative): %d\n", result_iterative);
    printf("GCD (Recursive): %d\n", result_recursive);

    return 0;
}
