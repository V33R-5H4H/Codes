//Write a program to read a number and check it is even or odd.
#include<stdio.h>
void main()
{
    int a;
    printf("Enter Number to be Checked :");
    scanf("%d",&a);
    if (a%2==0)
    {
        printf("Number is Even");
    }
    else
    {
        printf("Number is Odd");
    }
}
