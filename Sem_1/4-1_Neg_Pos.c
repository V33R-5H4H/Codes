//Write a program to find that the accepted number is Negative, or Positive or Zero.
#include<stdio.h>
void main()
{
    float a;
    printf("Enter Number to be Checked :");
    scanf("%f",&a);
    if (a<0)
    {
        printf("Num is Negative");
    }
    else if (a>0)
    {
        printf("Num is Positive");
    }
    else
    {
        printf("Num is Equal to 0");
    }
}
