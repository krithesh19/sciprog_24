#include <stdio.h>
#include <stdlib.h>
#include "magic_square.h"

int main() {
    FILE *file = fopen("magic_square.txt", "r");
    if (file == NULL) {
        printf("Error: Could not open file\n");
        return 1;
    }

    int n;
    fscanf(file, "%d", &n); // Read the size of the matrix

    int matrix[100][100];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            fscanf(file, "%d", &matrix[i][j]); // Read matrix elements
        }
    }
    fclose(file);

    if (isMagicSquare(matrix, n)) {
        printf("The matrix is a magic square.\n");
    } else {
        printf("The matrix is not a magic square.\n");
    }

    return 0;
}
