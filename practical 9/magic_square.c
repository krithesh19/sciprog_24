#include "magic_square.h"

bool isMagicSquare(int **matrix, int n) {
    if (n <= 0) {
        return false;
    }

    // Calculate the magic constant
    int magicSum = (n * (n * n + 1)) / 2;

    // Check rows and columns
    for (int i = 0; i < n; i++) {
        int rowSum = 0, colSum = 0;
        for (int j = 0; j < n; j++) {
            rowSum += matrix[i][j];
            colSum += matrix[j][i];
        }
        if (rowSum != magicSum || colSum != magicSum) {
            return false;
        }
    }

    // Check main diagonal
    int diagSum1 = 0, diagSum2 = 0;
    for (int i = 0; i < n; i++) {
        diagSum1 += matrix[i][i];
        diagSum2 += matrix[i][n - i - 1];
    }
    if (diagSum1 != magicSum || diagSum2 != magicSum) {
        return false;
    }

    return true;
}
