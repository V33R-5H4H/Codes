//Create a class student with student name and age as data members. Define functions to read and display the data members.
#include <iostream>
using namespace std;
class Student{
    public:
    char s_name;
    int s_age;
    void set_data(){
        cout<<"Student Name : ";
        cin>>s_name;
        cout<<"Student Age : ";
        cin>>s_age;
    }
    void display(){
        cout<<"Student Name : "<<s_name<<endl;
        cout<<"Student Age : "<<s_age<<endl;
    }
};
int main(){
    Student st;
    st.set_data();
    st.display();
}
