//Write a program to compute Fahrenheit from centigrade (f=1.8*c +32).
#include<stdio.h>
void main()
{
  float f,c;
    printf("Enter Temperature in Centigrade : ");
    scanf("%f",&c);
    f=1.8*c+32;
    printf("\nTemperature in Fahrenheit : %f\n",f);
}
