//Write a program to take an integer array arr and an integer k as inputs. The task is to find the first negative integer in each subarray of size k moving from left to right. If no negative exists in a window, print "0" for that window. Print the results separated by spaces as output.
#include <stdio.h>
#include <stdlib.h> // Required for malloc and free

void findFirstNegative(int arr[], int n, int k) {
    // Iterate through the array to process each window of size k
    for (int i = 0; i <= n - k; i++) {
        int firstNegativeFound = 0; // Flag to check if a negative number is found in the current window

        // Iterate within the current window
        for (int j = 0; j < k; j++) {
            if (arr[i + j] < 0) {
                printf("%d ", arr[i + j]); // Print the first negative number
                firstNegativeFound = 1;
                break; // Exit the inner loop once the first negative is found
            }
        }

        // If no negative number was found in the current window, print "0"
        if (!firstNegativeFound) {
            printf("0 ");
        }
    }
    printf("\n"); // Print a newline at the end for better formatting
}

int main() {
    int n, k;

    // Get the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    // Dynamically allocate memory for the array
    int *arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed.\n");
        return 1; // Indicate an error
    }

    // Get array elements from the user
    printf("Enter %d integer elements for the array:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Get the window size k
    printf("Enter the window size (k): ");
    scanf("%d", &k);

    // Validate k
    if (k <= 0 || k > n) {
        printf("Invalid window size k. It must be greater than 0 and less than or equal to the array size.\n");
        free(arr); // Free allocated memory before exiting
        return 1; // Indicate an error
    }

    printf("First negative integers in each subarray of size %d:\n", k);
    findFirstNegative(arr, n, k);

    free(arr); // Free the dynamically allocated memory
    return 0; // Indicate successful execution
}
