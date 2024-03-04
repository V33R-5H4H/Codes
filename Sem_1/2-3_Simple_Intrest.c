/*Write a program to calculate simple interest (i = (p*r*n)/100).
Where i = Simple interest, p = Principal amount, r = Rate of interest, n = Number of years*/
#include<stdio.h>
void main()
{
    float i,p,r,n;
    printf("\nEnter Principal Amt :");
    scanf("%f",&p);
    printf("\nEnter Rate :");
    scanf("%f",&r);
    printf("\nEnter Number of Years :");
    scanf("%f",&n);
    i=(p*r*n)/100;
    printf("\n Interest Calculated is : %f\n",i);

}
