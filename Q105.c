//Write a program to take an integer array nums of size n, and print the majority element. The majority element is the element that appears strictly more than ⌊n / 2⌋ times. Print -1 if no such element exists. Note: Majority Element is not necessarily the element that is present most number of times.
#include <stdio.h>

int findMajorityElement(int nums[], int n) {
    // Step 1: Find a candidate for the majority element
    int candidate = nums[0];
    int count = 1;

    for (int i = 1; i < n; i++) {
        if (nums[i] == candidate) {
            count++;
        } else {
            count--;
        }

        if (count == 0) {
            candidate = nums[i];
            count = 1;
        }
    }

    // Step 2: Verify if the candidate is indeed the majority element
    int majority_count = 0;
    for (int i = 0; i < n; i++) {
        if (nums[i] == candidate) {
            majority_count++;
        }
    }

    if (majority_count > n / 2) {
        return candidate;
    } else {
        return -1;
    }
}

int main() {
    int nums1[] = {3, 2, 3};
    int n1 = sizeof(nums1) / sizeof(nums1[0]);
    printf("Array: ");
    for (int i = 0; i < n1; i++) {
        printf("%d ", nums1[i]);
    }
    printf("\nMajority element: %d\n\n", findMajorityElement(nums1, n1));

    int nums2[] = {2, 2, 1, 1, 1, 2, 2};
    int n2 = sizeof(nums2) / sizeof(nums2[0]);
    printf("Array: ");
    for (int i = 0; i < n2; i++) {
        printf("%d ", nums2[i]);
    }
    printf("\nMajority element: %d\n\n", findMajorityElement(nums2, n2));

    int nums3[] = {1, 2, 3, 4};
    int n3 = sizeof(nums3) / sizeof(nums3[0]);
    printf("Array: ");
    for (int i = 0; i < n3; i++) {
        printf("%d ", nums3[i]);
    }
    printf("\nMajority element: %d\n\n", findMajorityElement(nums3, n3));

    return 0;
}
