#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double celsius;
    cout << "Enter temperature in Celsius: ";
    cin >> celsius;

    double fahrenheit = celsius * 9.0 / 5.0 + 32.0;
    double kelvin = celsius + 273.15;

    cout << fixed << setprecision(2);
    cout << "Fahrenheit = " << fahrenheit << endl;
    cout << "Kelvin     = " << kelvin << endl;
    return 0;
}
