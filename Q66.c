//Insert an element in a sorted array at the appropriate position
#include <stdio.h>

void insertSorted(int arr[], int *size, int element) {
    int i;
    // Find the position to insert the element
    for (i = *size - 1; (i >= 0 && arr[i] > element); i--) {
        arr[i + 1] = arr[i]; // Shift elements to the right
    }
    arr[i + 1] = element; // Insert the new element
    (*size)++; // Increment the size of the array
}

// Function to print the array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[100] = {10, 20, 30, 40, 50}; // Example sorted array
    int size = 5; // Current number of elements
    int elementToInsert = 35; // Element to be inserted

    printf("Original array: ");
    printArray(arr, size);

    insertSorted(arr, &size, elementToInsert);

    printf("Array after insertion: ");
    printArray(arr, size);

    // Another insertion
    elementToInsert = 5;
    insertSorted(arr, &size, elementToInsert);
    printf("Array after another insertion: ");
    printArray(arr, size);

    return 0;
}
