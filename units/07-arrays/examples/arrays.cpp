// A one-dimensional array: sum, average, largest.
#include <iostream>
using namespace std;

int main() {
    int marks[5] = {72, 85, 60, 91, 78};
    int n = 5;

    int sum = 0, largest = marks[0];
    for (int i = 0; i < n; i++) {
        sum += marks[i];
        if (marks[i] > largest) largest = marks[i];
    }

    cout << "Sum     = " << sum << endl;
    cout << "Average = " << static_cast<double>(sum) / n << endl;
    cout << "Largest = " << largest << endl;
    return 0;
}
