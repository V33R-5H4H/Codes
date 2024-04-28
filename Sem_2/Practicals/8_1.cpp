// Create a class sample with members a and b of type integer. Write a friend function that takes an object as argument and calculates the mean of the two members
#include <iostream>
using namespace std;
class sample{
    float a=4;
    float b=5;
public:
    friend float mean(sample obj);
};
float mean(sample obj){
    return (obj.a + obj.b)/2;
}
int main(){
    sample s1;
    cout << "Mean of the given numbers is : "<<mean(s1)<<endl;
    return 0;
}
