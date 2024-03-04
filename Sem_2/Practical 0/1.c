//WAP to print variable, address of variable and pointer to pointer variable.
#include <stdio.h>
void main() {
    int num = 10;
    int *ptr = &num;
    int **pptr = &ptr;
    printf("Variable: %d\n", num);
    printf("Address of variable: %d\n", &num);
    printf("Pointer to pointer variable: %d\n", pptr);
}