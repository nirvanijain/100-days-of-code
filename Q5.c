//Write a program to convert temperature from Celsius to Fahrenheit.
#include <stdio.h>
int main()
{
    float celsius,fahrenheit;
    printf("\nConvert temperature from celsius into fahrenheit…");
    scanf("%f",&celsius);
    fahrenheit=(celsius*9/5)+32;
    printf("\nThe temperature in celsius converted into fahrenheit is= %f\n",fahrenheit);

}