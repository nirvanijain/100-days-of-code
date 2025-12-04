//Toggle case of each character in a string
#include <stdio.h>
#include <string.h> // Required for strlen() if you were to use it, though not strictly needed here.

// Function to toggle the case of characters in a string
void toggleCase(char *str) {
    int i = 0;
    while (str[i] != '\0') { // Iterate until the null terminator is reached
        if (str[i] >= 'a' && str[i] <= 'z') { // If the character is lowercase
            str[i] = str[i] - 32; // Convert to uppercase by subtracting 32 (ASCII difference)
        } else if (str[i] >= 'A' && str[i] <= 'Z') { // If the character is uppercase
            str[i] = str[i] + 32; // Convert to lowercase by adding 32 (ASCII difference)
        }
        i++; // Move to the next character
    }
}

int main() {
    char str[100]; // Declare a character array to store the string

    printf("Enter any string: ");
    // Using fgets for safer input compared to gets
    fgets(str, sizeof(str), stdin); 

    // Remove the trailing newline character added by fgets if present
    str[strcspn(str, "\n")] = 0; 

    printf("String before toggling case: %s\n", str);

    toggleCase(str); // Call the function to toggle the case

    printf("String after toggling case: %s\n", str);

    return 0;
}
