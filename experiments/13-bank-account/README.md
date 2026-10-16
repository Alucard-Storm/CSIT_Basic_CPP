# Experiment 13: Bank Account using a Class

*Related notes: [Unit 11](../../units/11-classes/README.md)*

## Aim

To model a bank account as a class with private data and public methods for deposit, withdrawal and display.

## Theory

A class bundles data members and member functions. `private` members are hidden from outside code (encapsulation); `public` methods form the interface and can enforce rules, such as refusing to overdraw. A constructor runs automatically when an object is created and initialises its members. A `const` method promises not to modify the object.

## Algorithm

1. Start
2. Define class `BankAccount` with private `holder`, `balance`
3. Constructor sets `holder` and `balance`
4. `deposit(x)`: add `x` if `x > 0`
5. `withdraw(x)`: if `x` is valid and `x <= balance`, subtract and return `true`, else return `false`
6. In `main`, create an object from user input, deposit, attempt a withdrawal, display after each step
7. Stop

## Program

Source file: [`main.cpp`](main.cpp)

```cpp
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
```

Compile and run:

```bash
g++ -std=c++17 -Wall -Wextra -o prog main.cpp
./prog
```

## Sample Input / Output

Input (typed by the user):

```text
Asha 1000
500
2000
```

Output produced by the program (the typed input does not appear below when it is read from a file, so each prompt is followed directly by the next output):

```text
Enter holder name and opening balance: Account holder: Asha, balance: 1000
Amount to deposit: Account holder: Asha, balance: 1500
Amount to withdraw: Withdrawal refused (insufficient funds or invalid amount).
Account holder: Asha, balance: 1500
```

## Result

The program was compiled and executed successfully and produced the expected output for the sample input.

## Viva Questions

1. What is encapsulation and why is it useful?
2. What is a constructor? When is it called?
3. What is the difference between `private` and `public`?
4. What is the difference between a class and an object?

---
[← Previous](../12-student-records/README.md) · [All experiments](../README.md) · [Next →](../14-file-and-vector-marks/README.md)
