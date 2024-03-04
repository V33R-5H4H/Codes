//Write a program convert character into Toggle character
#include<stdio.h>
void main()
{
    char str[10];
    printf("Enter Str to be toggled : ");
    scanf("%s",&str);
    for (int i=0;str[i]!='\0';i++)
    {
        if (str[i]>='A' && str[i]<='Z')
        {
            str[i] = str[i] + 'a' - 'A';
        }
        else if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] + 'A' - 'a';
        }
    }
    printf("Toggled Str is : %s",str);
}