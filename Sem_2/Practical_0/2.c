//WAP to swap value of two variables using pointer.
#include <stdio.h>
void main()
{
    int x,y,*p,*q,*temp;
    printf("Enter the value of x : ");
    scanf("%d",&x);
    printf("Enter the value of y : ");
    scanf("%d",&y);
    p=&x;
    q=&y;
    *temp=*p;
    *p=*q;
    *q=*temp;
    printf("After swapping x and y : x = %d and y = %d",x,y);
}