//Write a program that checks whether the string is palindrome or not using string library function
#include<stdio.h>
#include<string.h>
void main()
{
    int i,l,j;
    char str[10];
    printf("Enter String to be checked : ");
    scanf("%s",&str);
    int h=strlen(str);
    j=h;
    for (l=0;l<h-1;l++)
    {
        j-=1;
        if (str[l]!=str[j])
        {
            printf("Entered string is not a palindrome ");
            break;
        }
        else
        {
            printf("Entered string is a palindrome ");
            break;
        }
        break;
    }   
}