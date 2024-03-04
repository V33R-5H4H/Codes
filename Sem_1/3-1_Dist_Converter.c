//Write a program to enter a distance in to kilometer and convert it in to meter, feet, inches, and centimeter.
#include<stdio.h>
void main()
{
    float k,m,f,i;
    printf("Enter Dist in Km : ");
    scanf("%f",&k);
    m=k*1000;
    printf("\nDist in Meter : %f\n",m);
    f=k*3280.8399;
    printf("\nDist in Feet : %f\n",f);
    i=k*39370.0787;
    printf("\nDist in Inches : %f\n",i);
}
