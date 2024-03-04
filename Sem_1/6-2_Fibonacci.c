//Write a program to generate first n number of Fibonacci series.
#include<stdio.h>
void main() 
{
    int i,n,x,x1,x2;
    x1=0;
    x2=1;
    printf("Enter the number of terms: ");
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        printf("%d",x);
        x1=x2;
        x2=x;
        x=x1+x2;
    }
}
