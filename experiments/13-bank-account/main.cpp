#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    string holder;
    double balance;

public:
    BankAccount(string name, double opening) : holder(name), balance(opening) {}

    void deposit(double amount) {
        if (amount > 0) balance += amount;
    }

    bool withdraw(double amount) {
        if (amount <= 0 || amount > balance) return false;
        balance -= amount;
        return true;
    }

    void display() const {
        cout << "Account holder: " << holder << ", balance: " << balance << endl;
    }
};

int main() {
    string name;
    double opening, dep, wd;
    cout << "Enter holder name and opening balance: ";
    cin >> name >> opening;
    BankAccount acc(name, opening);
    acc.display();

    cout << "Amount to deposit: ";
    cin >> dep;
    acc.deposit(dep);
    acc.display();

    cout << "Amount to withdraw: ";
    cin >> wd;
    if (acc.withdraw(wd)) cout << "Withdrawal successful." << endl;
    else cout << "Withdrawal refused (insufficient funds or invalid amount)." << endl;
    acc.display();
    return 0;
}
