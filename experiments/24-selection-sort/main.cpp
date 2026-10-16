#include <iostream>
using namespace std;

int main() {
    const int MAX = 100;
    int a[MAX];
    int n;

    cout << "Enter number of elements (1-100): ";
    if (!(cin >> n) || n < 1 || n > MAX) {
        cerr << "Invalid size." << endl;
        return 1;
    }

    cout << "Enter " << n << " integers: ";
    for (int i = 0; i < n; i++) {
        if (!(cin >> a[i])) {
            cerr << "Invalid list." << endl;
            return 1;
        }
    }

    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (a[j] < a[minIndex]) {
                minIndex = j;
            }
        }
        int temp = a[i];
        a[i] = a[minIndex];
        a[minIndex] = temp;
    }

    cout << "Sorted:";
    for (int i = 0; i < n; i++) {
        cout << " " << a[i];
    }
    cout << endl;
    return 0;
}
