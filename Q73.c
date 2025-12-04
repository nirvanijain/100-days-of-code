//Find the sum of each row of a matrix and store it in an array
#include <stdio.h>

int main() {
    int rows, cols;

    // Get matrix dimensions from the user
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    int matrix[rows][cols];
    int row_sums[rows]; // Array to store sum of each row

    // Input matrix elements
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Enter element at matrix[%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Calculate sum of each row and store in row_sums array
    for (int i = 0; i < rows; i++) {
        int current_row_sum = 0;
        for (int j = 0; j < cols; j++) {
            current_row_sum += matrix[i][j];
        }
        row_sums[i] = current_row_sum;
    }

    // Print the row sums
    printf("\nSum of each row:\n");
    for (int i = 0; i < rows; i++) {
        printf("Row %d sum: %d\n", i + 1, row_sums[i]);
    }

    return 0;
}
