//Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.
#include <stdio.h>
#include <string.h>
#include <stdbool.h> // For using boolean type

int lengthOfLongestSubstring(char *s) {
    int n = strlen(s);
    if (n == 0) {
        return 0;
    }

    int maxLength = 0;
    int left = 0;
    bool visited[256] = {false}; // Assuming ASCII characters

    for (int right = 0; right < n; right++) {
        // If the current character is already in the window,
        // move the left pointer to remove the repeating character
        while (visited[(unsigned char)s[right]] == true) {
            visited[(unsigned char)s[left]] = false;
            left++;
        }
        // Add the current character to the window
        visited[(unsigned char)s[right]] = true;
        // Update the maximum length
        if (right - left + 1 > maxLength) {
            maxLength = right - left + 1;
        }
    }
    return maxLength;
}

int main() {
    char s[100]; // Assuming maximum string length of 99 characters + null terminator

    printf("Enter a string: ");
    scanf("%s", s);

    int length = lengthOfLongestSubstring(s);
    printf("Length of the longest substring without repeating characters: %d\n", length);

    return 0;
}
