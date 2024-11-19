#include <stdio.h>
#include <stdlib.h>
#define MAX_FILE_NAME 100
#include "magic_square.h"

// Function to count the number of lines in the file (matrix size)
int getlines(char filename[MAX_FILE_NAME]);

int main() {
    // Define our file variable
    FILE *f;
    char filename[MAX_FILE_NAME];

    // Prompt the user to enter the file name
    printf("Enter file name: ");
    scanf("%s", filename);

    // Get the number of lines (and hence the size of the matrix)
    int n = getlines(filename);

    // TODO: Open the file
    f = fopen(filename, "r");
    if (f == NULL) {
        printf("Error: Could not open file.\n");
        return 1;
    }

    // TODO: Allocating a matrix for storing the magic square
    // as an array of pointers, where each pointer is a row
    int **matrix = (int **)malloc(n * sizeof(int *));
    for (int i = 0; i < n; i++) {
        matrix[i] = (int *)malloc(n * sizeof(int));
    }

    // TODO: Inputting integer data into the matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            fscanf(f, "%d", &matrix[i][j]);
        }
    }

    // Call the isMagicSquare function and print the result
    if (isMagicSquare(matrix, n)) {
        printf("The matrix is a magic square.\n");
    } else {
        printf("The matrix is not a magic square.\n");
    }

    // TODO: Freeing each row separately before freeing the array of pointers
    for (int i = 0; i < n; i++) {
        free(matrix[i]);
    }
    free(matrix);

    // TODO: Close the file
    fclose(f);

    return 0;
}

// Function to count the number of lines in the file
int getlines(char filename[MAX_FILE_NAME]) {
    FILE *fp;
    fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("Error: Could not open file.\n");
        exit(1);
    }

    int ch_read;
    int count = 0;

    // Count the number of newline characters to determine the number of lines
    while ((ch_read = fgetc(fp)) != EOF) {
        if (ch_read == '\n') {
            count++;
        }
    }

    printf("No. lines: %d\n", count);
    fclose(fp);
    return count;
}

