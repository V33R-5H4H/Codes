//Write a program to overload the << and >> operators.
#include <iostream>
using namespace std;
class MyNumber {
private:
    int value;
public:
    MyNumber(int val) : value(val) {}
    MyNumber operator<<(int shift) {
        return MyNumber(value << shift);
    }
    MyNumber operator>>(int shift) {
        return MyNumber(value >> shift);
    }
    int getValue() const {
        return value;
    }
};
int main() {
    MyNumber num(10);
    MyNumber shifted = num << 2; // Left shift by 2 positions
    cout << "Original value: " << num.getValue() << endl;
    cout << "Shifted value: " << shifted.getValue() << endl;
    MyNumber num(20);
    MyNumber shifted = num >> 3; // Right shift by 3 positions
    cout << "Original value: " << num.getValue() << endl;
    cout << "Shifted value: " << shifted.getValue() << endl;
    
}
