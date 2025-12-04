//Delete an element from an array
#include <stdio.h>

void deleteElement(int arr[], int *size, int index) {
    if (index < 0 || index >= *size) {
        printf("Invalid index for deletion.\n");
        return;
    }

    // Shift elements to the left
    for (int i = index; i < *size - 1; i++) {
        arr[i] = arr[i + 1];
    }

    // Decrement the size of the array
    (*size)--;
}

int main() {
    int arr[100] = {10, 20, 30, 40, 50};
    int size = 5;
    int indexToDelete = 2; // Delete element at index 2 (value 30)

    printf("Original array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    deleteElement(arr, &size, indexToDelete);

    printf("Array after deletion: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
