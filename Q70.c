//Rotate an array to the right by k positions
#include <stdio.h>
#include <stdlib.h> 

void rotateRight(int arr[], int n, int k) {
    if (n == 0 || k == 0) {
        return; // No rotation needed for empty array or k=0
    }

    k = k % n; // Handle k greater than or equal to n

    if (k == 0) {
        return; // No effective rotation after modulo
    }

    // Allocate memory for a temporary array to store the last k elements
    int *temp = (int *)malloc(k * sizeof(int));
    if (temp == NULL) {
        printf("Memory allocation failed!\n");
        return;
    }

    // Copy the last k elements to the temporary array
    for (int i = 0; i < k; i++) {
        temp[i] = arr[n - k + i];
    }

    // Shift the remaining n-k elements to the right
    for (int i = n - k - 1; i >= 0; i--) {
        arr[i + k] = arr[i];
    }

    // Copy the elements from the temporary array to the beginning of the original array
    for (int i = 0; i < k; i++) {
        arr[i] = temp[i];
    }

    free(temp); // Free the allocated memory
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 2; // Rotate by 2 positions to the right

    printf("Original array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    rotateRight(arr, n, k);

    printf("Array after rotating right by %d positions: ", k);
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
