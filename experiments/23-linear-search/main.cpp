#include <iostream>
using namespace std;

int main() {
    const int MAX = 100;
    int values[MAX];
    int n, target;

    cout << "Enter number of elements (1-100): ";
    if (!(cin >> n) || n < 1 || n > MAX) {
        cerr << "Invalid size." << endl;
        return 1;
    }

    cout << "Enter " << n << " integers: ";
    for (int i = 0; i < n; i++) {
        if (!(cin >> values[i])) {
            cerr << "Invalid list." << endl;
            return 1;
        }
    }

    cout << "Enter target: ";
    if (!(cin >> target)) {
        cerr << "Invalid target." << endl;
        return 1;
    }

    int index = -1;
    for (int i = 0; i < n; i++) {
        if (values[i] == target) {
            index = i;
            break;
        }
    }

    if (index == -1) {
        cout << "Not found" << endl;
    } else {
        cout << "Found at zero-based index: " << index << endl;
    }
    return 0;
}
