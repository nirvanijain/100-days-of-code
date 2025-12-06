//Write a program to take an integer array arr and an integer k as inputs. The task is to find the maximum element in each subarray of size k moving from left to right. Print the maximum elements for each window separated by spaces as output
#include <stdio.h>

void printKMax(int arr[], int n, int k) {
    int i, j;
    // Iterate through all possible starting positions of the subarrays
    for (i = 0; i <= n - k; i++) {
        int currentMax = arr[i]; // Initialize currentMax with the first element of the window
        // Iterate through the current window to find the maximum element
        for (j = 1; j < k; j++) {
            if (arr[i + j] > currentMax) {
                currentMax = arr[i + j];
            }
        }
        printf("%d ", currentMax); // Print the maximum element of the current window
    }
    printf("\n"); // Print a newline character at the end
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = sizeof(arr) / sizeof(arr[0]); // Calculate the size of the array
    int k = 3; // Define the window size

    printf("Maximum elements in each window of size %d: ", k);
    printKMax(arr, n, k);

    int arr2[] = {4, 0, -1, 3, 5, 3, 6, 8};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    int k2 = 3;

    printf("Maximum elements in each window of size %d: ", k2);
    printKMax(arr2, n2, k2);

    return 0;
}
