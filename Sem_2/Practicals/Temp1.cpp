// sub string search
#include <iostream>
using namespace std;

class str
{
private:
    char word[20], sub[20];
public:
    void get()
    {
        cout<<"Enter string : ";
        cin>>word;
        cout<<"Enter sub string : ";
        cin>>sub;
    }
    void check()
    {
        int j,i,ok=0;
        for(j=0; j<20; j++)
        {
            for(i=0;i<20;i++){
                if(word[j]==sub[i])
                {  
                    ok=1;
                    break;
                }
            }           
        }
        if(ok==1)
        {
            cout<<"YES";
        }
        else
        {
            cout<<"NO";
        }
    }
};
int main()
{
    str s;
    s.get();
    s.check();
    return 0;
}