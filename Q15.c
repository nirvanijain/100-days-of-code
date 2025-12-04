//Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.
#include <stdio.h> 

int main() {
    char ch; // Declare a variable to store a single character.

    // Prompt the user to enter a character.
    printf("Enter a character: ");
    // Read and store the character input from the user.
    scanf("%c", &ch);

    // Check if the character is an uppercase letter.
    if (ch >= 'A' && ch <= 'Z') {
        printf("'%c' is an uppercase alphabet.\n", ch);
    }
    // Else, check if the character is a lowercase letter.
    else if (ch >= 'a' && ch <= 'z') {
        printf("'%c' is a lowercase alphabet.\n", ch);
    }
    // Else, check if the character is a digit.
    else if (ch >= '0' && ch <= '9') {
        printf("'%c' is a digit.\n", ch);
    }
    // If none of the above conditions are met, it's a special character.
    else {
        printf("'%c' is a special character.\n", ch);
    }

    return 0; // Indicate successful program execution.
}
