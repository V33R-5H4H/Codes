#include<stdio.h>
void main()
{
    char str[60];
    int i,len;
    printf("Please insert the string you want to reverse: ");
    scanf("%s",str);
    len=strlen(str);
    for(i=len-1;i>=0;i--) 
    {
        printf("%c", str[i]);        
    }
}