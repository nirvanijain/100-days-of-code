//Remove all vowels from a string
#include <stdio.h>
#include <string.h>

int isVowel(char c) {
    c = tolower(c); // Convert to lowercase for case-insensitive check
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

int main() {
    char str[100]; // Declare a character array to store the string
    int i, j;
    int len;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // Read the string, including spaces

    // Remove the trailing newline character if present from fgets
    len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
        len--;
    }

    for (i = 0; i < len; i++) {
        if (isVowel(str[i])) {
            // Shift characters to the left to remove the vowel
            for (j = i; j < len; j++) {
                str[j] = str[j + 1];
            }
            i--; // Decrement i to recheck the current position after shifting
            len--; // Decrement length as a character has been removed
        }
    }

    printf("String after removing vowels: %s\n", str);

    return 0;
}
