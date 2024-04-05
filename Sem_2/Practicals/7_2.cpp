// Create a class employee with suitable members and functions. Create an array of objects and demonstrate the use of the class using the main function.
#include <iostream>
using namespace std;
class employee {
public:
    int id, salary;
};
int main() {
    employee emp[5];
    for (int i=0;i<5;i++) {
        emp[i].id=i+101;
        emp[i].salary=(i+1)*emp[i].id;
    }
    for (int i=0;i<5;i++) {
        cout<<emp[i].id<<" "<<emp[i].salary<<endl;
    }
    return 0;
}