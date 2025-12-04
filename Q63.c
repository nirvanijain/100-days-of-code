//merge two arrays
#include <stdio.h>
#include <stdlib.h> // For malloc

void mergeUnsortedArrays(int arr1[], int size1, int arr2[], int size2, int result[]) {
    int i, j;

    // Copy elements of arr1 to result
    for (i = 0; i < size1; i++) {
        result[i] = arr1[i];
    }

    // Copy elements of arr2 to result, starting after arr1's elements
    for (j = 0; j < size2; j++) {
        result[size1 + j] = arr2[j];
    }
}

int main() {
    int arr1[] = {1, 3, 5};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);

    int arr2[] = {2, 4, 6, 8};
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    int totalSize = size1 + size2;
    int *mergedArray = (int *)malloc(totalSize * sizeof(int)); // Dynamic allocation

    if (mergedArray == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    mergeUnsortedArrays(arr1, size1, arr2, size2, mergedArray);

    printf("Merged Array: ");
    for (int i = 0; i < totalSize; i++) {
        printf("%d ", mergedArray[i]);
    }
    printf("\n");

    free(mergedArray); // Free dynamically allocated memory
    return 0;
}
