//Write a program to overload the + and == operators for the string class.
#include<iostream>
using namespace std;
class String{
    public:
    string a,b;
    String(){}
    String (string x):a(x){}
    void disp(){
        cout<<"String:"<<a;
    }
    String operator == (String s){
        String str;
        bool x=false;
        if(str.a==s.a)
            x=true;
        if(x)
            cout<<"Strings are Equal"<<endl;
        else
            cout<<"Strings are Not Equal"<<endl;
    }
    String operator + (String s){
        String str;
        str.a=a+s.a;
        return str;
    }
};
int main(){
    string a,b;
    cout<<"Enter String 1: ";
    cin>>a;
    cout<<"Enter String 2: ";
    cin>>b;
    String s1(a),s2(b),s3;
    s1==s2;
    s3=s1+s2;
    s3.disp();
}