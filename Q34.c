//Write a program to check if a number is prime
#include <stdio.h>
#include <math.h> // Required for sqrt() function

int main() {
    int num, i, isPrime = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // Handle special cases: 0, 1, and negative numbers
    if (num <= 1) {
        isPrime = 0; // Numbers less than or equal to 1 are not prime
    } else {
        // Check for divisibility from 2 up to the square root of the number
        for (i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                isPrime = 0; // If divisible, it's not prime
                break;       // Exit the loop as soon as a factor is found
            }
        }
    }

    // Print the result based on the isPrime flag
    if (isPrime == 1) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }

    return 0;
}
