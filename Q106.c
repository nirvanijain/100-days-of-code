//Write a program to take an array arr[] of integers as input, the task is to find the next greater element for each element of the array in order of their appearance in the array. Next greater element of an element in the array is the nearest element on the right which is greater than the current element. If there does not exist next greater of current element, then next greater element for current element is -1.

//N.B:
//- Print the output for each element in a comma separated fashion.
//- Do not use Stack, use brute force approach (nested loop) to solve.
#include <stdio.h>
#include <stdlib.h> // Required for malloc

int main() {
    int n;

    // Input the size of the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    // Allocate memory for the array
    int *arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    // Input the elements of the array
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Find and print the next greater element for each element
    for (int i = 0; i < n; i++) {
        int nextGreater = -1; // Initialize next greater element to -1
        for (int j = i + 1; j < n; j++) {
            if (arr[j] > arr[i]) {
                nextGreater = arr[j];
                break; // Found the next greater element, so break the inner loop
            }
        }
        printf("%d", nextGreater);
        if (i < n - 1) {
            printf(", "); // Print comma separator for all but the last element
        }
    }
    printf("\n"); // Newline at the end

    // Free the allocated memory
    free(arr);

    return 0;
}

