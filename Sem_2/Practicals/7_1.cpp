// Create a program to understand and use static members and static member functions
#include <iostream>
using namespace std;
class A {
public:
    static int x;
};
int A::x = 10;
void display(A obj) {
    cout << "Value of x : " << obj.x << endl;
}
int main() {
    A obja, objb;
    display(obja);
    A::x = 5;
    display(objb);

}