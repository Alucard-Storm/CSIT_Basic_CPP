#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "How many numbers (max 50)? ";
    cin >> n;
    if (n < 1 || n > 50) {
        cout << "Invalid size." << endl;
        return 1;
    }

    int a[50];
    cout << "Enter " << n << " numbers: ";
    for (int i = 0; i < n; i++) cin >> a[i];

    int sum = 0, largest = a[0], smallest = a[0];
    for (int i = 0; i < n; i++) {
        sum += a[i];
        if (a[i] > largest) largest = a[i];
        if (a[i] < smallest) smallest = a[i];
    }
    cout << "Sum = " << sum << ", Average = " << static_cast<double>(sum) / n << endl;
    cout << "Largest = " << largest << ", Smallest = " << smallest << endl;

    // Bubble sort (ascending)
    for (int pass = 0; pass < n - 1; pass++) {
        for (int i = 0; i < n - 1 - pass; i++) {
            if (a[i] > a[i + 1]) {
                int t = a[i];
                a[i] = a[i + 1];
                a[i + 1] = t;
            }
        }
    }
    cout << "Sorted:";
    for (int i = 0; i < n; i++) cout << " " << a[i];
    cout << endl;
    return 0;
}
