#include <iostream>
using namespace std;

int main() {
    double a, b;
    cout << "Enter two numbers: ";
    if (!(cin >> a >> b)) {
        cerr << "Invalid input." << endl;
        return 1;
    }

    cout << "Sum: " << a + b << endl;
    cout << "Difference: " << a - b << endl;
    cout << "Product: " << a * b << endl;
    if (b != 0) {
        cout << "Quotient: " << a / b << endl;
    } else {
        cout << "Quotient: undefined (division by zero)" << endl;
    }

    cout << boolalpha;
    cout << "a < b: " << (a < b) << endl;
    cout << "Both positive: " << (a > 0 && b > 0) << endl;
    return 0;
}
