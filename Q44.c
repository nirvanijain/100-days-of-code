//Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms
#include <stdio.h>

int main() {
    int n, i;
    double sum = 0.0;
    int numerator, denominator;

    printf("Enter the number of terms (n): ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        numerator = 2 * i - 1;
        denominator = 2 * i;
        sum += (double)numerator / denominator;
    }

    printf("The sum of the series up to %d terms is: %.6lf\n", n, sum);

    return 0;
}
