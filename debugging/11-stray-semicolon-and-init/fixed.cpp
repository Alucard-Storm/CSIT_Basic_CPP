#include <iostream>
using namespace std;

int main() {
    int i;
    for (i = 1; i <= 3; i++) {
        cout << "Row " << i << endl;
    }

    int fact = 1;
    for (int k = 1; k <= 5; k++) {
        fact *= k;
    }
    cout << "5! = " << fact << endl;
    return 0;
}
