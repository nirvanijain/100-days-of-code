//Write a program to print all factors of a given number 
#include <stdio.h>

int main() {
    int num, i;

    // Prompt the user to enter a positive integer
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // Print a message indicating the factors
    printf("Factors of %d are: ", num);

    // Loop from 1 up to the number itself
    for (i = 1; i <= num; ++i) {
        // Check if 'i' divides 'num' without a remainder
        if (num % i == 0) {
            // If 'i' is a factor, print it
            printf("%d ", i);
        }
    }

    printf("\n"); // Print a newline for better formatting
    return 0;
}
