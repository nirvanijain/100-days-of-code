//Write a program to take an integer array arr and an integer k as inputs. The task is to find the kth smallest element in the array. Print the kth smallest element as output.
#include <stdio.h>
#include <stdlib.h> // Required for qsort

// Comparison function for qsort (ascending order)
int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    int n, k;

    // Get the size of the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    // Declare the array
    int arr[n];

    // Get array elements from the user
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Get the value of k
    printf("Enter the value of k (to find the kth smallest element): ");
    scanf("%d", &k);

    // Validate k
    if (k <= 0 || k > n) {
        printf("Invalid value of k. k must be between 1 and the number of elements in the array.\n");
        return 1; // Indicate an error
    }

    // Sort the array in ascending order
    qsort(arr, n, sizeof(int), compare);

    // The kth smallest element will be at index k-1 (due to 0-based indexing)
    printf("The %dth smallest element is: %d\n", k, arr[k - 1]);

    return 0; // Indicate successful execution
}
