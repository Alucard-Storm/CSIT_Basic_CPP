#include <iomanip>
#include <iostream>
using namespace std;

class Rectangle {
private:
    double length;
    double width;

public:
    Rectangle(double l, double w) : length(l), width(w) {}

    double area() const {
        return length * width;
    }

    double perimeter() const {
        return 2 * (length + width);
    }
};

int main() {
    double l, w;
    cout << "Enter length and width: ";
    if (!(cin >> l >> w) || l < 0 || w < 0) {
        cerr << "Dimensions must be non-negative." << endl;
        return 1;
    }

    Rectangle r(l, w);
    cout << fixed << setprecision(2);
    cout << "Area: " << r.area() << endl;
    cout << "Perimeter: " << r.perimeter() << endl;
    return 0;
}
