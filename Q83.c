//Count vowels and consonants in a string
#include <stdio.h>
#include <string.h> // Required for strlen()
#include <ctype.h>  // Required for tolower()

int main() {
    char str[100]; // Declare a character array to store the string
    int vowels = 0;
    int consonants = 0;
    int i;

    printf("Enter a string: ");
    // Use fgets for safer input compared to gets()
    // It prevents buffer overflow by limiting the input size
    fgets(str, sizeof(str), stdin);

    // Iterate through each character of the string
    // strlen(str) returns the length of the string
    for (i = 0; i < strlen(str); i++) {
        // Convert the character to lowercase for easier comparison
        char ch = tolower(str[i]);

        // Check if the character is an alphabet
        if (ch >= 'a' && ch <= 'z') {
            // Check if the character is a vowel
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vowels++;
            } else {
                // If it's an alphabet and not a vowel, it's a consonant
                consonants++;
            }
        }
        // Other characters (spaces, numbers, special characters) are ignored
    }

    printf("Number of Vowels: %d\n", vowels);
    printf("Number of Consonants: %d\n", consonants);

    return 0;
}
