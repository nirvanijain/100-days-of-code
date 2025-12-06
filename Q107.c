//Write a program to take an array arr[] of integers as input, the task is to find the previous greater element for each element of the array in order of their appearance in the array. Previous greater element of an element in the array is the nearest element on the left which is greater than the current element. If there does not exist next greater of current element, then previous greater element for current element is -1.

//N.B:
//- Print the output for each element in a comma separated fashion.
//- Do not use Stack, use brute force approach (nested loop) to solve.
#include <stdio.h>

void findPreviousGreaterElements(int arr[], int n) {
    int i, j;
    for (i = 0; i < n; i++) {
        int previousGreater = -1; // Initialize with -1
        // Iterate through elements to the left of the current element
        for (j = i - 1; j >= 0; j--) {
            if (arr[j] > arr[i]) {
                previousGreater = arr[j];
                break; // Found the nearest greater element, so break
            }
        }
        // Print the previous greater element, followed by a comma if not the last element
        printf("%d", previousGreater);
        if (i < n - 1) {
            printf(", ");
        }
    }
    printf("\n"); // Print a newline at the end
}

int main() {
    int n;

    // Get the size of the array from the user
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n]; // Declare array of size n

    // Get array elements from the user
    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Previous Greater Elements: ");
    findPreviousGreaterElements(arr, n);

    return 0;
}
