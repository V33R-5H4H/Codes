//Write a program to find area of square, rectangle, triangle, and circle.
#include<stdio.h>
void main()
{
    float sq,l,w,h,b,r,areas,arear,areat,areac;
    printf("\nEnter Side of Square :");
    scanf("%f",&sq);
    areas=sq*sq;
    printf("\nArea of Square : %f\n",areas);
    printf("\nEnter Length of Rectangle :");
    scanf("%f",&l);
    printf("\nEnter Width of Rectangle :");
    scanf("%f",&w);
    arear=l*w;
    printf("\nArea of Rectangle :%f\n",arear);
    printf("\nEnter Height of Triangle :");
    scanf("%f",&h);
    printf("\nEnter Base of Triangle :");
    scanf("%f",&b);
    areat=((h*b)/2);
    printf("\nArea of Triangle : %f\n",areat);
    printf("\nEnter Radius of Circle :");
    scanf("%f",&r);
    areac=3.14*r*r;
    printf("\nArea of Circle : %f\n",areac);
}
