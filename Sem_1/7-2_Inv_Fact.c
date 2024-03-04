//Write a program to find 1+1/2!+1/3!+1/4!+.....+1/n!.
#include<stdio.h>
void main()
{
    int i,n,g;
    float x,x1=1,x2,y,fact=1,s=0;
    printf("Enter Number : ");
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        for (g=1;g<=i;g++)
        {
            fact=fact*g;  
        }
    x=1/fact;
    fact=1;
    s+=x;
    }   
    printf("Value : %f",s);
}