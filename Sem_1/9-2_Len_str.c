//Write a program to find length of string without using library function.
#include<stdio.h>
void main()
{
    int len;
    char str[60];
    printf("Please insert the string : ");
    scanf("%s",str);
    len=strlen(str);
    printf("The Length of string is : %d",len);
}