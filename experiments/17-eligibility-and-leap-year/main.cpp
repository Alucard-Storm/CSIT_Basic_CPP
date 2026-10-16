#include <iostream>
using namespace std;

int main() {
    int age, year;
    cout << "Enter age and year: ";
    if (!(cin >> age >> year) || age < 0 || year < 1) {
        cerr << "Invalid input." << endl;
        return 1;
    }

    if (age >= 18) {
        cout << "Voting eligible: Yes" << endl;
    } else {
        cout << "Voting eligible: No" << endl;
    }

    bool leap = (year % 400 == 0) || (year % 4 == 0 && year % 100 != 0);
    if (leap) {
        cout << year << " is a leap year" << endl;
    } else {
        cout << year << " is not a leap year" << endl;
    }
    return 0;
}
