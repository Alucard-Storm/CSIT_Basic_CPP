// Declaring, defining and calling functions; pass by value.
#include <iostream>
#include <string>
using namespace std;

int square(int x);                 // declaration (prototype)
double average(double a, double b);
void greet(string name);

int main() {
    cout << "square(6) = " << square(6) << endl;
    cout << "average(4, 9) = " << average(4, 9) << endl;
    greet("Asha");
    return 0;
}

int square(int x) {
    return x * x;
}

double average(double a, double b) {
    return (a + b) / 2;
}

void greet(string name) {
    cout << "Welcome, " << name << "!" << endl;
}
