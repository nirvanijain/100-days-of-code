//Count positive, negative, and zero elements in an array
#include <stdio.h>

int main() {
    int arr[] = {2, -1, 5, 0, -3, 8, 0, -7};
    int n = sizeof(arr) / sizeof(arr[0]); // Calculate array size

    int positive_count = 0;
    int negative_count = 0;
    int zero_count = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] > 0) {
            positive_count++;
        } else if (arr[i] < 0) {
            negative_count++;
        } else { // arr[i] == 0
            zero_count++;
        }
    }

    printf("Number of positive elements: %d\n", positive_count);
    printf("Number of negative elements: %d\n", negative_count);
    printf("Number of zero elements: %d\n", zero_count);

    return 0;
}
