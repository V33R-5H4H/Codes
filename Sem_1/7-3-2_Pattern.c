#include<stdio.h>
void main()
{
   int n,j,i;
   printf("Enter the number of rows: ");
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
      for(j=n;j>=i;j--)
      {
        printf("*");
      }
      printf("\n");
   }
}