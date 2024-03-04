//Write a function power that computes x raised to the power y for integer x and y and returns double type value
#include<stdio.h>
#include<math.h>
void main()
{
    int x,y;
    double result;
    printf("Enter 1st Number : ");
    scanf("%d",&x);
    printf("Enter 2nd Number : ");
    scanf("%d",&y);
    result=pow(x,y);
    printf("%f",result);
}