// switch: choose between many fixed values. Note the break statements.
#include <iostream>
using namespace std;

int main() {
    int day;
    cout << "Enter day number (1-7): ";
    cin >> day;

    switch (day) {
        case 1: cout << "Monday" << endl; break;
        case 2: cout << "Tuesday" << endl; break;
        case 3: cout << "Wednesday" << endl; break;
        case 4: cout << "Thursday" << endl; break;
        case 5: cout << "Friday" << endl; break;
        case 6:
        case 7: cout << "Weekend" << endl; break;
        default: cout << "Not a valid day" << endl;
    }
    return 0;
}
