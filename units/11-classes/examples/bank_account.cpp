// Encapsulation: the balance can only change through validated methods.
#include <iostream>
using namespace std;

class BankAccount {
private:
    double balance;

public:
    BankAccount() : balance(0) {}

    void deposit(double amount) {
        if (amount > 0) balance += amount;
    }
    bool withdraw(double amount) {
        if (amount <= 0 || amount > balance) return false;
        balance -= amount;
        return true;
    }
    double getBalance() const { return balance; }
};

int main() {
    BankAccount acc;
    acc.deposit(500);
    cout << "Balance: " << acc.getBalance() << endl;
    cout << "Withdraw 200: " << (acc.withdraw(200) ? "ok" : "refused") << endl;
    cout << "Withdraw 900: " << (acc.withdraw(900) ? "ok" : "refused") << endl;
    cout << "Balance: " << acc.getBalance() << endl;
    return 0;
}
