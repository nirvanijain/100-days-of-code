//Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.
#include <stdio.h> 

int main() {
    int side1, side2, side3; // Declare three integer variables to store the side lengths

    // Prompt the user to enter the three sides of the triangle
    printf("Enter the lengths of the three sides of the triangle:\n");
    scanf("%d %d %d", &side1, &side2, &side3); // Read the three side lengths from the user

    // Check if the triangle is equilateral
    if (side1 == side2 && side2 == side3) {
        printf("The triangle is Equilateral.\n");
    }
    // Check if the triangle is isosceles (only two sides are equal)
    else if (side1 == side2 || side2 == side3 || side1 == side3) {
        printf("The triangle is Isosceles.\n");
    }
    // If it's neither equilateral nor isosceles, it must be scalene
    else {
        printf("The triangle is Scalene.\n");
    }

    return 0; // Indicate that the program executed successfully
}
