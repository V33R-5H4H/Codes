//Write a program to use manipulators setw, setiosflags and setprecision for formatted output.
#include<iostream>
#include<iomanip>
#include<ios>
using namespace std;
int main()
{
    double n = 5.12345678;
    int m = 50;
    cout<<"BEFORE SETTING WIDTH : "<<n<<endl;
    cout<<"AFTER SETTING WIDTH : ";
    cout<<setw(5);
    cout<<n<<endl;
    cout<<"AFTER USING PRECISION : "<<setprecision(5)<<n<<endl;
    cout<<"USING SETIOSFLAG : ";
    cout<<hex<<setiosflags(ios :: showbase)<<m<<endl;
    return 0;
}