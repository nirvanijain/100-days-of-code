//Write a program to print numbers from 1 to n
#include <stdio.h>

int main() {
    int n, i;

    // Prompt the user to enter a number
    printf("Enter a positive integer (n): ");
    scanf("%d", &n);

    // Check if n is positive
    if (n <= 0) {
        printf("Please enter a positive integer.\n");
        return 1; // Indicate an error
    }

    // Print numbers from 1 to n using a for loop
    printf("Numbers from 1 to %d are:\n", n);
    for (i = 1; i <= n; i++) {
        printf("%d ", i);
    }
    printf("\n"); // Print a newline for better formatting

    return 0; // Indicate successful execution
}
