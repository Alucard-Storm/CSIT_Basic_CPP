// Arithmetic, relational, logical and compound-assignment operators.
#include <iostream>
using namespace std;

int main() {
    int a = 17, b = 5;
    cout << "a + b = " << a + b << endl;
    cout << "a - b = " << a - b << endl;
    cout << "a * b = " << a * b << endl;
    cout << "a / b = " << a / b << endl;
    cout << "a % b = " << a % b << endl;

    cout << boolalpha;  // print true/false instead of 1/0
    cout << "a > b          : " << (a > b) << endl;
    cout << "a == b         : " << (a == b) << endl;
    cout << "a > 10 && b > 10: " << (a > 10 && b > 10) << endl;
    cout << "a > 10 || b > 10: " << (a > 10 || b > 10) << endl;
    cout << "!(a > b)       : " << !(a > b) << endl;

    int x = 10;
    x += 5;   // x = x + 5
    x *= 2;   // x = x * 2
    x++;      // x = x + 1
    cout << "x = " << x << endl;
    return 0;
}
