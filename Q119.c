//Write a program to take an integer array as input. Only one element will be repeated. Print the repeated element. Try to find the result in one single iteration.
#include <stdio.h>

int main() {
    int n;

    printf("Enter the size of the array (including the repeated element): ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d integers for the array (values from 1 to %d, with one repetition): \n", n, n - 1);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int xor_sum = 0;

    // XOR all elements in the array
    for (int i = 0; i < n; i++) {
        xor_sum ^= arr[i];
    }

    // XOR all numbers from 1 to n-1
    for (int i = 1; i < n; i++) {
        xor_sum ^= i;
    }

    printf("The repeated element is: %d\n", xor_sum);

    return 0;
}
