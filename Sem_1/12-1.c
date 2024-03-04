//Write a program to find sum of elements of 1-D Array using Function
#include <stdio.h>

int sum(int a[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += a[i];
    }
    return sum;
}
int main() {
    int a[] = {1, 2, 3, 4, 5};
    int n =5;
    int sum_of_elements = sum(a, n);
    printf("Sum of elements in the array: %d\n", sum_of_elements);
    return 0;
}