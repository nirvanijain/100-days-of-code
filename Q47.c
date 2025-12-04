//Write a program to print the following pattern
#include <stdio.h>

int main() {
    int rows, i, j;

    // Prompt the user to enter the number of rows
    printf("Enter the number of rows for the right-angled triangle: ");
    scanf("%d", &rows);

    // Outer loop for managing rows
    for (i = 1; i <= rows; i++) {
        // Inner loop for printing stars in each row
        // The number of stars in each row is equal to the current row number (i)
        for (j = 1; j <= i; j++) {
            printf("* ");
        }
        // Move to the next line after printing stars for the current row
        printf("\n");
    }

    return 0;
}
