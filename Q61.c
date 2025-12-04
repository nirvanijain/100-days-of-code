//Search for an element in an array using linear search
#include <stdio.h>

// Function to perform linear search
int linearSearch(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i; // Return the index if target is found
        }
    }
    return -1; // Return -1 if target is not found
}

int main() {
    int numbers[] = {10, 25, 5, 40, 15, 30};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    int searchElement = 15;

    int result = linearSearch(numbers, size, searchElement);

    if (result != -1) {
        printf("Element %d found at index %d.\n", searchElement, result);
    } else {
        printf("Element %d not found in the array.\n", searchElement);
    }

    searchElement = 50; // Searching for an element not in the array
    result = linearSearch(numbers, size, searchElement);

    if (result != -1) {
        printf("Element %d found at index %d.\n", searchElement, result);
    } else {
        printf("Element %d not found in the array.\n", searchElement);
    }

    return 0;
}
