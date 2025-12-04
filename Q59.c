//count even and odd numbers in an array in c 
#include <stdio.h>

int main() {
    int n; // Size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n]; // Declare the array
    printf("Enter the array elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int even_count = 0; // Counter for even numbers
    int odd_count = 0;  // Counter for odd numbers

    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) { // Check if the number is even
            even_count++;
        } else { // If not even, it's odd
            odd_count++;
        }
    }

    printf("Number of even elements: %d\n", even_count);
    printf("Number of odd elements: %d\n", odd_count);

    return 0;
}
