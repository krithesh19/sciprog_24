#include <stdio.h>
#include <math.h>

#define ARRAY_SIZE 13    


double tan_values[ARRAY_SIZE];


double degrees_to_radians(int degrees) {
    return degrees * M_PI / 180.0;
}


void calculate_tan_values() {
    for (int i = 0; i < ARRAY_SIZE; i++) {
        int degrees = i * 5;
        double radians = degrees_to_radians(degrees);
        tan_values[i] = tan(radians);
    }
}

void print_tan_values() {
    printf("Tan values for 0 to 60 degrees:\n");
    for (int i = 0; i < ARRAY_SIZE; i++) {
        printf("tan(%d degrees) = %.6f\n", i * 5, tan_values[i]);
    }
}


double calculate_area() {
    double area = 0.0;
    double h = degrees_to_radians(5);   // Step size in radians (5 degrees)

    
    for (int i = 0; i < ARRAY_SIZE - 1; i++) {
        area += 0.5 * h * (tan_values[i] + tan_values[i + 1]);
    }

    return area;
}

int main() {
    // Calculate and print tan values
    calculate_tan_values();
    print_tan_values();

    // Calculate area under tan(x) from 0 to 60 degrees
    double area = calculate_area();
    printf("\nArea under tan(x) from 0 to 60 degrees: %.6f\n", area);

    return 0;
}
