//Find the sum of all elements in a matrix
#include <stdio.h>

int sumArrayElements(int arr[], int n) {
    int sum = 0; // Initialize sum to 0
    for (int i = 0; i < n; i++) {
        sum += arr[i]; // Add each element to sum
    }
    return sum; // Return the calculated sum
}

int main() {
    int arr[] = {10, 20, 30, 40, 50}; // Example array
    int n = sizeof(arr) / sizeof(arr[0]); // Calculate the number of elements

    int totalSum = sumArrayElements(arr, n); // Call the function to get the sum

    printf("The sum of array elements is: %d\n", totalSum); // Print the result

    return 0;
}
