//Write a calculator program (add, subtract, multiply, divide). Prepare user defined function for each functionality.
#include<stdio.h>
#include<math.h>
void add(int x,int y)
{
    int resulta;
    resulta=x+y;
    printf("%d",resulta);
}
void sub(int x,int y)
{
    int results;
    results=x-y;
    printf("%d",results);
}
void mul(int x,int y)
{
    int resultm;
    resultm=x*y;
    printf("%d",resultm);
}
void div(int x,int y)
{
    int resultd;
    resultd=x/y;
    printf("%d",resultd);
}
void main()
{
    int x,y,f;
    printf("Enter Number 1 : ");
    scanf("%d",&x);
    printf("Enter Nunber 2 : ");
    scanf("%d",&y);
    printf("Enter Function to be used : \n 1-Add \n 2-Subtract \n 3-Multiply \n 4-Divide");
    scanf("%d",&f);
    if (f==1)
    {
        add(x,y);
    }
    else if (f==2)
    {
        sub(x,y);
    }
    else if (f==3)
    {
        mul(x,y);
    }
    else if (f==4)
    {
        div(x,y);
    }
}