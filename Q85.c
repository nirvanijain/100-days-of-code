//Reverse a string
#include <stdio.h>
#include <string.h> // Required for strlen()

int main() {
    char str[100]; // Declare a character array to store the string
    printf("Enter a string: ");
    scanf("%s", str); // Read the string from the user

    int length = strlen(str); // Get the length of the string
    int start = 0;
    int end = length - 1;

    // Loop to swap characters from start and end until they meet in the middle
    while (start < end) {
        char temp = str[start]; // Store the character at 'start' in a temporary variable
        str[start] = str[end];   // Replace the character at 'start' with the character at 'end'
        str[end] = temp;         // Replace the character at 'end' with the stored temporary character

        start++; // Move 'start' pointer one position to the right
        end--;   // Move 'end' pointer one position to the left
    }

    printf("The reversed string is: %s\n", str); // Print the reversed string

    return 0;
}
