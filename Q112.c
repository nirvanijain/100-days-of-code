//Write a program to take an integer array arr as input. The task is to find the maximum sum of any contiguous subarray using Kadane's algorithm. Print the maximum sum as output. If all elements are negative, print the largest (least negative) element.
#include <stdio.h>
#include <limits.h> // Required for INT_MIN

int maxSubarraySum(int arr[], int size) {
    int max_so_far = INT_MIN; // Stores the maximum sum found so far
    int current_max = 0;      // Stores the maximum sum ending at the current position
    int all_negative = 1;     // Flag to check if all elements are negative
    int largest_negative = INT_MIN; // Stores the largest negative element if all are negative

    for (int i = 0; i < size; i++) {
        // Update largest_negative for the all-negative case
        if (arr[i] > largest_negative) {
            largest_negative = arr[i];
        }

        // If a non-negative element is found, it's not an all-negative array
        if (arr[i] >= 0) {
            all_negative = 0;
        }

        current_max += arr[i];

        if (current_max > max_so_far) {
            max_so_far = current_max;
        }

        if (current_max < 0) {
            current_max = 0;
        }
    }

    // If all elements are negative, return the largest (least negative) element
    if (all_negative) {
        return largest_negative;
    } else {
        return max_so_far;
    }
}

int main() {
    int size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size]; // Declare array of given size

    printf("Enter %d integer elements:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    int maxSum = maxSubarraySum(arr, size);
    printf("The maximum contiguous subarray sum is: %d\n", maxSum);

    return 0;
}
