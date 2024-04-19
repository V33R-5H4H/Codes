//Write a function that creates a vector of user given size M using new operator. Demonstrate the use of the function.
#include<iostream>
using namespace std;
class vector{
    public:
    int *x,*y;
    int M;
    vector(int m,int n){
        x=new int(m);
        y=new int(m);
        M=m;
    }
    void output(){
        cout<<"Vector is : ("<<*x<<","<<*y<<")";        
    }
};
int main(){
    int m,n;
    cout<<"Enter X coordinate of vector : ";
    cin>>m;
    cout<<"Enter Y coordinate of vector : ";
    cin>>n;
    vector s(m,n);
    s.output();
}