//Write a program to read array of integers and print it in reverse order.
#include <stdio.h>
void main()
{
    int i,n,a[100];   
    printf("Input the number of elements to store in the array :");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
	  printf("Number %d : ",i+1);
	  scanf("%d",&a[i]);
	}
    printf("The values store into the array are : \n");
    for(i=0;i<n;i++)
    {
	   printf("%d\n",a[i]);
	}
    printf("The values store into the array in reverse are :\n");
    for(i=n-1;i>=0;i--)
    {
	   printf("%d\n",a[i]);
    }
} 