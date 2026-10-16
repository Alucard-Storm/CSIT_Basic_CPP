#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    if (n = 10) {
        cout << "Ten" << endl;
    } else {
        cout << "Not ten" << endl;
    }
    switch (n % 3) {
        case 0:
            cout << "divisible by 3" << endl;
            break;
        case 1:
            cout << "remainder 1" << endl;
        default:
            cout << "remainder 2" << endl;
    }
    return 0;
}
