// How much memory does each type use on this machine?
#include <iostream>
#include <climits>
using namespace std;

int main() {
    cout << "char   : " << sizeof(char) << " byte(s)\n";
    cout << "bool   : " << sizeof(bool) << " byte(s)\n";
    cout << "int    : " << sizeof(int) << " byte(s)\n";
    cout << "long   : " << sizeof(long) << " byte(s)\n";
    cout << "float  : " << sizeof(float) << " byte(s)\n";
    cout << "double : " << sizeof(double) << " byte(s)\n";
    cout << "int range: " << INT_MIN << " to " << INT_MAX << endl;
    return 0;
}
