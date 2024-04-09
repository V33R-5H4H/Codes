#include<iostream>
using namespace std;
class String {
    public:
    int l1=0,l2=0,len=0;
    char *str;
    string c,str1,str2;
    size_t str_search(const string &str1,const string &c){
        size_t lenstr1=str1.length();
        size_t lenc=c.length();
        for(size_t i=0;i<=lenstr1-lenc;++i) {
            bool found=true;
            for(size_t j=0;j<lenc;++j) {
                if(str1[i+j]!=c[j]) {
                  found=false;
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
    cout<<"Enter string 2 : ";
    cin>>str2;
    cout<<"Enter String to be searched : ";
    cin>>c;
    size_t pos=s.str_search(str1,c);
    if (pos!=-1){
        cout<<"Found at index "<<pos<<endl;
    }
    else{
        cout<<"Not Found!"<<endl;
    }
}