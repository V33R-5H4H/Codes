//Write a program to implement single inheritance. Show the consequences of deriving a class in public, protected and private manner with a simple example.
#include <iostream>
using namespace std;
class Base {
public:
    virtual void show() = 0;
    Base(){} 
};
class A : public Base {
public:
    void show() override { cout << "Inside A::show()" << endl; }
};
class B : public Base {
public:
    void show() override final { cout << "Inside B::show(), which is the last one." << endl; }
};

int main(){
    Base* baseObjPtr = new A();    
    baseObjPtr->show();           
    Base* anotherBaseObjPtr = new B();
    anotherBaseObjPtr->show();        
    anotherBaseObjPtr->show();        
    ((A*)anotherBaseObjPtr)->show();  
    delete anotherBaseObjPtr;
    return 0;
}