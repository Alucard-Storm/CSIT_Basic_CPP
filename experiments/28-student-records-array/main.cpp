#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

struct Student {
    string name;
    int roll;
    double marks;
};

int main() {
    const int MAX = 50;
    Student students[MAX];
    int n;

    cout << "Enter number of students (1-50): ";
    if (!(cin >> n) || n < 1 || n > MAX) {
        cerr << "Invalid count." << endl;
        return 1;
    }

    for (int i = 0; i < n; i++) {
        cout << "Enter roll, one-word name, marks for student " << i + 1 << ": ";
        cin >> students[i].roll >> students[i].name >> students[i].marks;
        if (!cin || students[i].marks < 0 || students[i].marks > 100) {
            cerr << "Invalid student data." << endl;
            return 1;
        }
    }

    int top = 0;
    for (int i = 1; i < n; i++) {
        if (students[i].marks > students[top].marks) {
            top = i;
        }
    }

    cout << fixed << setprecision(1);
    cout << "Top student: " << students[top].name
         << " (roll " << students[top].roll << "), marks "
         << students[top].marks << endl;
    return 0;
}
