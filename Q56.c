//Read and print elements of a one-dimensional array
#include <stdio.h>

int main() {
    int n, i;

    // Prompt the user for the number of elements
    printf("Enter the number of elements for the array: ");
    scanf("%d", &n);

    // Declare an array of size n
    int arr[n];

    // Input elements into the array
    printf("Enter %d integer elements:\n", n);
    for (i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Print the elements of the array
    printf("\nThe elements in the array are: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
