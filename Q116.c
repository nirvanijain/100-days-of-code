//Write a program to take an integer array nums which contains only positive integers, and an integer target as inputs. The goal is to find two distinct indices i and j in the array such that nums[i] + nums[j] equals the target. Assume exactly one solution exists and return the indices in any order. Print the two indices separated by a space as output. If no solution exists, print "-1 -1".
#include <stdio.h>

void findTwoSum(int nums[], int size, int target) {
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) { // Start j from i+1 to ensure distinct indices
            if (nums[i] + nums[j] == target) {
                printf("%d %d\n", i, j);
                return; // Found the solution, exit
            }
        }
    }
    // If no solution is found after checking all pairs
    printf("-1 -1\n");
}

int main() {
    // Example usage:
    int nums1[] = {2, 7, 11, 15};
    int target1 = 9;
    int size1 = sizeof(nums1) / sizeof(nums1[0]);
    printf("Input: nums = {2, 7, 11, 15}, target = 9\nOutput: ");
    findTwoSum(nums1, size1, target1); // Expected output: 0 1

    int nums2[] = {3, 2, 4};
    int target2 = 6;
    int size2 = sizeof(nums2) / sizeof(nums2[0]);
    printf("Input: nums = {3, 2, 4}, target = 6\nOutput: ");
    findTwoSum(nums2, size2, target2); // Expected output: 1 2

    int nums3[] = {1, 2, 3, 4, 5};
    int target3 = 10; // No solution for this target
    int size3 = sizeof(nums3) / sizeof(nums3[0]);
    printf("Input: nums = {1, 2, 3, 4, 5}, target = 10\nOutput: ");
    findTwoSum(nums3, size3, target3); // Expected output: -1 -1

    return 0;
}
