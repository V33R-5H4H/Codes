//Write a C++ program to swap two number by both call by value and call by reference mechanism, using twofunctions swap_value() and swap_reference respectively ,by getting the choice from the user and executing the user’s choice by switch-case.
#include<iostream>
using namespace std;
void call_val(int a , int b){
    int temp = a;
    a = b;
    b = temp;
    cout<<"After Swapping Value of a : "<<a<<" "<<"Value of b :"<<b<<endl;
}
void call_ref(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
    cout<<"After Swapping Value of a : "<<*a<<" "<<"Value of b :"<<*b<<endl;

}
int main(){
    int a,b,i;
    a=10;
    b=20;
    cout<<"Enter Choice .: 1. Call By Value swap  2. Call by reference swap : ";
    cin>>i;
    switch(i){
    case 1:
        call_val(a,b);
        break;
    case 2:
        call_ref(&a,&b);
        break;
    }
}