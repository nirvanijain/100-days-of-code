//Write a Program to take a sorted array arr[] and an integer x as input, find the index (0-based) of the smallest element in arr[] that is greater than or equal to x and print it. This element is called the ceil of x. If such an element does not exist, print -1. Note: In case of multiple occurrences of ceil of x, return the index of the first occurrence.
#include <stdio.h>

// Function to find the index of the ceil of x in a sorted array
int findCeilIndex(int arr[], int n, int x) {
    // If x is smaller than or equal to the first element, the ceil is the first element
    if (x <= arr[0]) {
        return 0;
    }

    // If x is greater than the last element, no ceil exists
    if (x > arr[n - 1]) {
        return -1;
    }

    int low = 0;
    int high = n - 1;
    int ans_index = -1; // Stores the potential index of the ceil

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == x) {
            // Found x, which is also its own ceil. Return the first occurrence.
            // We still need to check if there are smaller indices with the same value
            ans_index = mid;
            high = mid - 1; 
        } else if (arr[mid] < x) {
            // Current element is smaller than x, so the ceil must be in the right half
            low = mid + 1;
        } else { // arr[mid] > x
            // Current element is a potential ceil. Store its index and search in the left half
            // to find a smaller or equal ceil (first occurrence).
            ans_index = mid;
            high = mid - 1;
        }
    }
    return ans_index;
}

int main() {
    int arr[] = {1, 2, 8, 10, 10, 12, 19};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 8; // The integer for which to find the ceil

    int index = findCeilIndex(arr, n, x);

    if (index == -1) {
        printf("Ceiling of %d does not exist in the array.\n", x);
    } else {
        printf("The index of the smallest element greater than or equal to %d (ceil) is: %d\n", x, index);
        printf("The ceil value is: %d\n", arr[index]);
    }

    // Test cases
    x = 3;
    index = findCeilIndex(arr, n, x);
    if (index == -1) {
        printf("Ceiling of %d does not exist in the array.\n", x);
    } else {
        printf("The index of the smallest element greater than or equal to %d (ceil) is: %d\n", x, index);
        printf("The ceil value is: %d\n", arr[index]);
    }

    x = 20;
    index = findCeilIndex(arr, n, x);
    if (index == -1) {
        printf("Ceiling of %d does not exist in the array.\n", x);
    } else {
        printf("The index of the smallest element greater than or equal to %d (ceil) is: %d\n", x, index);
        printf("The ceil value is: %d\n", arr[index]);
    }

    x = 1;
    index = findCeilIndex(arr, n, x);
    if (index == -1) {
        printf("Ceiling of %d does not exist in the array.\n", x);
    } else {
        printf("The index of the smallest element greater than or equal to %d (ceil) is: %d\n", x, index);
        printf("The ceil value is: %d\n", arr[index]);
    }

    return 0;
}
