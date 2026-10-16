#include <iomanip>
#include <iostream>
using namespace std;

int main() {
    double principal, rate, years, price, discount;

    cout << "Enter principal, annual rate (%), years: ";
    if (!(cin >> principal >> rate >> years) || principal < 0 || rate < 0 || years < 0) {
        cerr << "Enter non-negative numeric values." << endl;
        return 1;
    }

    cout << "Enter item price and discount (%): ";
    if (!(cin >> price >> discount) || price < 0 || discount < 0 || discount > 100) {
        cerr << "Invalid price or discount." << endl;
        return 1;
    }

    double interest = principal * rate * years / 100;
    double finalPrice = price * (1 - discount / 100);

    cout << fixed << setprecision(2);
    cout << "Simple interest: " << interest << endl;
    cout << "Final price: " << finalPrice << endl;
    return 0;
}
