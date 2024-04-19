// Write a program to find the largest of three integers using a swap function. The function accepts integer arguments by reference.
#include<iostream>
using namespace std;
void swap(int &a, int &b) {
    if (a < b) {
        int temp = a;
        a = b;
        b = temp;
    }
}
int main() {
    int a, b, c;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;
    swap(a, b);
    swap(a, c);
    swap(b, c);
    cout << "The largest of the three numbers is: " << a << endl;
}