//Write a program to overload the + and – operators for the complex class.
#include <iostream>
using namespace std;
class Complex {
    public:
        float real;
        float imag;
        Complex(float r, float i) {
            real = r;
            imag = i;
        }
        Complex operator+(Complex c) {
            return Complex(real + c.real, imag + c.imag);
        }
        Complex operator-(Complex c) {
            return Complex(real - c.real, imag - c.imag);
        }
};
int main() {
    Complex x(2,3),y(1,4);
    cout << "Addition of two complex numbers : ";
    Complex z = x + y;
    cout << "( " << z.real << ", " << z.imag << " )" << endl;
    cout << "Subtraction of two complex numbers : ";
    Complex w = x - y;
    cout << "( " << w.real << ", " << w.imag << " )";
}