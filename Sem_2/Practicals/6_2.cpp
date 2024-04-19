//Create a function called reverse () that takes two parameters. The first parameter, called str is a pointer to a string that will be reversed upon return from the function. The second parameter is called count, and it specifies how many characters of str to reverse. Give count a default value that, when present, tells reverse () to reverse the entire string.
#include <iostream>
#include<string>
using namespace std;
void reverse(string &str,int count){
    int len=str.length();
    if (count==0){
        cout<<str<<endl;
    }
    else{
    for(int i=0,j=count-1;i<j;i++,j--){
            char temp=str[i];
            str[i]=str[j];
            str[j]=temp;
        }
        cout<<"Reversed String :"<<str<<endl;
    }
}
int main(){
    string str;
    int count;
    cout<<"Enter the string :";
    cin>>str;
    cout<<"Enter the count :";
    cin>>count;
    reverse(str,count);
}