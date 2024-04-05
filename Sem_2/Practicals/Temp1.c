#include<stdio.h>
#include<string.h>
void main(){
    float x;
    printf("Enter Num");
    scanf("%d",&x);
    char y[10]={x};
    printf("%s",y);
}