/* Write a C++ program to implement function overloading in order to compute power(m,n) where 
(1) m is double and n is int 
(2) m and n are int. */
#include<iostream>
#include<math.h>
using namespace std;
double power(double m, int n) {
    return pow(m,n);
}
int power(int m, int n) {
    return pow(m,n);
}
int main() {    
    double m;
    int n,x;
    cout<<"Enter the value of m as double : ";
    cin>>m;
    cout<<"Enter the value of n : ";
    cin>>n;
    cout<<"The value of m^n : "<<power(m,n)<<endl;
    cout<<"Enter the value of m in integers :";
    cin>>x;
    cout<<"The value of m^n : "<<power(x,n)<<endl;

}