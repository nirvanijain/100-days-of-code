//Write a program to check if a number is a palindrome
#include <stdio.h>

int main() {
    int number, reversed_number = 0, original_number, remainder;

    printf("Enter an integer: ");
    scanf("%d", &number);

    original_number = number; // Store the original number for comparison

    // Reverse the number
    while (number != 0) {
        remainder = number % 10; // Get the last digit
        reversed_number = reversed_number * 10 + remainder; // Build the reversed number
        number /= 10; // Remove the last digit from the original number
    }

    // Compare the original and reversed numbers
    if (original_number == reversed_number) {
        printf("%d is a palindrome number.\n", original_number);
    } else {
        printf("%d is not a palindrome number.\n", original_number);
    }

    return 0;
}
