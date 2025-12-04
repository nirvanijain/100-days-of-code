//Find the first repeating lowercase alphabet in a string
#include <stdio.h>
#include <string.h>
#include <stdbool.h> // For using bool type

// Function to find the first repeating lowercase alphabet
char findFirstRepeatingLowercase(const char* str) {
    // Array to store the frequency of each lowercase alphabet (a-z)
    // Initialize all counts to 0
    int freq[26] = {0}; 

    int len = strlen(str);

    // Iterate through the string to count character frequencies
    for (int i = 0; i < len; i++) {
        char ch = str[i];
        // Check if the character is a lowercase alphabet
        if (ch >= 'a' && ch <= 'z') {
            freq[ch - 'a']++;
        }
    }

    // Iterate through the string again to find the first character
    // that has a frequency greater than 1
    for (int i = 0; i < len; i++) {
        char ch = str[i];
        if (ch >= 'a' && ch <= 'z') {
            if (freq[ch - 'a'] > 1) {
                return ch; // Found the first repeating lowercase alphabet
            }
        }
    }

    return '\0'; // No repeating lowercase alphabet found
}

int main() {
    char str1[] = "programming";
    char str2[] = "hello world";
    char str3[] = "abcdefg";
    char str4[] = "apple";

    char result1 = findFirstRepeatingLowercase(str1);
    if (result1 != '\0') {
        printf("First repeating lowercase alphabet in \"%s\": %c\n", str1, result1);
    } else {
        printf("No repeating lowercase alphabet found in \"%s\"\n", str1);
    }

    char result2 = findFirstRepeatingLowercase(str2);
    if (result2 != '\0') {
        printf("First repeating lowercase alphabet in \"%s\": %c\n", str2, result2);
    } else {
        printf("No repeating lowercase alphabet found in \"%s\"\n", str2);
    }

    char result3 = findFirstRepeatingLowercase(str3);
    if (result3 != '\0') {
        printf("First repeating lowercase alphabet in \"%s\": %c\n", str3, result3);
    } else {
        printf("No repeating lowercase alphabet found in \"%s\"\n", str3);
    }

    char result4 = findFirstRepeatingLowercase(str4);
    if (result4 != '\0') {
        printf("First repeating lowercase alphabet in \"%s\": %c\n", str4, result4);
    } else {
        printf("No repeating lowercase alphabet found in \"%s\"\n", str4);
    }

    return 0;
}
