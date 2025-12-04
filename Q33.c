//Write a program to check if a number is an Armstrong number
#include <stdio.h>
#include <math.h> // Required for the pow() function

int main() {
    int number, originalNumber, remainder, result = 0, n = 0;

    // Input from the user
    printf("Enter a number: ");
    scanf("%d", &number);

    originalNumber = number;

    // Count the number of digits
    // A temporary variable 'temp' can be used here to avoid modifying 'originalNumber' prematurely.
    int temp = number; 
    while (temp != 0) {
        temp /= 10;
        n++;
    }

    // Reset originalNumber for digit extraction and sum calculation
    temp = number; 

    // Calculate the sum of the nth powers of each digit
    while (temp != 0) {
        remainder = temp % 10;
        result += pow(remainder, n); // pow() returns a double, so careful with type casting if needed
        temp /= 10;
    }

    // Check if the number is an Armstrong number
    if (result == number) {
        printf("%d is an Armstrong number.\n", number);
    } else {
        printf("%d is not an Armstrong number.\n", number);
    }

    return 0;
}
