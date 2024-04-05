//WAP to sort numbers using malloc.
#include<stdio.h>
#include<stdlib.h>
void main()
{
    int x,temp=0,s=0;
    int *p;
    printf("Enter No. of Terms : ");
    scanf("%d",&x);
    p=(int *)malloc(x*sizeof(int));
    for(int i=0;i<x;i++)
    {
        printf("Enter No %d : ",i+1);
        scanf("%d",(p+i));
    }
    for (int i=0;i<x;i++)
        for (int j=0;j<x;j++)
            if (*(p+j)>*(p+i))
            {
                temp=*(p+j);
                *(p+j)=*(p+i);
                *(p+i)=temp;
            }
    for(int i=0;i<x;i++)
        printf("%d, ",*(p+i));

    free (p);
}