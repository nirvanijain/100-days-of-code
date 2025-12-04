//Find the sum of main diagonal elements for a square matrix
#include <stdio.h>

int main() {
    int matrix[3][3] = { // Example 3x3 matrix
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    int size = 3; // Size of the square matrix
    int mainDiagonalSum = 0;

    // Loop to iterate through the main diagonal elements
    for (int i = 0; i < size; i++) {
        // Add the element at matrix[i][i] to the sum
        mainDiagonalSum += matrix[i][i]; // [1, 6]
    }

    // Print the result
    printf("Sum of Main Diagonal elements: %d\n", mainDiagonalSum); // [5]

    return 0;
}
