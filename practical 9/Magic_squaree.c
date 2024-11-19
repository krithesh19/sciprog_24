#include "magic_square.h"
#include <stdbool.h>

bool isMagicSquare(int matrix[][100], int n) {
    int sumDiagonal1 = 0, sumDiagonal2 = 0;

    // Calculate the sum of the main diagonals
    for (int i = 0; i < n; i++) {
        sumDiagonal1 += matrix[i][i];
        sumDiagonal2 += matrix[i][n - i - 1];
    }

    if (sumDiagonal1 != sumDiagonal2)
        return false;

    // Calculate the sum of rows and columns
    for (int i = 0; i < n; i++) {
        int sumRow = 0, sumCol = 0;
        for (int j = 0; j < n; j++) {
            sumRow += matrix[i][j];
            sumCol += matrix[j][i];
        }
        if (sumRow != sumDiagonal1 || sumCol != sumDiagonal1)
            return false;
    }

    return true;
}
