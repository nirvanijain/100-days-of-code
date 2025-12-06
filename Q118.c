//Write a program to take an input array of size n. The array should contain all the integers between 0 to n except for one. Print that missing number
#include <stdio.h>

int main() {
    int n;

    // Prompt the user for the size of the array
    printf("Enter the size of the array (n): ");
    scanf("%d", &n);

    // Declare an array of size n-1 (since one number is missing)
    int arr[n - 1];

    // Prompt the user to enter the elements of the array
    printf("Enter %d elements (integers from 0 to %d, with one missing):\n", n - 1, n);
    for (int i = 0; i < n - 1; i++) {
        scanf("%d", &arr[i]);
    }

    // Calculate the expected sum of numbers from 0 to n
    int expected_sum = n * (n + 1) / 2; // Sum of 0 to n

    // Calculate the actual sum of elements in the array
    int actual_sum = 0;
    for (int i = 0; i < n - 1; i++) {
        actual_sum += arr[i];
    }

    // The missing number is the difference between the expected and actual sum
    int missing_number = expected_sum - actual_sum;

    // Print the missing number
    printf("The missing number is: %d\n", missing_number);

    return 0;
}
