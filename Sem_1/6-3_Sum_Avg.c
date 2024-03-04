//Write a program to find the sum and average of different numbers which are accepted by user as many as user wants.
#include<stdio.h>
void main()
{
    int i,n;
    float x,sum,avg;
    printf("Enter Amt of Numbers to find Sum and Average of : ");
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        printf("Enter Number %d : ",i);
        scanf("%f",&x);
        sum+=x;
    }
    avg=sum/n;
    printf("Sum of given Numbers is : %f",sum);
    printf("\nAverage of given Numbers is : %f",avg);
}