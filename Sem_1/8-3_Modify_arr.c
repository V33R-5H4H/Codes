//Write a program to insert and delete an element to/from desired position in an array.
#include<stdio.h>
void main()
{
    int i,n,c,x,a[10];
    printf("Enter length of array : ");
    scanf("%d",&n);
    for(i=0;i<=n-1;i++)
    {
        printf("Enter Number %d : ",i+1);
        scanf("%d",&a[i]);
    }
    printf("Enter Choice : \n 1-Delete : \n 2-Insert :\n ");
    scanf("%d",&c);
    if (c==1)
    {
        printf("Enter Index of Element :");
        scanf("%d",&i);
        a[i]=0;
    }
    else if (c==2)
    {
        printf("Enter Index of Element :");
        scanf("%d",&x);
        printf("Enter Element to be inserted :");
        scanf("%d",&a[i]);
        n=(x-n);
    }
    printf("The Array : \n");
    for (i=0;i<=n-1;i++)
    {
        printf("%d",a[i]);
    }
}