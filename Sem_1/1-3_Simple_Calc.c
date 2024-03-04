//Write a program to that performs as calculator (addition, multiplication, division, subtraction).
#include<stdio.h>
void main()
{
    int a,b,c,d,e;
    a=10;
    printf("Enter Desired Number : ");
    scanf("%d",&b);
    c=a+b;
    d=a*b;
    e=a/b;
    printf("%d + %d = %d",a,b,c);
    printf("\n%d x %d = %d",a,b,d);
    printf("\n%d / %d = %d",a,b,e);
}
