//Find the longest word in a sentence
#include <stdio.h>
#include <string.h>
#include <stdlib.h> // For malloc and free

char* findLongestWord(const char* sentence) {
    if (sentence == NULL || *sentence == '\0') {
        return NULL; // Handle empty or null sentence
    }

    int maxLength = 0;
    int currentLength = 0;
    int longestWordStartIndex = 0;
    int currentWordStartIndex = 0;

    int i = 0;
    while (sentence[i] != '\0') {
        if (sentence[i] != ' ' && sentence[i] != '\t' && sentence[i] != '\n') {
            // Character is part of a word
            currentLength++;
        } else {
            // End of a word (space, tab, or newline)
            if (currentLength > maxLength) {
                maxLength = currentLength;
                longestWordStartIndex = currentWordStartIndex;
            }
            currentLength = 0;
            currentWordStartIndex = i + 1; // Start of the next potential word
        }
        i++;
    }

    // Check the last word in case there's no trailing space
    if (currentLength > maxLength) {
        maxLength = currentLength;
        longestWordStartIndex = currentWordStartIndex;
    }

    if (maxLength == 0) {
        return NULL; // No words found
    }

    // Allocate memory for the longest word
    char* longestWord = (char*)malloc((maxLength + 1) * sizeof(char));
    if (longestWord == NULL) {
        perror("Memory allocation failed");
        return NULL;
    }

    // Copy the longest word
    strncpy(longestWord, sentence + longestWordStartIndex, maxLength);
    longestWord[maxLength] = '\0'; // Null-terminate the string

    return longestWord;
}

int main() {
    char sentence1[] = "This is a sample sentence with some long words.";
    char sentence2[] = "Short";
    char sentence3[] = "One two three four five six seven";
    char sentence4[] = "    "; // Only spaces

    char* longest1 = findLongestWord(sentence1);
    char* longest2 = findLongestWord(sentence2);
    char* longest3 = findLongestWord(sentence3);
    char* longest4 = findLongestWord(sentence4);

    if (longest1) {
        printf("Longest word in \"%s\": %s\n", sentence1, longest1);
        free(longest1);
    }
    if (longest2) {
        printf("Longest word in \"%s\": %s\n", sentence2, longest2);
        free(longest2);
    }
    if (longest3) {
        printf("Longest word in \"%s\": %s\n", sentence3, longest3);
        free(longest3);
    }
    if (longest4) {
        printf("Longest word in \"%s\": %s\n", sentence4, longest4);
        free(longest4);
    } else {
        printf("No words found in \"%s\"\n", sentence4);
    }

    return 0;
}
