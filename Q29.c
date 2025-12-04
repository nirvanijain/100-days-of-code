//Write a program to calculate the factorial of a number
#include <stdio.h>

int main() {
    int num;
    unsigned long long factorial = 1; // Use unsigned long long to handle larger factorials

    printf("Enter a non-negative integer: ");
    scanf("%d", &num);

    // Check for negative input
    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } 
    // Handle the base case for 0!
    else if (num == 0) {
        printf("The factorial of 0 is 1.\n");
    } 
    // Calculate factorial for positive numbers
    else {
        for (int i = 1; i <= num; i++) {
            factorial *= i; // factorial = factorial * i;
        }
        printf("The factorial of %d is %llu.\n", num, factorial);
    }

    return 0;
}
