//write a program to calculate the area and perimeter of a rectangle given its length and breadth
#include <stdio.h>

int main(void) {
    int length, width, area, perimeter;
    printf("Enter the length of the rectangle: ");
    scanf("%d", &length);

    printf("Enter the width of the rectangle: ");
    scanf("%d", &width);

    // Calculate area and perimeter
    area = length * width;
    perimeter = 2 * (length + width);

    // Display the results
    printf("The area of the rectangle is: %d\n", area);
    printf("The perimeter of the rectangle is: %d\n", perimeter);

    return 0;
}
