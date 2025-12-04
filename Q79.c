//Perform diagonal traversal of a matrix
#include <stdio.h>

void printDiagonalTraversal(int matrix[][3], int rows, int cols) {
    // Iterate through all possible sums of i + j
    for (int sum = 0; sum <= rows + cols - 2; sum++) {
        // For each sum, iterate through rows
        for (int i = 0; i < rows; i++) {
            int j = sum - i; // Calculate corresponding column index

            // Check if j is within bounds
            if (j >= 0 && j < cols) {
                printf("%d ", matrix[i][j]);
            }
        }
    }
    printf("\n");
}

int main() {
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    int rows = 3;
    int cols = 3;

    printf("Diagonal Traversal (main diagonals): ");
    printDiagonalTraversal(matrix, rows, cols);

    return 0;
}
