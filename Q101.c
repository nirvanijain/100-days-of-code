//Write a Program to take a sorted array(say nums[]) and an integer (say target) as inputs. The elements in the sorted array might be repeated. You need to print the first and last occurrence of the target and print the index of first and last occurrence. Print -1, -1 if the target is not present
#include <stdio.h>

// Function to find the first occurrence of the target
int findFirstOccurrence(int nums[], int size, int target) {
    int low = 0;
    int high = size - 1;
    int firstIndex = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (nums[mid] == target) {
            firstIndex = mid;
            high = mid - 1; // Try to find an earlier occurrence
        } else if (nums[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return firstIndex;
}

// Function to find the last occurrence of the target
int findLastOccurrence(int nums[], int size, int target) {
    int low = 0;
    int high = size - 1;
    int lastIndex = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (nums[mid] == target) {
            lastIndex = mid;
            low = mid + 1; // Try to find a later occurrence
        } else if (nums[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return lastIndex;
}

int main() {
    int nums[] = {5, 7, 7, 8, 8, 10};
    int size = sizeof(nums) / sizeof(nums[0]);
    int target = 8; // Example target

    int first = findFirstOccurrence(nums, size, target);
    int last = findLastOccurrence(nums, size, target);

    printf("For target %d:\n", target);
    if (first != -1) {
        printf("First occurrence at index: %d\n", first);
        printf("Last occurrence at index: %d\n", last);
    } else {
        printf("Target not found. Indices: %d, %d\n", first, last);
    }

    // Test with a target not in the array
    target = 6;
    first = findFirstOccurrence(nums, size, target);
    last = findLastOccurrence(nums, size, target);

    printf("\nFor target %d:\n", target);
    if (first != -1) {
        printf("First occurrence at index: %d\n", first);
        printf("Last occurrence at index: %d\n", last);
    } else {
        printf("Target not found. Indices: %d, %d\n", first, last);
    }

    // Test with a target that occurs only once
    target = 5;
    first = findFirstOccurrence(nums, size, target);
    last = findLastOccurrence(nums, size, target);

    printf("\nFor target %d:\n", target);
    if (first != -1) {
        printf("First occurrence at index: %d\n", first);
        printf("Last occurrence at index: %d\n", last);
    } else {
        printf("Target not found. Indices: %d, %d\n", first, last);
    }

    return 0;
}
