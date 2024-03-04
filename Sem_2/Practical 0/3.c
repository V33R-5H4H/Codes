//WAP to calculate sum of two numbers using pointer.
#include<stdio.h>
void main()
{
    int x,y,s,*p,*q;
    printf("Enter value of x :");
    scanf("%d",&x);
    printf("Enter value of y :");
    scanf("%d",&y);
    p=&x;
    q=&y;
    s=*p+*q;
    printf("Sum of two numbers is %d",s);
}