//Find the maximum and minimum element in an array
#include <stdio.h>

int main() {
    int arr[] = {12, 5, 23, 8, 17, 3};
    int n = sizeof(arr) / sizeof(arr[0]); // Calculate the number of elements in the array

    if (n == 0) {
        printf("The array is empty.\n");
        return 1; // Indicate an error or handle empty array case
    }

    int min = arr[0]; // Initialize min with the first element
    int max = arr[0]; // Initialize max with the first element

    // Iterate from the second element to the end of the array
    for (int i = 1; i < n; i++) {
        if (arr[i] < min) {
            min = arr[i]; // Update min if a smaller element is found
        }
        if (arr[i] > max) {
            max = arr[i]; // Update max if a larger element is found
        }
    }

    printf("Minimum element: %d\n", min);
    printf("Maximum element: %d\n", max);

    return 0;
}
