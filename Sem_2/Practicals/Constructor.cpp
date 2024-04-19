#include<iostream>
#include<string>
using namespace std;
class student{
    public:
    int no;
    string name;
    student()
    {
        no=0;
    }
    student(int i){
        no=i;
    }
    student(int i,string c){
        no=i;
        name=c;
    }
};
int main()
{
student s1;
cout<<s1.no<<endl;
student s2(4);
cout<<s2.no<<endl;
student s3(2,"cds");
cout<<s3.no<<endl<<s3.name<<endl;
}