#include <iostream>
using namespace std;

int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);          // Euclid's algorithm
}

long long power(int base, int exp) {
    if (exp == 0) return 1;
    return base * power(base, exp - 1);
}

int main() {
    int a, b, e;
    cout << "Enter two integers for GCD: ";
    cin >> a >> b;
    int g = gcd(a, b);
    cout << "GCD = " << g << endl;
    cout << "LCM = " << (g == 0 ? 0 : a / g * b) << endl;

    cout << "Enter base and exponent: ";
    cin >> a >> e;
    cout << a << "^" << e << " = " << power(a, e) << endl;
    return 0;
}
