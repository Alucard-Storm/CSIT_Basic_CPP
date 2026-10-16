#include <algorithm>
#include <iomanip>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Enter number of expenses (1-100): ";
    if (!(cin >> n) || n < 1 || n > 100) {
        cerr << "Invalid count." << endl;
        return 1;
    }

    vector<double> expenses(n);
    double total = 0;
    for (int i = 0; i < n; i++) {
        cout << "Expense " << i + 1 << ": ";
        if (!(cin >> expenses[i]) || expenses[i] < 0) {
            cerr << "Expense must be non-negative." << endl;
            return 1;
        }
        total += expenses[i];
    }

    cout << fixed << setprecision(2);
    cout << "Total: " << total << endl;
    cout << "Average: " << total / n << endl;
    cout << "Minimum: " << *min_element(expenses.begin(), expenses.end()) << endl;
    cout << "Maximum: " << *max_element(expenses.begin(), expenses.end()) << endl;
    return 0;
}
