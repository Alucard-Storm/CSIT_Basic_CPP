#include <iostream>
using namespace std;

int main() {
    double a, b;
    char op;
    cout << "Enter expression (number operator number), e.g. 8 * 3: ";
    cin >> a >> op >> b;

    switch (op) {
        case '+': cout << a << " + " << b << " = " << a + b << endl; break;
        case '-': cout << a << " - " << b << " = " << a - b << endl; break;
        case '*': cout << a << " * " << b << " = " << a * b << endl; break;
        case '/':
            if (b == 0) cout << "Error: division by zero" << endl;
            else cout << a << " / " << b << " = " << a / b << endl;
            break;
        default:
            cout << "Unknown operator '" << op << "'" << endl;
    }
    return 0;
}
