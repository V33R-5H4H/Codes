//WAP to allocate memory using calloc and find sum of given numbers.
#include<stdio.h>
#include<stdlib.h>
void main()
{
    int x,s=0;
    int *p;
    printf("Enter No. of Terms : ");
    scanf("%d",&x);
    p=(int *)calloc(x,sizeof(int));
    for(int i=0;i<x;i++)
    {
        printf("Enter No %d : ",i+1);
        scanf("%d",(p+i));
        s+=*(p+i);
    }
    printf("%d",s);
    free (p);
}