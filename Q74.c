//Find the transpose of a matrix
#include <stdio.h>

#define ROWS 3 // Define number of rows for the original matrix
#define COLS 4 // Define number of columns for the original matrix

int main() {
    int originalMatrix[ROWS][COLS] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    // The transposed matrix will have dimensions COLS x ROWS
    int transposedMatrix[COLS][ROWS];

    // Print the original matrix
    printf("Original Matrix:\n");
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("%d\t", originalMatrix[i][j]);
        }
        printf("\n");
    }

    // Transpose the matrix
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            transposedMatrix[j][i] = originalMatrix[i][j];
        }
    }

    // Print the transposed matrix
    printf("\nTransposed Matrix:\n");
    for (int i = 0; i < COLS; i++) {
        for (int j = 0; j < ROWS; j++) {
            printf("%d\t", transposedMatrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
