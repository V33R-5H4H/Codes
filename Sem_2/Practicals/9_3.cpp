//Write a program to overload the unary – operator for a suitable class.
#include <iostream>
using namespace std;
class MyNumber {
public:
    int value;
    MyNumber(int val):value(val){}
    MyNumber operator-(){
        return MyNumber(-value);
    }
    void display(){
        cout << "Value: " << value << endl;
    }
};
int main(){
    MyNumber num(42);
    cout << "Original value:" << endl;
    num.display();
    MyNumber x = -num;
    cout << "Negated value:" << endl;
    x.display();
    return 0;
}
