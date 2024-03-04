//Write a program that reads a string and counts occurrences of a given character.
#include<stdio.h>
#include<string.h>
void main()
{
    int x,j,n;
    char l,i,a[100];
    printf("Enter Str : ");
    scanf("%s",&a);
    x=strlen(a);
    printf("Enter char to be searched : ");
    scanf("%s",&i);
    for (j=0;j<x;j++)
    {   
        l=a[j];
        if (l==i)
        {
            n=n+1;
        }
    }
    printf("The Number of occurences are : %d ",n);
}