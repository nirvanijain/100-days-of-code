//Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.
#include <stdio.h>

int main() {
    int number;

    // Prompt the user to enter an integer
    printf("Enter an integer: ");
    
    // Read the integer from the user
    scanf("%d", &number);

    // Check if the number is greater than or equal to zero
    if (number >= 0) {
        // If it is, check if it's exactly zero
        if (number == 0) {
            printf("The number is zero.\n");
        } else {
            // Otherwise, it must be positive
            printf("The number is positive.\n");
        }
    } else {
        // If the number is not greater than or equal to zero, it must be negative
        printf("The number is negative.\n");
    }

    return 0; // Indicate successful program execution
}
