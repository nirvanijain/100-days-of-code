//Multiply two matrices
#include <stdio.h>

#define R1 2 // Number of rows in Matrix-1
#define C1 3 // Number of columns in Matrix-1
#define R2 3 // Number of rows in Matrix-2
#define C2 2 // Number of columns in Matrix-2

int main() {
    int mat1[R1][C1] = {{1, 2, 3}, {4, 5, 6}};
    int mat2[R2][C2] = {{7, 8}, {9, 10}, {11, 12}};
    int result[R1][C2]; // Resultant matrix

    // Check if multiplication is possible
    if (C1 != R2) {
        printf("Matrix multiplication is not possible. Columns of the first matrix must match rows of the second matrix.\n");
        return 1; // Indicate an error
    }

    // Perform matrix multiplication
    for (int i = 0; i < R1; ++i) { // Iterate over rows of mat1 (and result)
        for (int j = 0; j < C2; ++j) { // Iterate over columns of mat2 (and result)
            result[i][j] = 0; // Initialize the element of the result matrix
            for (int k = 0; k < C1; ++k) { // Iterate over columns of mat1 (and rows of mat2)
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }

    // Print the resultant matrix
    printf("Resultant Matrix:\n");
    for (int i = 0; i < R1; ++i) {
        for (int j = 0; j < C2; ++j) {
            printf("%d\t", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
