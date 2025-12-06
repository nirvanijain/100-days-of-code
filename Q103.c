//Write a Program to take an array of integers as input, calculate the pivot index of this array. The pivot index is the index where the sum of all the numbers strictly to the left of the index is equal to the sum of all the numbers strictly to the index's right. If the index is on the left edge of the array, then the left sum is 0 because there are no elements to the left. This also applies to the right edge of the array. Print the leftmost pivot index. If no such index exists, print -1.
#include <stdio.h>
#include <stdlib.h> // Required for malloc and free

int findPivotIndex(int* nums, int size) {
    if (size == 0) {
        return -1; // No pivot in an empty array
    }

    long long totalSum = 0;
    for (int i = 0; i < size; i++) {
        totalSum += nums[i];
    }

    long long leftSum = 0;
    for (int i = 0; i < size; i++) {
        // The sum of elements strictly to the right of index i
        // is totalSum - leftSum - nums[i]
        if (leftSum == (totalSum - leftSum - nums[i])) {
            return i; // Found the leftmost pivot index
        }
        leftSum += nums[i];
    }

    return -1; // No pivot index found
}

int main() {
    int size;

    // Get the size of the array from the user
    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);

    if (size < 0) {
        printf("Array size cannot be negative.\n");
        return 1; // Indicate an error
    }

    // Dynamically allocate memory for the array
    int* nums = (int*)malloc(size * sizeof(int));
    if (nums == NULL) {
        printf("Memory allocation failed.\n");
        return 1; // Indicate an error
    }

    // Get array elements from the user
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &nums[i]);
    }

    int pivotIndex = findPivotIndex(nums, size);
    printf("%d\n", pivotIndex);

    // Free the dynamically allocated memory
    free(nums);

    return 0;
}
