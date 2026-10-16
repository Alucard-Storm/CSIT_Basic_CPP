#include <iostream>
#include <string>
using namespace std;

struct Student {
    string name;
    int rollNo;
    double marks;
};

int main() {
    int n;
    cout << "Number of students (max 20): ";
    cin >> n;
    if (n < 1 || n > 20) {
        cout << "Invalid count." << endl;
        return 1;
    }

    Student s[20];
    for (int i = 0; i < n; i++) {
        cout << "Enter name, roll number and marks of student " << i + 1 << ": ";
        cin >> s[i].name >> s[i].rollNo >> s[i].marks;
    }

    int top = 0;
    double total = 0;
    for (int i = 0; i < n; i++) {
        total += s[i].marks;
        if (s[i].marks > s[top].marks) top = i;
    }

    cout << "Roll\tName\tMarks" << endl;
    for (int i = 0; i < n; i++)
        cout << s[i].rollNo << "\t" << s[i].name << "\t" << s[i].marks << endl;
    cout << "Class average = " << total / n << endl;
    cout << "Topper: " << s[top].name << " (" << s[top].marks << ")" << endl;
    return 0;
}
