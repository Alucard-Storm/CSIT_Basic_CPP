#include <iostream>
using namespace std;

void swapValues(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

// A function can "return" several results by writing to reference parameters.
void findMinMax(int a, int b, int& smallest, int& largest) {
    if (a < b) {
        smallest = a;
        largest = b;
    } else {
        smallest = b;
        largest = a;
    }
}

int main() {
    int a, b, low, high;
    cout << "Enter two integers: ";
    if (!(cin >> a >> b)) {
        cerr << "Invalid input." << endl;
        return 1;
    }

    findMinMax(a, b, low, high);
    cout << "Minimum: " << low << endl;
    cout << "Maximum: " << high << endl;

    swapValues(a, b);
    cout << "After swap: " << a << " " << b << endl;
    return 0;
}
