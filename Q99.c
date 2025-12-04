//Change the date format from dd/04/yyyy to dd-Apr-yyyy.
#include <stdio.h>
#include <string.h>
#include <time.h>

int main() {
    char inputDateStr[] = "25/04/2023"; // Example input date string
    struct tm dateInfo;
    char outputDateStr[20]; // Buffer for the formatted date string

    // Parse the input date string into a struct tm
    // %d: day of the month as a decimal number (01-31)
    // %m: month as a decimal number (01-12)
    // %Y: year with century as a decimal number
    if (strptime(inputDateStr, "%d/%m/%Y", &dateInfo) == NULL) {
        fprintf(stderr, "Error parsing date string.\n");
        return 1;
    }

    // Format the struct tm into the desired output string
    // %d: day of the month as a decimal number (01-31)
    // %b: abbreviated month name (e.g., Jan, Feb)
    // %Y: year with century as a decimal number
    if (strftime(outputDateStr, sizeof(outputDateStr), "%d-%b-%Y", &dateInfo) == 0) {
        fprintf(stderr, "Error formatting date string.\n");
        return 1;
    }

    printf("Original date: %s\n", inputDateStr);
    printf("Formatted date: %s\n", outputDateStr);

    return 0;
}
