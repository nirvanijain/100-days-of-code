//Write a Program to take an integer array nums. Print an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i]. The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.
#include <stdio.h>
#include <stdlib.h> // Required for malloc

void productExceptSelf(int* nums, int numsSize, int* answer) {
    // Initialize the answer array with 1s
    // The first pass will store the product of elements to the left of each index
    answer[0] = 1;
    for (int i = 1; i < numsSize; i++) {
        answer[i] = answer[i - 1] * nums[i - 1];
    }

    // The second pass will incorporate the product of elements to the right
    // and update the answer array accordingly
    int rightProduct = 1;
    for (int i = numsSize - 1; i >= 0; i--) {
        answer[i] *= rightProduct; // Multiply current answer (left product) by right product
        rightProduct *= nums[i];   // Update rightProduct for the next iteration
    }
}

int main() {
    int nums[] = {1, 2, 3, 4};
    int numsSize = sizeof(nums) / sizeof(nums[0]);

    // Dynamically allocate memory for the answer array
    int* answer = (int*)malloc(numsSize * sizeof(int));
    if (answer == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    productExceptSelf(nums, numsSize, answer);

    printf("Input array nums: ");
    for (int i = 0; i < numsSize; i++) {
        printf("%d ", nums[i]);
    }
    printf("\n");

    printf("Output array answer: ");
    for (int i = 0; i < numsSize; i++) {
        printf("%d ", answer[i]);
    }
    printf("\n");

    // Free the dynamically allocated memory
    free(answer);
    answer = NULL;

    int nums2[] = {-1, 1, 0, -3, 3};
    int numsSize2 = sizeof(nums2) / sizeof(nums2[0]);
    int* answer2 = (int*)malloc(numsSize2 * sizeof(int));
    if (answer2 == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }
    productExceptSelf(nums2, numsSize2, answer2);

    printf("Input array nums2: ");
    for (int i = 0; i < numsSize2; i++) {
        printf("%d ", nums2[i]);
    }
    printf("\n");

    printf("Output array answer2: ");
    for (int i = 0; i < numsSize2; i++) {
        printf("%d ", answer2[i]);
    }
    printf("\n");

    free(answer2);
    answer2 = NULL;

    return 0;
}
