//Write a program to check whether the entered character is capital, small letter, digit or any special character.
#include<stdio.h>
void main()
{
    char ch;
    printf("Enter any character: ");
    scanf("%c",&ch);
    if(ch>='A'&&ch<='Z')
    {
        printf("'%c' is uppercase alphabet.", ch);
    }
    else if(ch>='a'&&ch<='z')
    {
        printf("'%c' is lowercase alphabet.", ch);
    }
    else if (ch>='0'&&ch<='9')
    {
        printf("'%c' is a digit.", ch);
    }
    else
    {
        printf("'%c' is a special character",ch);
    }
}
