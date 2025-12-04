//Write a program to input a character and check whether it is a vowel or consonant using if–else.
#include <stdio.h>
#include <ctype.h> // Required for tolower() function

int main() {
    char ch;

    // Prompt the user to enter a character
    printf("Enter an alphabet: ");
    scanf(" %c", &ch); // The space before %c handles any leftover newline characters from previous inputs

    // Convert the character to lowercase to simplify vowel checking
    char lower_ch = tolower(ch);

    // Check if the character is an alphabet first
    if ((lower_ch >= 'a' && lower_ch <= 'z')) {
        // Check if the lowercase character is a vowel
        if (lower_ch == 'a' || lower_ch == 'e' || lower_ch == 'i' || lower_ch == 'o' || lower_ch == 'u') {
            printf("%c is a VOWEL.\n", ch);
        } else {
            printf("%c is a CONSONANT.\n", ch);
        }
    } else {
        printf("%c is not an alphabet.\n", ch);
    }

    return 0;
}
