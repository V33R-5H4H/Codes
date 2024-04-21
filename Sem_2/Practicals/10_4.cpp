//Write a program to convert a basic type to a class type and vice versa.
#include <iostream>
using namespace std;
class sample{
    public:
    int a;
    float b=10.23;
    sample(){}
    sample(int x):a(x){}
    operator int (){
        int x = b;
        return x;
    }
    void disp(){
        cout<<a;
    }
};
main(){
    int m=10;
    sample s1,s2;
    s1=m;
    s1.disp();
    int n=s2;
    cout<<endl<<n;
}