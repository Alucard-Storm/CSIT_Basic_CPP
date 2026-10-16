#include <iomanip>
#include <iostream>
using namespace std;

int main() {
    int choice;
    double value;

    cout << "1. km to miles" << endl;
    cout << "2. Celsius to Fahrenheit" << endl;
    cout << "3. kg to pounds" << endl;
    cout << "Choose and enter value: ";
    if (!(cin >> choice >> value)) {
        cerr << "Invalid input." << endl;
        return 1;
    }

    cout << fixed << setprecision(2);
    switch (choice) {
        case 1:
            cout << value << " km = " << value * 0.621371 << " miles" << endl;
            break;
        case 2:
            cout << value << " C = " << value * 9 / 5 + 32 << " F" << endl;
            break;
        case 3:
            cout << value << " kg = " << value * 2.20462 << " lb" << endl;
            break;
        default:
            cerr << "Unknown choice." << endl;
            return 1;
    }
    return 0;
}
