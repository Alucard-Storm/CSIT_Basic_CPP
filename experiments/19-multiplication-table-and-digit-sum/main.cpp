#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a non-negative integer (at most 1000000): ";
    if (!(cin >> n) || n < 0 || n > 1000000) {
        cerr << "Invalid input." << endl;
        return 1;
    }

    for (int i = 1; i <= 10; i++) {
        cout << n << " x " << i << " = " << n * i << endl;
    }

    // do-while so that n = 0 is counted as one digit.
    int temp = n, sum = 0, count = 0;
    do {
        sum += temp % 10;
        count++;
        temp /= 10;
    } while (temp > 0);

    cout << "Digit count: " << count << endl;
    cout << "Digit sum: " << sum << endl;
    return 0;
}
