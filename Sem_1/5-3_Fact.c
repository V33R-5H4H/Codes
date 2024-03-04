//Write a program to find factorial of a given number.
#include<stdio.h>
void main()
{
    int x,i;
    unsigned long long fact=1;
    printf("Enter Number : ");
    scanf("%d",&x);
    if (x<0)
    {
        printf("Num is Negative");
    }
    else
    {
        for (i=1;i<=x;i++)
        {
            fact=fact*i;
        }
        printf("Factorial of %d = %llu",x,fact);
    }
}