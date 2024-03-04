//Write a program to concatenate two strings without using library function
#include <stdio.h>
void main() {
    int len,i;
    char a[10],b[10];
    printf("Enter String 1 : ");
    scanf("%s",&a);
    printf("Enter String 2 : ");
    scanf("%s",&b);
    len=0;
    while (a[len] != '\0') 
    {
      ++len;
    }
    for (i=0;b[i]!='\0';++i,++len) 
    {
      a[len] = b[i];
    }
    a[len]='\0';
    printf("After concatenation: ");
    printf("%s",a);
}