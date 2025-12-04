//Write a program to find the HCF (GCD) of two numbers
#include <stdio.h>

// Function to find the GCD using the Euclidean Algorithm (Recursive)
int gcd(int a, int b) {
    if (b == 0) {
        return a; // Base case: when b is 0, a is the GCD
    } else {
        return gcd(b, a % b); // Recursive step: call gcd with b and the remainder of a / b
    }
}

int main() {
    int num1, num2, result;

    // Prompt the user to enter two numbers
    printf("Enter two positive integers: ");
    scanf("%d %d", &num1, &num2);

    // Call the gcd function to find the HCF/GCD
    result = gcd(num1, num2);

    // Print the result
    printf("HCF (GCD) of %d and %d is %d.\n", num1, num2, result);

    return 0;
}
