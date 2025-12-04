//Count spaces, digits, and special characters in a string
#include <stdio.h>
#include <string.h> // Required for strlen() if used, but not strictly necessary for this approach

int main() {
    char str[100]; // Declare a character array to store the string
    int spaces = 0;
    int digits = 0;
    int special_chars = 0;
    int i = 0;

    printf("Enter a string: ");
    // Using fgets for safer input handling compared to gets()
    fgets(str, sizeof(str), stdin); 

    // Loop through each character of the string until the null terminator is found
    while (str[i] != '\0') {
        if (str[i] == ' ') {
            spaces++;
        } else if (str[i] >= '0' && str[i] <= '9') {
            digits++;
        } else if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
            // This condition checks for alphabets, which are neither digits, spaces, nor special characters
            // We are not counting alphabets, but it's good to explicitly exclude them from special characters
        } else if (str[i] == '\n' && i == (strlen(str) - 1)) {
            // Handle the newline character added by fgets() at the end of the input
            // Do nothing, as it's not a space, digit, or special character we want to count
        }
        else {
            special_chars++;
        }
        i++;
    }

    printf("Number of spaces: %d\n", spaces);
    printf("Number of digits: %d\n", digits);
    printf("Number of special characters: %d\n", special_chars);

    return 0;
}
