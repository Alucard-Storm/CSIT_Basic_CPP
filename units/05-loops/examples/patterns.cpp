// Nested loops: the outer loop picks the row, the inner loop prints the columns.
#include <iostream>
using namespace std;

int main() {
    int n = 5;
    for (int row = 1; row <= n; row++) {
        for (int col = 1; col <= row; col++) {
            cout << "* ";
        }
        cout << endl;
    }

    cout << endl << "Multiplication table of 7" << endl;
    for (int i = 1; i <= 10; i++) {
        cout << "7 x " << i << " = " << 7 * i << endl;
    }
    return 0;
}
