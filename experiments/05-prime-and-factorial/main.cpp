#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a positive integer (at most 20): ";
    cin >> n;
    if (n < 1 || n > 20) {
        cout << "Out of range." << endl;
        return 1;
    }

    long long fact = 1;
    for (int i = 2; i <= n; i++) fact *= i;
    cout << n << "! = " << fact << endl;

    bool isPrime = n > 1;
    for (int d = 2; d * d <= n; d++) {
        if (n % d == 0) {
            isPrime = false;
            break;
        }
    }
    cout << n << (isPrime ? " is" : " is not") << " a prime number" << endl;

    cout << "Primes up to " << n << ":";
    for (int k = 2; k <= n; k++) {
        bool p = true;
        for (int d = 2; d * d <= k; d++) {
            if (k % d == 0) { p = false; break; }
        }
        if (p) cout << " " << k;
    }
    cout << endl;
    return 0;
}
