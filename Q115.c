//Write a program to take two strings s and t as inputs (assume all characters are lowercase). The task is to determine if s and t are valid anagrams, meaning they contain the same characters with the same frequencies. Print "Anagram" if they are, otherwise "Not Anagram"
#include <stdio.h>
#include <string.h>
#include <stdlib.h> // For malloc and free, though not strictly necessary for fixed-size arrays

#define ALPHABET_SIZE 26 // For lowercase English alphabet

int main() {
    char s[100]; // Assuming max string length of 99 characters + null terminator
    char t[100];

    printf("Enter the first string (s): ");
    scanf("%s", s);

    printf("Enter the second string (t): ");
    scanf("%s", t);

    // Check if lengths are different; if so, they cannot be anagrams
    if (strlen(s) != strlen(t)) {
        printf("Not Anagram\n");
        return 0;
    }

    int freq_s[ALPHABET_SIZE] = {0}; // Initialize all frequencies to 0
    int freq_t[ALPHABET_SIZE] = {0};

    // Calculate frequencies for string s
    for (int i = 0; s[i] != '\0'; i++) {
        freq_s[s[i] - 'a']++;
    }

    // Calculate frequencies for string t
    for (int i = 0; t[i] != '\0'; i++) {
        freq_t[t[i] - 'a']++;
    }

    // Compare frequency arrays
    int is_anagram = 1; // Assume they are anagrams initially
    for (int i = 0; i < ALPHABET_SIZE; i++) {
        if (freq_s[i] != freq_t[i]) {
            is_anagram = 0; // Frequencies don't match, not an anagram
            break;
        }
    }

    if (is_anagram) {
        printf("Anagram\n");
    } else {
        printf("Not Anagram\n");
    }

    return 0;
}
