// Design classes named Triangle, Square, and Circle. Make the different function in each class to find areas of particular shape.
#include<math.h>
#include<iostream>
using namespace std;
#define Pi 3.14;
class area_t{
  public:
  float h,b;
  float a;
  float a_tri(float h,float b){
    a=0.5*h*b;
    cout<<"Area of Triangle is : "<<a<<endl;
  }
};
class area_r{
  public:
  float h,b;
  float a;
  float a_rect(float h,float b){
    a=h*b;
    cout<<"Area of rectangle is : "<<a<<endl;
  }
  
};
class area_c{
  public:
  float h,b;
  float a;
  float a_cir(float h){
    a=pow(h,2)*Pi;
    cout<<"Area of  Circle is : "<<a<<endl;
  }  
};
int main(){
  float h,b;
  cout<<"Enter Height & Base of Triangle : "<<endl;
  cin>>h>>b;
  area_t t;
  t.a_tri(h,b);
  cout<<"Enter Height & Base of Rectangle : "<<endl;
  cin>>h>>b;
  area_r r;
  r.a_rect(h,b);
  cout<<"Enter Radius of Circle : "<<endl;
  cin>>h;
  area_c c;
  c.a_cir(h);
}