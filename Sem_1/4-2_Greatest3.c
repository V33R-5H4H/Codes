//Write a program to read three numbers from keyboard and find out maximum out of these three (Nested if else).
#include<stdio.h>
void main()
{
    int a,b,c;
    printf("Enter Number 1:");
    scanf("%d",&a);
    printf("Enter Number 2:");
    scanf("%d",&b);
    printf("Enter Number 3:");
    scanf("%d",&c);
    if (a>b)
    {
        if (a>c)
        {
            printf("%d,is the Largest of all",a);
        }
        else if (a<c)
        {
            printf("%d,is the Largest of all",c);
        }
    }
    else if (a<b)
    {
           if (b>c)
        {
            printf("%d,is the Largest of all",b);
        }
        else if (b<c)
        {
            printf("%d,is the Largest of all",c);
        }
    }
}
