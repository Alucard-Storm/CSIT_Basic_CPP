#include <iomanip>
#include <iostream>
using namespace std;

// Two functions share the name area; the arguments decide which one runs.
double area(double radius) {
    return 3.141592653589793 * radius * radius;
}

double area(double length, double width) {
    return length * width;
}

int main() {
    double r, l, w;

    cout << "Enter circle radius: ";
    if (!(cin >> r) || r < 0) {
        cerr << "Invalid radius." << endl;
        return 1;
    }

    cout << "Enter rectangle length and width: ";
    if (!(cin >> l >> w) || l < 0 || w < 0) {
        cerr << "Invalid dimensions." << endl;
        return 1;
    }

    cout << fixed << setprecision(2);
    cout << "Circle area: " << area(r) << endl;
    cout << "Rectangle area: " << area(l, w) << endl;
    return 0;
}
