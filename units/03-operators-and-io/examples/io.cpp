// Reading input with cin and formatting output.
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    string name;
    int age;
    double marks;

    cout << "Enter your first name: ";
    cin >> name;
    cout << "Enter your age: ";
    cin >> age;
    cout << "Enter your marks: ";
    cin >> marks;

    cout << "Hello, " << name << "! You are " << age << " years old." << endl;
    cout << fixed << setprecision(2);
    cout << "Marks: " << marks << endl;
    cout << "Marks (width 10): [" << setw(10) << marks << "]" << endl;
    return 0;
}
