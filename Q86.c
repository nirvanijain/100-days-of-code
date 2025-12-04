//Check if a string is a palindrome
#include <stdio.h>
#include <string.h>

int main() {
    char str[100]; // Declare a character array to store the string
    int i, len;
    int isPalindrome = 1; // Flag to indicate if the string is a palindrome (1 for true, 0 for false)

    printf("Enter a string: ");
    scanf("%s", str); // Read the string input from the user

    len = strlen(str); // Get the length of the string

    // Loop through half of the string, comparing characters from both ends
    for (i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1]) {
            isPalindrome = 0; // If characters don't match, set flag to false
            break; // Exit the loop as it's not a palindrome
        }
    }

    // Print the result based on the isPalindrome flag
    if (isPalindrome) {
        printf("\"%s\" is a palindrome.\n", str);
    } else {
        printf("\"%s\" is not a palindrome.\n", str);
    }

    return 0; // Indicate successful program execution
}
