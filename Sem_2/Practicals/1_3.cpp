//Create a String class that includes all the string-related functions. Like Length, copy, compare, concatenation, sub string search (Without using inbuilt string functions).
#include<iostream>
using namespace std;
class String {
    public:
    int l1=0,l2=0,len = 0;
    char c,*str;
    string str1,str2;
    int str_len(string str) {
        while (str[len]!= '\0') {
            len++;
        }
        return len;
    }
    string str_copy(string str1, string str2) {
        cout<<"Entered String is : "<<str2;
        str2=str1;
        cout<<endl<<"String after copying is : "<<str2<<endl;
        return str2;    
    }
    string compare(string str1,string str2) {
        if (str1 == str2) {
            cout<<"Strings are Equal"<<endl;
        }
        else {
            cout<<"Strings are Not Equal"<<endl;
        }
        return str2;
    }
    string str_concat(string str1, string str2){
        cout<<"Entered String is : "<<str1<<endl;
        str1=str1+str2;
        cout<<"Concatenated String is : "<<str1<<endl;
        return str1;
    }   
    int str_search(string str1){
        cout<<"Enter Character to be searched : ";
        cin>>c;
        for(int i=0;i<str_len(str1);i++){
            if(str1[i]==c){
                cout<<"Found Character at index: "<<i<<endl;
            }
        }
    }
};
int main(){
    char c;
    string str1,str2;
    String s;
    cout<<"Enter string 1 : ";
    cin>>str1;
    cout<<"length of String 1 : "<<s.str_len(str1)<< endl;
    cout<<"Enter string 2 : ";
    cin>>str2;
    cout<<"length of String 2 : "<<s.str_len(str2)<< endl;
    s.compare(str1,str2);
    str1=s.str_concat(str1,str2);
    s.str_search(str1);
    s.str_copy(str1,str2);
}
/* Updated 
//Create a String class that includes all the string-related functions. Like Length, copy, compare, concatenation, sub string search (Without using inbuilt string functions).
#include<iostream>
using namespace std;
class String {
    public:
    int l1=0,l2=0,len=0;
    char *str;
    string c,str1,str2;
    int str_len(string str) {
        while (str[len]!='\0') {
            len++;
        }
        return len;
        len=0;
    }
    string str_copy(string str1, string str2) {
        cout<<"Entered String is : "<<str2;
        str2=str1;
        cout<<endl<<"String after copying is : "<<str2<<endl;
        return str2;    
    }
    string compare(string str1,string str2) {
        if (str1 == str2) {
            cout<<"Strings are Equal"<<endl;
        }
        else {
            cout<<"Strings are Not Equal"<<endl;
        }
        return str2;
    }
    string str_concat(string str1, string str2){
        cout<<"Entered String is : "<<str1<<endl;
        str1=str1+str2;
        cout<<"Concatenated String is : "<<str1<<endl;
        return str1;
    }  
    size_t str_search(const string &str1,const string &c){
        size_t lenstr1=str1.length();
        size_t lenc=c.length();
        for(size_t i=0;i<=lenstr1-lenc;++i) {
            bool found=true;
            for(size_t j=0;j<lenc;++j) {
                if(str1[i+j]!=c[j]) {
                  found = false;
                  break;
                }
            }
            if(found){
                return i;
            }
        }
        return -1;
    }
};
int main(){
    string c;
    string str1,str2;
    String s;
    cout<<"Enter string 1 : ";
    cin>>str1;
    cout<<"length of String 1 : "<<s.str_len(str1)<< endl;
    cout<<"Enter string 2 : ";
    cin>>str2;
    cout<<"length of String 2 : "<<s.str_len(str2)<< endl;
    s.compare(str1,str2);
    str1=s.str_concat(str1,str2);
    cout<<"Enter String to be searched : ";
    cin>>c;
    size_t pos=s.str_search(str1,c);
    if (pos!=-1){
        cout<<"Found at index "<<pos<<endl;
    }
    else{
        cout<<"Not Found!"<<endl;
    }
    s.str_copy(str1,str2);
}
*/