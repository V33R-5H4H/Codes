//Write a program to evaluate the series 1^2+2^2+3^2+……+n^2
#include<stdio.h>
void main()
{
    int x,i,n;
    unsigned long long s=0;
    printf("Enter Number of Terms for Series : ");
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        x=i*i;
        s+=x;
    }
    printf("Value : %llu",s);
}