// A function that calls itself. Every recursion needs a base case.
#include <iostream>
using namespace std;

long long factorial(int n) {
    if (n <= 1) return 1;          // base case
    return n * factorial(n - 1);   // recursive case
}

int main() {
    for (int i = 0; i <= 10; i++) {
        cout << i << "! = " << factorial(i) << endl;
    }
    return 0;
}
