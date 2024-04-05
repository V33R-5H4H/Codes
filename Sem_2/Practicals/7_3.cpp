// Create a class time with members hours and minutes. Write a member function ‘add’ which takes 2 arguments of type class time and demonstrate the use with a main program.
#include <iostream>
using namespace std;
class time
{
public:
    float h, m;
    float t;
    float get()
    {
        cout << "Enter Hours : ";
        cin >> h;
        cout << "Enter Minutes : ";
        cin >> m;
        if (m >= 60)
        {
            m = m - 60;
            h = h + 1;
        }
        t = h + (m / 100);
        cout << "Total Time is : ";
        return t;
    }
    float add(time t1, time t2)
    {
        t = (t1.t + t2.t);
        cout << "Time After adding is : ";
        return t;
    }
};
int main()
{
    time t, t1, t2;
    cout << t1.get() << endl;
    cout << t2.get() << endl;
    cout << t.add(t1, t2);
}