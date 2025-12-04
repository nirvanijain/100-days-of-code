//Check if a matrix is symmetric
#include <stdio.h>
#include <stdbool.h> 

// Function to check if a matrix is symmetric
bool isSymmetric(int matrix[][10], int rows, int cols) {
    // A symmetric matrix must be a square matrix
    if (rows != cols) {
        return false;
    }

    // Compare elements with their transposed counterparts
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (matrix[i][j] != matrix[j][i]) {
                return false; // Found a non-matching pair, so it's not symmetric
            }
        }
    }

    return true; // All elements matched, so it's symmetric
}

int main() {
    int rows, cols;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    int matrix[10][10]; // Assuming max size 10x10 for simplicity

    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    if (isSymmetric(matrix, rows, cols)) {
        printf("The matrix is symmetric.\n");
    } else {
        printf("The matrix is not symmetric.\n");
    }

    return 0;
}
