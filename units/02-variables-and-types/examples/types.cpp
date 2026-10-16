// Declaring and initialising variables of the basic types.
#include <iostream>
using namespace std;

int main() {
    int age = 19;
    double height = 1.72;
    char grade = 'A';
    bool passed = true;
    const double PI = 3.14159;

    cout << "age    = " << age << endl;
    cout << "height = " << height << endl;
    cout << "grade  = " << grade << endl;
    cout << "passed = " << passed << endl;
    cout << "PI     = " << PI << endl;

    int a = 7, b = 2;
    cout << "7 / 2          = " << a / b << endl;                   // integer division
    cout << "7.0 / 2        = " << static_cast<double>(a) / b << endl;
    return 0;
}
