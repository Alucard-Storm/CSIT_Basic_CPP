#include <iostream>
using namespace std;

int main() {
    double m1, m2, m3;
    cout << "Enter marks in three subjects (out of 100): ";
    cin >> m1 >> m2 >> m3;

    if (m1 < 0 || m1 > 100 || m2 < 0 || m2 > 100 || m3 < 0 || m3 > 100) {
        cout << "Invalid marks entered." << endl;
        return 1;
    }

    double average = (m1 + m2 + m3) / 3;
    cout << "Average = " << average << endl;

    if (average >= 90) cout << "Grade: A" << endl;
    else if (average >= 75) cout << "Grade: B" << endl;
    else if (average >= 60) cout << "Grade: C" << endl;
    else if (average >= 40) cout << "Grade: D" << endl;
    else cout << "Grade: F (Fail)" << endl;
    return 0;
}
