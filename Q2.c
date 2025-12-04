//Write a program to input two numbers and display their sum, difference, product, and quotient.
#include<stdio.h>
int main()
{
int num1,num2,result;
float result1;
printf("\n Enter two numbers…");
scanf("%d%d",&num1,&num2);


result=num1+num2;
printf("\nThe sum of two numbers =%d",result);
result=num1-num2;
printf("\nThe subtraction of two numbers=%d",result);
result=num1*num2;
printf("\nThe multiplication of two numbers is=%d",result);
result=num1/(float)num2;
printf("\nThe division of two numbers is=%d",result);
return 0;
}