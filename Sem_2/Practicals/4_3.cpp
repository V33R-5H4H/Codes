//  Create a C++ program to convert temperature in Fahrenheit to celcius and display. Use class.
#include<iostream>
using namespace std;
class temp{
    public:
    float t_f,t_c;
    float f_c(float t_f){
        t_c=(t_f-32)*(0.55);
        return t_c;
    }
    float c_f(float t_c){
        t_f=(t_c*(1.8))+32;
        return t_f;
    }
};
int main(){
    temp temp;
    cout<<"Enter Temp in Farenhiet : ";
    cin>>temp.t_f;
    cout<<"Temp in Celcius is : "<<temp.f_c(temp.t_f)<<endl;
    cout<<"Enter Temp in Celsius : ";
    cin>>temp.t_c;
    cout<<"Temp in Farenhiet is : "<<temp.c_f(temp.t_c)<<endl;
}