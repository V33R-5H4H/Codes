//Write a program to read marks from keyboard and your program should display equivalent grade according to following table (if else ladder);
#include<stdio.h>
void main()
{
    float marks;
    printf("Enter Marks :");
    scanf("%f",&marks);
    if (marks<=100&&marks>=80)
    {
        printf("Distinction");
    }
    else if (marks<80&&marks>=60)
    {
        printf("First Class");
    }
    else if (marks<60&&marks>=40)
    {
        printf("Second Class");
    }
    if (marks<40)
    {
        printf("fail");
    }
}
