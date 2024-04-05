//WAP to calculate sum of elements of an array using pointer.
#include<stdio.h>
void main()
{
    int x[10],s=0,*p;
    for(int i=1;i<=5;i++)
    {
        printf("Enter Element x[%d]: ",i);
        scanf("%d",&x[i-1]);
    }
    for( int i=1;i<=5;i++){
        p=&x[i-1];
        s+=*p;
    }
    printf("%d",s);
}
