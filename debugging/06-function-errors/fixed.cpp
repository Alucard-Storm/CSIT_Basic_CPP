#include <iostream>
using namespace std;

int add(int a, int b);

int main() {
    cout << "3 + 4 = " << add(3, 4) << endl;
    cout << "10 + 20 = " << add(10, 20) << endl;
    return 0;
}

int add(int a, int b) {
    return a + b;
}
