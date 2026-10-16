// if / else if / else: pick one branch.
#include <iostream>
using namespace std;

int main() {
    int marks;
    cout << "Enter marks (0-100): ";
    cin >> marks;

    if (marks < 0 || marks > 100) {
        cout << "Invalid marks" << endl;
    } else if (marks >= 75) {
        cout << "Distinction" << endl;
    } else if (marks >= 40) {
        cout << "Pass" << endl;
    } else {
        cout << "Fail" << endl;
    }
    return 0;
}
