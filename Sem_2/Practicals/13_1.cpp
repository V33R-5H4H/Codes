//Write a program to demonstrate how parameters are passed to the base class constructor via the derived class constructor. 
#include <iostream>
#include <string>
using namespace std;
class Person {
public:
    string name;
    Person(const string& n):name(n){}
};
class Employee : public Person {
public:
    int employeeID;
    Employee(const string& n, int id):Person(n),employeeID(id){}
};
int main() {
    Employee emp("Alice", 101);
    cout << "Employee Name: " << emp.name << endl;
    cout << "Employee ID: " << emp.employeeID << endl;
    return 0;
}
