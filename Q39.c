//Write a program to find the product of odd digits of a number
#include <stdio.h>

int main() {
    int num, digit;
    long long product = 1; // Use long long to handle potential larger products

    printf("Enter an integer: ");
    scanf("%d", &num);

    if (num == 0) { // Special case for 0
        printf("Product of odd digits: 0\n");
        return 0;
    }
    
    // Handle negative numbers by converting to positive for digit extraction
    if (num < 0) {
        num = -num;
    }

    int hasOddDigit = 0; // Flag to check if any odd digit was found

    while (num > 0) {
        digit = num % 10; // Get the last digit
        if (digit % 2 != 0) { // Check if the digit is odd
            product *= digit; // Multiply if it's odd
            hasOddDigit = 1; // Set flag to true
        }
        num /= 10; // Remove the last digit
    }

    if (hasOddDigit) {
        printf("Product of odd digits: %lld\n", product);
    } else {
        printf("No odd digits found in the number.\n");
    }

    return 0;
}
