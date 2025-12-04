//Write a program to print the sum of the first n odd numbers
#include <stdio.h>

int main() {
    int n; // Variable to store the number of odd terms
    int sum = 0; // Variable to store the sum of odd numbers
    int i; // Loop counter

    // Prompt the user to enter the value of n
    printf("Enter the number of odd terms (n): ");
    scanf("%d", &n);

    // Validate input: ensure n is a positive integer
    if (n <= 0) {
        printf("Please enter a positive integer for n.\n");
        return 1; // Indicate an error
    }

    // Calculate the sum of the first n odd numbers
    // The k-th odd number is given by 2*k - 1
    for (i = 1; i <= n; i++) {
        sum += (2 * i - 1);
    }

    // Print the sum
    printf("The sum of the first %d odd numbers is: %d\n", n, sum);

    return 0; // Indicate successful execution
}
