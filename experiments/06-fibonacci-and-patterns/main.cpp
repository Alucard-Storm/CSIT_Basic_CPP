#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of terms: ";
    cin >> n;

    long long a = 0, b = 1;
    cout << "Fibonacci series:";
    for (int i = 0; i < n; i++) {
        cout << " " << a;
        long long next = a + b;
        a = b;
        b = next;
    }
    cout << endl << endl;

    cout << "Pyramid of " << n << " rows:" << endl;
    for (int row = 1; row <= n; row++) {
        for (int s = 0; s < n - row; s++) cout << " ";
        for (int k = 0; k < 2 * row - 1; k++) cout << "*";
        cout << endl;
    }
    return 0;
}
