// A class bundles data (members) with the functions that work on it (methods).
#include <iostream>
using namespace std;

class Rectangle {
private:
    double length;
    double width;

public:
    Rectangle(double l, double w) {   // constructor
        length = l;
        width = w;
    }
    double area() const { return length * width; }
    double perimeter() const { return 2 * (length + width); }
};

int main() {
    Rectangle r(5, 3);
    cout << "Area      = " << r.area() << endl;
    cout << "Perimeter = " << r.perimeter() << endl;
    return 0;
}
