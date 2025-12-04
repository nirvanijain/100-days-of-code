//Count frequency of a given character in a string
#include <stdio.h>

int main() {
    char str[1000]; // Declare a character array to store the string
    char ch;        // Declare a character variable to store the character to find
    int count = 0;  // Initialize a counter for the character frequency
    int i = 0;      // Initialize a loop counter

    // Prompt the user to enter a string
    printf("Enter a string: ");
    // Read the string from the user, including spaces, and store it in 'str'
    // fgets is preferred over gets for safety as it prevents buffer overflows
    fgets(str, sizeof(str), stdin);

    // Prompt the user to enter the character to find
    printf("Enter a character to find its frequency: ");
    // Read the character from the user
    // Note: scanf("%c", &ch) might consume the newline character left by fgets,
    // so using " %c" (with a space before %c) is a common way to handle this.
    scanf(" %c", &ch); 

    // Loop through the string until the null terminator ('\0') is encountered
    while (str[i] != '\0') {
        // Check if the current character in the string matches the target character
        if (str[i] == ch) {
            count++; // If a match is found, increment the counter
        }
        i++; // Move to the next character in the string
    }

    // Print the frequency of the character
    printf("Frequency of '%c' in the string is: %d\n", ch, count);

    return 0; // Indicate successful program execution
}
