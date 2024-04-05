//WAP to copy a given file.
#include<stdio.h>
void main()
{
    FILE *fp1,*fp2;
    fp1=fopen("Codes List.txt","r");
    fp2=fopen("output.txt","w+");
    char ch;
    while((ch=fgetc(fp1))!=EOF)
        fputc(ch,fp2);
    fclose(fp1);
    fclose(fp2);
}