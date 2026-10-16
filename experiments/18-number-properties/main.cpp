#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a non-negative integer (at most 1000000): ";
    if (!(cin >> n) || n < 0 || n > 1000000) {
        cerr << "Invalid input." << endl;
        return 1;
    }

    // Reverse the digits and add up their cubes.
    int reversed = 0, sumCubes = 0;
    int temp = n;
    while (temp > 0) {
        int digit = temp % 10;
        reversed = reversed * 10 + digit;
        sumCubes += digit * digit * digit;
        temp /= 10;
    }

    // Add up the proper divisors (divisors smaller than n).
    int sumDivisors = 0;
    for (int i = 1; i <= n / 2; i++) {
        if (n % i == 0) {
            sumDivisors += i;
        }
    }

    bool palindrome = (reversed == n);
    bool armstrong = (n >= 100 && n <= 999 && sumCubes == n);
    bool perfect = (n > 1 && sumDivisors == n);

    cout << "Palindrome: " << (palindrome ? "Yes" : "No") << endl;
    cout << "Three-digit Armstrong: " << (armstrong ? "Yes" : "No") << endl;
    cout << "Perfect number: " << (perfect ? "Yes" : "No") << endl;
    return 0;
}
