// Create a class with string pointer as data member and member functions.
#include<iostream>
using namespace std;
class pointer{
    public:
    string *ptr;
    void setString(string s){
        ptr=&s;
        //ptr = new string(s);
    }
    void display(){
        cout<<"The String is : "<<*ptr<<endl;
    }    
};
int main() {
    pointer p;
    string s;
    cout << "Enter the String : ";
    cin>>s;
    p.setString(s);
    p.display();
}