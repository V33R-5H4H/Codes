//Write a program to convert an object of one class to another class.
#include<iostream>
using namespace std;
class alpha{
    int a;
    public:
    alpha(){}
    alpha(int x):a(x){}
    int get(){return a;}
};
class beta{
    int b;
    public:
    beta(){}
    beta(int x):b(x){}
    beta(alpha temp){
        b=temp.get();
    }
    operator alpha(){return alpha(b);}
    int get(){return b;}
};
main(){
    alpha a1(10);
    beta b1(a1);
    cout<<a1.get()<<endl;
    cout<<b1.get()<<endl;
    beta b2(20);
    a1=b2;
    cout<<a1.get()<<endl;
    cout<<b2.get()<<endl;
}