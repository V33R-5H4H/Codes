//Write a program to overload the [] operator
#include<iostream>
using namespace std;
class Array{
    int *arr;
    int size;
    public:
    Array(int size){
        this->size = size;
        arr = new int[size];
    }
    ~Array(){
        delete[] arr;
    }
    int &operator [](int index){
        return arr[index];
    }
};
main(){
    Array obj1(5);
    cout << "Enter elements of array : ";
    for (int i = 0; i < 5; i++){
        cin>>obj1[i];
    }
        cout << "\nElements in array are : \n";
    for (int i = 0; i < 5; i++){
        cout<<obj1[i]<< " ";
    }
}
