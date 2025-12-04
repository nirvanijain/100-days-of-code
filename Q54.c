//Write a program to print the following pattern
#include <stdio.h>

int main() {
    int i, j, rows = 4; // 'rows' represents the number of rows in the upper half (or lower half)

    // Decreasing part of the hourglass
    for (i = rows; i >= 1; i--) {
        // Print leading spaces
        for (j = 1; j <= rows - i; j++) {
            printf(" ");
        }
        // Print asterisks
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    // Increasing part of the hourglass
    for (i = 2; i <= rows; i++) {
        // Print leading spaces
        for (j = 1; j <= rows - i; j++) {
            printf(" ");
        }
        // Print asterisks
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
