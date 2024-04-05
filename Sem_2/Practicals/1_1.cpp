//Design a simple class with all arithmetic function. Use them in MAIN function.
#include<iostream>
#include<math.h>
using namespace std;
class Maths{
    public:
    float x,y,ans;
    float sum(float x,float y){
        return x+y;
    }
    float sub(float x,float y){
        return x-y;
    }
    float multiply(float x,float y){
        return x*y;
    }
    float divide(float x,float y){
        return x/y;
    }
    float modulus(int x,int y){
        return x%y;
    }
    float power(float x,float y){
        return pow(x,y);
    }
};
int main() {   
    Maths obj;
    cout<<"Enter First number : ";
    cin>>obj.x;
    cout<<"Enter Second number : ";
    cin>>obj.y;
    cout<<obj.x<<" + "<<obj.y<<" is : "<<obj.sum(obj.x,obj.y)<<endl;
    cout<<obj.x<<" - "<<obj.y<<" is : "<<obj.sub(obj.x,obj.y)<<endl;
    cout<<obj.x<<" * "<<obj.y<<" is : "<<obj.multiply(obj.x,obj.y)<<endl;
    cout<<obj.x<<" / "<<obj.y<<" is : "<<obj.divide(obj.x,obj.y)<<endl; 
    cout<<obj.x<<" % "<<obj.y<<" is : "<<obj.modulus(obj.x,obj.y)<<endl;
    cout<<obj.x<<" ^ "<<obj.y<<" is : "<<obj.power(obj.x,obj.y)<<endl;
}
