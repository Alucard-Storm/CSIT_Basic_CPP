#include <iostream>
using namespace std;

long long sumTo(int n) {
    if (n <= 0) {
        return 0;                  // base case
    }
    return n + sumTo(n - 1);       // recursive case
}

long long factorial(int n) {
    if (n <= 1) {
        return 1;                  // base case
    }
    return n * factorial(n - 1);   // recursive case
}

int main() {
    int n;
    cout << "Enter n (0 to 12): ";
    if (!(cin >> n) || n < 0 || n > 12) {
        cerr << "Enter an integer from 0 to 12." << endl;
        return 1;
    }

    cout << "Sum 1..n: " << sumTo(n) << endl;
    cout << "n factorial: " << factorial(n) << endl;
    return 0;
}
