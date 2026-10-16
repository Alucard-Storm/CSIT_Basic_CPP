#include <iostream>
using namespace std;

int main() {
    const int MAX = 10;
    int a[MAX][MAX];
    int n;

    cout << "Enter square matrix size (1-10): ";
    if (!(cin >> n) || n < 1 || n > MAX) {
        cerr << "Invalid size." << endl;
        return 1;
    }

    cout << "Enter matrix values: ";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (!(cin >> a[i][j])) {
                cerr << "Invalid matrix." << endl;
                return 1;
            }
        }
    }

    cout << "Transpose:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << a[j][i];
            if (j + 1 < n) {
                cout << " ";
            }
        }
        cout << endl;
    }

    int diagonal = 0;
    for (int i = 0; i < n; i++) {
        diagonal += a[i][i];
    }
    cout << "Main diagonal sum: " << diagonal << endl;
    return 0;
}
