//Write a program that adds two 1-dimensional array & store into third array.
#include<stdio.h>
void main()
{
    int i,n,a[10],b[10],sum[10];
    printf("\nInput the number of elements to store in the array a&b : ");
    scanf("%d",&n);
    printf("\nInput Elements for array a : \n");
    for(i=0;i<n;i++)
    {
	  printf("Number %d : ",i+1);
	  scanf("%d",&a[i]);
	}
    printf("\nInput Elements for array b : \n");
    for(i=0;i<n;i++)
    {
	  printf("Number %d : ",i+1);
	  scanf("%d",&b[i]);
	}
    printf("\nThe Sum of Arrays is : ");
    for (i=0;i<=n-1;i++)
    {
        sum[i]=a[i]+b[i];
        printf("%d ",sum[i]);
    }
}