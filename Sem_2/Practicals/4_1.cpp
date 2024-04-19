//Write a function that creates an array of user given size using new operator.
#include<iostream>
using namespace std;
int main()
{
    int size;
    cout<<"Enter the size of the array :";
    cin>>size;
    int *p=new int[size];
    for(int i=0;i<size;i++)
    {   
        cout<<"Enter element "<<i+1<<" : ";
        cin>>p[i];
    }
    for(int i=0;i<size;i++)
    {
        cout<<"Element "<<i+1<<": "<<p[i]<<endl;
    }
}