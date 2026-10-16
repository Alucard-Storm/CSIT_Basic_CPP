#include <iostream>
using namespace std;

void swapPointers(int* p, int* q) {
    int t = *p;
    *p = *q;
    *q = t;
}

void swapReferences(int& a, int& b) {
    int t = a;
    a = b;
    b = t;
}

int main() {
    int x, y;
    cout << "Enter two integers: ";
    cin >> x >> y;

    swapPointers(&x, &y);
    cout << "After swap using pointers:    x = " << x << ", y = " << y << endl;
    swapReferences(x, y);
    cout << "After swap using references:  x = " << x << ", y = " << y << endl;

    int arr[5] = {5, 10, 15, 20, 25};
    int* p = arr;
    int total = 0;
    for (int i = 0; i < 5; i++) total += *(p + i);
    cout << "Sum of array via pointer = " << total << endl;
    return 0;
}
