//Design a class Polar which describes a point in the plane using polar coordinates radius and angle. Use overloaded + operator to add two polar objects

#include <iostream>
using namespace std;

class Polar {
    public:
    double radius;
    double angle;
    Polar(double r, double a) {
        radius = r;
        angle = a;
    }
    Polar operator+(Polar p) {
        return Polar(radius + p.radius, angle + p.angle);
    }
};

int main() {
    Polar P1(3,45), P2(6,90);
    cout << "P1=("<<P1.radius<<","<<P1.angle<<")"<<endl;
    cout << "P2=("<<P2.radius<<","<<P2.angle<<")"<<endl;
    Polar P3 = P1+P2;
    cout << "(P1+P2)=("<<P3.radius<<","<<P3.angle<<")"<<endl;
}