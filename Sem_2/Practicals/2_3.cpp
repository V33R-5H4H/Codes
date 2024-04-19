/* Create a class with string pointer as data member and member functions.
1.Constructor to allocate memory dynamically and read value.
2.Display () function to display the string.
3.Destructor function to free allocated memory.
*/
#include<iostream>
using namespace std;
class pointer{
    public:
    string *ptr;
    pointer(string str){
        ptr=new string (str);
    }
    void display(){
        cout<<"The String is : "<<*ptr<<endl;
    }
    ~pointer(){
    }
};
int main() {
    string s;
    cout << "Enter the String : ";
    cin>>s;
    pointer p(s);    
    p.display();
}