// A pointer stores the address of another variable.
#include <iostream>
using namespace std;

int main() {
    int x = 42;
    int* p = &x;      // p holds the address of x

    cout << "x  = " << x << endl;
    cout << "&x = " << &x << "  (address of x)" << endl;
    cout << "p  = " << p << "  (same address)" << endl;
    cout << "*p = " << *p << "  (value at that address)" << endl;

    *p = 100;         // change x through the pointer
    cout << "after *p = 100, x = " << x << endl;

    int arr[3] = {10, 20, 30};
    int* q = arr;     // array name decays to a pointer to its first element
    for (int i = 0; i < 3; i++) cout << *(q + i) << " ";
    cout << endl;
    return 0;
}
