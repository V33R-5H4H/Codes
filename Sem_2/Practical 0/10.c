//WAP to display content of a given file.
#include<stdio.h>
void main()
{
    FILE *fp;
    fp = fopen("Codes List.txt", "r");
    if(fp == NULL)
    {
        printf("File not found\n");
    }
    else
    {
        char ch;
        while((ch = fgetc(fp))!= EOF)
        {
            printf("%c", ch);
        }
    }
}