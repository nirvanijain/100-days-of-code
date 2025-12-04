//Write a program to reverse a given number
#include <stdio.h> 

int main() {
    int num, reversedNum = 0, remainder; // Declare variables for input, reversed number, and remainder

    // Prompt the user to enter an integer
    printf("Enter an integer: ");
    scanf("%d", &num); // Read the integer entered by the user and store it in 'num'

    // Create a temporary variable to hold the original number for later output
    int tempNum = num;

    // Loop until the number becomes 0
    while (num != 0) {
        remainder = num % 10;        // Get the last digit of the number (e.g., 123 % 10 = 3)
        reversedNum = reversedNum * 10 + remainder; // Build the reversed number:
                                                    // (e.g., 0 * 10 + 3 = 3), then (3 * 10 + 2 = 32), then (32 * 10 + 1 = 321)
        num = num / 10;              // Remove the last digit from the original number (e.g., 123 / 10 = 12)
    }

    // Display the original and reversed numbers
    printf("Original Number: %d\n", tempNum);
    printf("Reversed Number: %d\n", reversedNum);

    return 0; // Indicate successful execution of the program
}
