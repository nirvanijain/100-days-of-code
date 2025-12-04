//Write a program to check if a number is a strong number
#include <stdio.h>

// Function to calculate factorial of a number
long long factorial(int n) {
    long long fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

// Function to check if a number is strong
int isStrong(int num) {
    int originalNum = num;
    long long sumOfFactorials = 0;
    int digit;

    while (num > 0) {
        digit = num % 10; // Extract the last digit
        sumOfFactorials += factorial(digit); // Add factorial of the digit to the sum
        num /= 10; // Remove the last digit
    }

    if (sumOfFactorials == originalNum) {
        return 1; // It's a strong number
    } else {
        return 0; // It's not a strong number
    }
}

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (isStrong(number)) {
        printf("%d is a strong number.\n", number);
    } else {
        printf("%d is not a strong number.\n", number);
    }

    return 0;
}
