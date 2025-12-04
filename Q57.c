//Find the sum of array elements
#include <stdio.h>

// Function to calculate the sum of array elements
int sumArrayElements(int arr[], int n) {
    int sum = 0; // Initialize sum to 0
    for (int i = 0; i < n; i++) {
        sum += arr[i]; // Add each element to the sum
    }
    return sum; // Return the calculated sum
}

int main() {
    int arr[] = {1, 1, 1, }; // Example array
    int n = sizeof(arr) / sizeof(arr[0]); // Calculate the number of elements in the array

    // Call the function to get the sum
    int totalSum = sumArrayElements(arr, n);

    // Print the result
    printf("Sum of array elements: %d\n", totalSum);

    return 0;
}
