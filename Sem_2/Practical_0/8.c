//WAP to find square of numbers using calloc.
#include<stdio.h>
#include<stdlib.h>
void main()
{
    int i,n=0,*p;
    printf("Enter total number of elements: ");
    scanf("%d",&n);
    p=(int*)calloc(n,sizeof(int));
    for(i=0;i<n;i++)
    {
        p[i]=(i+1)*(i+1);
        printf("Square of %d = %d \n",i+1,p[i]);
    }
    free(p);
}