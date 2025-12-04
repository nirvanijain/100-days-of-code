//Insert an element in an array at a given position
#include <stdio.h>

int main() {
    int arr[100]; // Declare an array with a maximum capacity of 100
    int n, element, pos, i;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to be inserted: ");
    scanf("%d", &element);

    printf("Enter the position (0 to %d) to insert the element: ", n);
    scanf("%d", &pos);

    // Validate the position
    if (pos < 0 || pos > n) {
        printf("Invalid position!\n");
    } else {
        // Shift elements to the right to make space for the new element
        for (i = n; i > pos; i--) {
            arr[i] = arr[i - 1];
        }

        // Insert the new element
        arr[pos] = element;
        n++; // Increment the number of elements

        printf("Array after insertion:\n");
        for (i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }

    return 0;
}
