//Write a Program to take a positive integer n as input, and find the pivot integer x such that the sum of all elements between 1 and x inclusively equals the sum of all elements between x and n inclusively. Print the pivot integer x. If no such integer exists, print -1. Assume that it is guaranteed that there will be at most one pivot integer for the given input
#include <stdio.h>
#include <math.h> // Required for sqrt function

int main() {
    int n;

    // Prompt the user to enter a positive integer
    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    // Check if n is positive
    if (n <= 0) {
        printf("Please enter a positive integer.\n");
        return 1; // Indicate an error
    }

    // Calculate the sum of all elements from 1 to n
    long long total_sum_1_to_n = (long long)n * (n + 1) / 2;

    // The condition for a pivot integer x is:
    // sum(1 to x) = sum(x to n)
    // We know sum(1 to n) = sum(1 to x-1) + x + sum(x+1 to n)
    // And sum(x to n) = x + sum(x+1 to n)
    // So, sum(1 to x) = total_sum_1_to_n - sum(1 to x-1)
    // (x * (x + 1)) / 2 = total_sum_1_to_n - (x * (x - 1)) / 2
    // (x * (x + 1)) / 2 + (x * (x - 1)) / 2 = total_sum_1_to_n
    // (x^2 + x + x^2 - x) / 2 = total_sum_1_to_n
    // 2 * x^2 / 2 = total_sum_1_to_n
    // x^2 = total_sum_1_to_n

    // Calculate the square root of the total sum
    double sqrt_total_sum = sqrt(total_sum_1_to_n);

    // Check if the square root is an integer
    int x = (int)sqrt_total_sum;
    if (x * x == total_sum_1_to_n) {
        printf("%d\n", x);
    } else {
        printf("-1\n");
    }

    return 0;
}
