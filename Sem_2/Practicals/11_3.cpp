//Define two classes Polar and Rectangle to represent points in the polar and rectangular systems. Use conversion routines to convert from one system to the other.
#include <iostream>
#include <cmath>
using namespace std;
class Polar {
private:
    double radius;
    double angle; 
public:
    Polar(double r, double a) : radius(r), angle(a) {}
    void toRectangle() {
        double x = radius * cos(angle);
        double y = radius * sin(angle);
        cout << "Rectangular coordinates: (" << x << ", " << y << ")\n";
    }
};
class Rectangle {
private:
    double x;
    double y;
public:
    Rectangle(double a, double b) : x(a), y(b) {}
    void toPolar() {
        double r = sqrt(x * x + y * y);
        double theta = atan2(y, x); // In radians
        cout << "Polar coordinates: (r=" << r << ", θ=" << theta << ")\n";
    }
};
int main() {
    Polar p(5.0, 0.5236);
    p.toRectangle();
    Rectangle r(3.0, 4.0);
    r.toPolar();
}
