//Write a program to input an integer and check whether it is even or odd using if–else
#include <stdio.h>

int main() {
    int number;

    // Prompt the user to enter an integer
    printf("Enter an integer: ");

    // Read the integer input from the user
    scanf("%d", &number);

    // Check if the number is even or odd using the modulus operator
    if (number % 2 == 0) {
        printf("%d is an even number.\n", number);
    } else {
        printf("%d is an odd number.\n", number);
    }

    return 0; // Indicate successful execution
}
