//Write a program to sort a given array in ascending order (Use Bubble Sort algorithm).
#include<stdio.h>
void main()
{
    int x,i,n,a[100];
    printf("Enter Number of terms in array : ");
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        printf("Enter Term %d : ",i+1);
        scanf("%d",&a[i]);
    }
    for (i=0;i<n;i++)
    {
        if (a[i]>a[i+1])
        {
            x=a[i];
            a[i]=a[i+1];
            a[i+1]=x;
        }
    }
    printf("The Array a= : ");
    for (i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}