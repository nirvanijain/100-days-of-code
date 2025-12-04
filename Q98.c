//Print initials of a name with the surname displayed in full
#include <stdio.h>
#include <string.h>

int main() {
    char name[100];
    char *words[10];
    int count = 0;

    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin);

    // Remove trailing newline if present
    name[strcspn(name, "\n")] = '\0';

    // Split the name into words
    char *token = strtok(name, " ");
    while (token != NULL) {
        words[count++] = token;
        token = strtok(NULL, " ");
    }

    // Print initials except the last word (surname)
    for (int i = 0; i < count - 1; i++) {
        printf("%c.", words[i][0]);
    }

    // Print surname in full
    printf(" %s\n", words[count - 1]);

    return 0;
}