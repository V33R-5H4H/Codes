#include<iostream>
using namespace std;
int main()
{
    int i,j=0,s=0,e=0;
    double x;
    cout<<"Enter X : ";
    cin>>x;
    string str;
    str=to_string(x);
    //cout<<str<<endl;
    for (i=0;str[i]!='.';i++){
        s=i+1;
    }
    int len = 0;
    while (str[len]!= '\0') {
        len++;
    }
    e=len;
    for(i=len-1;str[i]=='0';i--){
        e--;
    }
    cout<<"Numbers After "<<endl;
    for(i=s;i<e;i++){
        cout<<str[i]<<endl;
        j++;
    }
    cout<<"No of terms after Decimal are :"<<j-1<<endl;
}