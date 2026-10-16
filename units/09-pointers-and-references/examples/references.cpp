// Pass by value vs pass by reference.
#include <iostream>
using namespace std;

void swapByValue(int a, int b) {
    int t = a; a = b; b = t;       // changes only the copies
}

void swapByReference(int& a, int& b) {
    int t = a; a = b; b = t;       // changes the caller's variables
}

int main() {
    int x = 1, y = 2;
    swapByValue(x, y);
    cout << "after swapByValue:     x=" << x << " y=" << y << endl;
    swapByReference(x, y);
    cout << "after swapByReference: x=" << x << " y=" << y << endl;
    return 0;
}
