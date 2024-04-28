//Write a program to demonstrate the use of arrays within a class. Create and manage an inventory system.
#include<iostream>
using namespace std;
class Test {
    public:
    int x,y,z,id[5],no[5];
    void input(int x,int y,int z){
        id[x]=y;
        no[x]=z;
    }
    void display(){
        cout<<"ID\t\tQuantity"<<endl;
        for (int i=0;i<5;i++) {
            cout<<id[i]<<"\t\t   "<< no[i]<<endl;
        }
    }
};
int main()
{
   Test t;
   for(int i = 0; i < 5; i++){
        t.y=i+101;
        cout<<"Id "<<t.y<<": "<<endl;
        cout<<"Enter Quantity: ";
        cin>>t.z;
        t.input(i,t.y,t.z);
    }
   t.display();
   return 0;
}
