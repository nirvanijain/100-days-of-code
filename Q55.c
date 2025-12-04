//Write a program to print all the prime numbers from 1 to n.
#include <stdio.h>

int main() {
    int n, i, j, is_prime;

    // Prompt the user to enter the upper limit
    printf("Enter a positive integer (n): ");
    scanf("%d", &n);

    printf("Prime numbers from 1 to %d are: ", n);

    // Iterate from 2 to n to check each number for primality
    for (i = 2; i <= n; i++) {
        is_prime = 1; // Assume the current number is prime

        // Check for divisibility from 2 up to the square root of i
        // (Optimization: we only need to check divisors up to sqrt(i))
        for (j = 2; j * j <= i; j++) { 
            if (i % j == 0) {
                is_prime = 0; // If divisible, it's not prime
                break;        // Exit the inner loop as it's not prime
            }
        }

        // If is_prime is still 1, the number is prime
        if (is_prime == 1) {
            printf("%d ", i);
        }
    }

    printf("\n"); // Print a newline at the end for better formatting

    return 0; // Indicate successful execution
}
