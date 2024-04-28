//Create a class complex that has two members of type float. Write a friend function that calculate the sum of the two complex objects and returns the result as an object. Demonstrate the working using a main function. 
#include<iostream>
using namespace std;
class complex {
public:
    float real;
    float imaginary;
    complex(float real, float imaginary) {
        this->real = real;
        this->imaginary = imaginary;
    }
    friend complex operator+(complex c1, complex c2);
};
complex operator + (complex c1, complex c2) {
    return complex(c1.real+c2.real, c1.imaginary+c2.imaginary);
}
int main() {
    complex a(3,4), b(1,2);
    complex sum = a + b;
    cout<< "Sum of ("<<a.real<<"+"<<a.imaginary<<"i) and ("<<b.real<<"+"<<b.imaginary<<"i) is : ";
    cout<< sum.real << "+" <<sum.imaginary<<"i";
    return 0;
}
