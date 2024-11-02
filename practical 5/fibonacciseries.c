#include <stdio.h>


void next_fibonacci(int *a, int *b) {
    int temp = *a + *b;
    *a = *b;
    *b = temp;
}

int main() {
    int n;
    
    
    printf("Enter the value of n for the Fibonacci series: ");
    scanf("%d", &n);
    
    int a = 0, b = 1;
    
    printf("Fibonacci series up to %d terms:\n", n);
    printf("%d ", a);  // Print the first term
    
    for (int i = 1; i < n; i++) {
        printf("%d ", b);
        next_fibonacci(&a, &b);
    }
    
    printf("\n");
    return 0;
}
