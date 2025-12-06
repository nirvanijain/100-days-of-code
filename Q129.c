//A file numbers.txt contains a list of integers separated by spaces. Read all integers, compute their sum and average, and print both.
#include <stdio.h>
#include <stdlib.h> // Required for exit()

int main() {
    FILE *file;
    int num;
    int sum = 0;
    int count = 0;
    double average;

    // Open the file for reading
    file = fopen("numbers.txt", "r");

    // Check if the file was opened successfully
    if (file == NULL) {
        printf("Error opening numbers.txt. Make sure the file exists in the same directory.\n");
        exit(1); // Exit with an error code
    }

    // Read integers from the file until End-of-File (EOF) is reached
    // fscanf returns 1 if an integer is successfully read
    while (fscanf(file, "%d", &num) == 1) {
        sum += num;
        count++;
    }

    // Close the file
    fclose(file);

    // Check if any numbers were read from the file
    if (count == 0) {
        printf("No numbers found in numbers.txt.\n");
        return 0; // Exit successfully, no numbers to process
    }

    // Calculate the average
    average = (double)sum / count;

    // Print the sum and average
    printf("Sum of integers: %d\n", sum);
    printf("Average of integers: %.2lf\n", average); // .2lf for two decimal places

    return 0; // Exit successfully
}
