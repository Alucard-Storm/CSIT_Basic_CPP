#include <iostream>
using namespace std;

class Circle {
private:
    double radius;

public:
    Circle(double r) { radius = r; }
    double area() const { return 3.14159 * radius * radius; }
};

int main() {
    Circle c(2.0);
    cout << "Area = " << c.area() << endl;
    return 0;
}
