//Count characters in a string without using built-in length functions
#include <stdio.h>

int main() {
    char str[100]; // Declare a character array to store the string
    int count = 0; // Initialize a counter for the characters
    int i = 0;     // Initialize a loop counter

    printf("Enter a string: ");
    scanf("%s", str); // Read the string from the user

    // Loop through the string until the null terminator ('\0') is encountered
    while (str[i] != '\0') {
        count++; // Increment the character count
        i++;     // Move to the next character
    }

    printf("Number of characters in the string: %d\n", count);

    return 0;
}
