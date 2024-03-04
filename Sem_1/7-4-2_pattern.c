#include<stdio.h>
void main()
{
    int i,n,j;
    printf("Enter Number : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=n;j>=i;j--)
        {
            printf("%c",'A'-1 + i);
        }
        printf("\n");
    }
}