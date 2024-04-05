/*Create a 'DISTANCE' class with :
feet and inches as data members 
member function to input distance 
member function to output distance
member function to add two distance objects. 
Write a main function to create objects of DISTANCE class. Input two distances and output the sum.*/
#include<iostream>
using namespace std;
class Dist{
    public:
    float feet,inches;
    void set_data(){
        cout<<"Enter Distances :"<<endl;
        cout<<"Enter Distance in feet : ";
        cin>>feet;
        cout<<"Enter Distance in inches : ";
        cin>>inches;
    }
    void display(){
        cout<<"Distance in feet : "<<feet<<endl;
        cout<<"Distance in inches :"<<inches<<endl;
    }
    float sum(float feet,float inches){
        inches+=feet*12;
        return inches/12;
    }
};
int main(){
    Dist dis;
    dis.set_data();
    dis.display();
    cout<<"Sum of distances is : "<<dis.sum(dis.feet,dis.inches)<<" ft";
}