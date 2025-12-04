//Check if two strings are anagrams of each other.
#include <stdio.h>
#include <string.h>
#include <stdlib.h> // Required for malloc and free if dynamic allocation is used

// Function to check if two strings are anagrams
int areAnagrams(char *str1, char *str2) {
    int count1[256] = {0}; // Array to store frequency of characters in str1
    int count2[256] = {0}; // Array to store frequency of characters in str2
    int i;

    // First, check if the lengths of the strings are equal
    if (strlen(str1) != strlen(str2)) {
        return 0; // Not anagrams if lengths differ
    }

    // Count frequency of characters in str1
    for (i = 0; str1[i] != '\0'; i++) {
        count1[(unsigned char)str1[i]]++;
    }

    // Count frequency of characters in str2
    for (i = 0; str2[i] != '\0'; i++) {
        count2[(unsigned char)str2[i]]++;
    }

    // Compare character counts
    for (i = 0; i < 256; i++) {
        if (count1[i] != count2[i]) {
            return 0; // Not anagrams if any character count mismatches
        }
    }

    return 1; // Strings are anagrams
}

int main() {
    char s1[100], s2[100];

    printf("Enter the first string: ");
    fgets(s1, sizeof(s1), stdin);
    s1[strcspn(s1, "\n")] = '\0'; // Remove trailing newline character

    printf("Enter the second string: ");
    fgets(s2, sizeof(s2), stdin);
    s2[strcspn(s2, "\n")] = '\0'; // Remove trailing newline character

    if (areAnagrams(s1, s2)) {
        printf("\"%s\" and \"%s\" are anagrams.\n", s1, s2);
    } else {
        printf("\"%s\" and \"%s\" are not anagrams.\n", s1, s2);
    }

    return 0;
}
