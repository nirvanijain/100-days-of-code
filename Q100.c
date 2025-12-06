//Print all sub-strings of a string
#include <stdio.h>
#include <string.h>

void printAllSubstrings(char *str) {
    int length = strlen(str);
    int i, j, k;

    // Outer loop for starting index of substring
    for (i = 0; i < length; i++) {
        // Inner loop for ending index of substring
        for (j = i; j < length; j++) {
            // Loop to print the substring from index i to j
            for (k = i; k <= j; k++) {
                printf("%c", str[k]);
            }
            printf("\n"); // Newline after each substring
        }
    }
}

int main() {
    char str[] = "abc"; // Example string
    printf("All substrings of \"%s\" are:\n", str);
    printAllSubstrings(str);
    return 0;
}
