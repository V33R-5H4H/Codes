//Write a program that use user defined function swap() to interchange the value of two variable.
#include <stdio.h>
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
void main() {
    int a,b;
    printf("Enter Value of a :");
    scanf("%d",&a);
    printf("Enter Value of b :");
    scanf("%d",&b);
    printf("Before swapping, a = %d and b = %d\n", a, b);
    swap(&a, &b);
    printf("After swapping, a = %d and b = %d\n", a, b);
}