//Add two matrices
#include <stdio.h> 

int main() {
    int row, col, i, j; // Variables for rows, columns, and loop counters
    int matrix1[100][100], matrix2[100][100], sum[100][100]; // Declare 2D arrays for the matrices

    // Get the number of rows from the user
    printf("Enter the number of rows (1-100): ");
    scanf("%d", &row);

    // Get the number of columns from the user
    printf("Enter the number of columns (1-100): ");
    scanf("%d", &col);

    printf("\nEnter elements of Matrix 1:\n");
    // Input elements for the first matrix
    for (i = 0; i < row; ++i) {
        for (j = 0; j < col; ++j) {
            printf("Enter element a%d%d: ", i + 1, j + 1);
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("\nEnter elements of Matrix 2:\n");
    // Input elements for the second matrix
    for (i = 0; i < row; ++i) {
        for (j = 0; j < col; ++j) {
            printf("Enter element b%d%d: ", i + 1, j + 1);
            scanf("%d", &matrix2[i][j]);
        }
    }

    // Add the two matrices element by element
    for (i = 0; i < row; ++i) {
        for (j = 0; j < col; ++j) {
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    // Print the resulting sum matrix
    printf("\nSum of the two matrices: \n");
    for (i = 0; i < row; ++i) {
        for (j = 0; j < col; ++j) {
            printf("%d ", sum[i][j]);
            // Print a new line after each row for better formatting
            if (j == col - 1) {
                printf("\n");
            }
        }
    }

    return 0; // Indicate successful execution
}
