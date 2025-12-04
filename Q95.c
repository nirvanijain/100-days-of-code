//Check if one string is a rotation of another
#include <stdio.h>
#include <string.h>
#include <stdlib.h> // For malloc and free

/*
 * Function to check if two strings are rotations of each other.
 * Returns 1 if they are rotations, 0 otherwise.
 */
int areRotations(char *str1, char *str2) {
    int size1 = strlen(str1);
    int size2 = strlen(str2);
    char *temp;
    void *ptr;

    // Step 1: Check if sizes of two strings are the same
    if (size1 != size2) {
        return 0;
    }

    // Step 2: Create a temporary string with value str1.str1
    // Allocate memory for temp: size1 * 2 for two copies of str1 + 1 for null terminator
    temp = (char *)malloc(sizeof(char) * (size1 * 2 + 1));
    if (temp == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        exit(EXIT_FAILURE);
    }
    strcpy(temp, str1); // Copy str1 to temp
    strcat(temp, str1); // Concatenate str1 again to temp

    // Step 3: Now check if str2 is a substring of temp
    ptr = strstr(temp, str2);

    // Step 4: Free dynamically allocated memory
    free(temp);

    // strstr returns NULL if the second string is NOT a substring of the first string
    if (ptr != NULL) {
        return 1; // str2 is a rotation of str1
    } else {
        return 0; // str2 is not a rotation of str1
    }
}

// Driver program to test areRotations function
int main() {
    char str1[] = "AACD";
    char str2[] = "ACDA";

    if (areRotations(str1, str2)) {
        printf("Strings \"%s\" and \"%s\" are rotations of each other.\n", str1, str2);
    } else {
        printf("Strings \"%s\" and \"%s\" are not rotations of each other.\n", str1, str2);
    }

    char str3[] = "hello";
    char str4[] = "ohell";

    if (areRotations(str3, str4)) {
        printf("Strings \"%s\" and \"%s\" are rotations of each other.\n", str3, str4);
    } else {
        printf("Strings \"%s\" and \"%s\" are not rotations of each other.\n", str3, str4);
    }

    char str5[] = "abc";
    char str6[] = "acb";

    if (areRotations(str5, str6)) {
        printf("Strings \"%s\" and \"%s\" are rotations of each other.\n", str5, str6);
    } else {
        printf("Strings \"%s\" and \"%s\" are not rotations of each other.\n", str5, str6);
    }

    return 0;
}
