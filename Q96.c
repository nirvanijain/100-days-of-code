//Reverse each word in a sentence without changing the word order
#include <stdio.h>
#include <string.h>

// Function to reverse a substring
void reverse(char* begin, char* end) {
    char temp;
    while (begin < end) {
        temp = *begin;
        *begin = *end;
        *end = temp;
        begin++;
        end--;
    }
}

// Function to reverse each word in a sentence
void reverseWords(char* s) {
    char* word_begin = s;
    char* temp = s;

    while (*temp) {
        // Find the beginning of a word
        if (word_begin == NULL && *temp != ' ') {
            word_begin = temp;
        }

        // If a word has been found and a space or null terminator is encountered,
        // it means the end of the word has been reached. Reverse the word.
        if (word_begin && (*(temp + 1) == ' ' || *(temp + 1) == '\0')) {
            reverse(word_begin, temp);
            word_begin = NULL; // Reset for the next word
        }
        temp++;
    }
}

int main() {
    char sentence[] = "This is a test sentence";
    printf("Original sentence: %s\n", sentence);

    reverseWords(sentence);
    printf("Sentence with reversed words: %s\n", sentence);

    char another_sentence[] = "Hello World";
    printf("Original sentence: %s\n", another_sentence);

    reverseWords(another_sentence);
    printf("Sentence with reversed words: %s\n", another_sentence);

    return 0;
}
