//Write a program to demonstrate the use of copy constructor 
#include<iostream>
using namespace std;
class test{
    public:
    int x,y;
    test(int i, int j){
        x=i;
        y=j;
    }
    test(const test &obj){
        x=obj.x;
        y=obj.y;
    }
};

int main(){
    int m,n;
    cout<<"Enter Num 1: ";
    cin>>m;
    cout<<"Enter Num 2: ";
    cin>>n;
    test t1(m,n);
    cout<<endl<<"Object 1 values are : "<<t1.x<<" "<<t1.y;
    test t2(t1);
    cout<<endl<<"Object 2 values are : "<<t2.x<<" "<<t2.y;
}