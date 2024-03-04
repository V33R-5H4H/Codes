//Write a program demonstrate functionality of calculator using switch-case.
#include<stdio.h>
void main()
{
    float x,y;
    char o;
    printf("Enter Operator (+,-,x,/) : ");
    scanf("%c",&o);
    printf("Enter Number 1 : ");
    scanf("%f",&x);
    printf("Enter Number 2 : ");
    scanf("%f",&y);
    switch (o)
    {
        case '+':
            printf("%f + %f = %f",x,y,x+y);
            break;
        case '-':
            printf("%f - %f = %f",x,y,x-y);
            break;
        case 'x':
            printf("%f x %f = %f",x,y,x*y);
            break;
        case '/':
            printf("%f / %f = %f",x,y,x/y);
            break;
        default:
            printf("Error! operator is not correct");
    }
}
