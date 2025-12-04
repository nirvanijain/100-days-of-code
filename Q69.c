//Find the second largest element in an array
#include <stdio.h>
#include <limits.h> 

int findSecondLargest(int arr[], int n) {
    if (n < 2) {
        printf("Array must have at least two elements.\n");
        return -1; // Indicate an error or no second largest
    }

    int largest = INT_MIN;
    int secondLargest = INT_MIN;

    for (int i = 0; i < n; i++) {
        if (arr[i] > largest) {
            secondLargest = largest; // The old largest becomes the second largest
            largest = arr[i];        // The current element is the new largest
        } else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i]; // The current element is greater than secondLargest but not largest
        }
    }

    if (secondLargest == INT_MIN) {
        printf("No distinct second largest element found (e.g., all elements are the same).\n");
        return -1; // Indicate no distinct second largest
    }

    return secondLargest;
}

int main() {
    int arr1[] = {12, 35, 1, 10, 34, 1};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    printf("Second largest in arr1: %d\n", findSecondLargest(arr1, n1));

    int arr2[] = {5, 5, 5, 5};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    printf("Second largest in arr2: %d\n", findSecondLargest(arr2, n2));

    int arr3[] = {10};
    int n3 = sizeof(arr3) / sizeof(arr3[0]);
    printf("Second largest in arr3: %d\n", findSecondLargest(arr3, n3));

    return 0;
}
