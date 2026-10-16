# Experiment 16: Simple Interest and Discount Calculator

**Level:** Core  
*Related notes: [Unit 02](../../units/02-variables-and-types/README.md), [Unit 03](../../units/03-operators-and-io/README.md)*

## Aim

Calculate simple interest and a discounted price using input values and floating-point arithmetic.

## Theory

Simple interest is SI = P × R × T / 100 for principal P, annual rate R (%) and time T (years). A discount of d % leaves a final price of price × (1 − d/100). Negative amounts and a discount above 100 % make no sense, so the input is validated. `fixed` and `setprecision(2)` print money with two decimals.

## Algorithm

1. Start
2. Read `principal`, `rate`, `years`; reject negative values
3. Read `price` and `discount`; reject negative prices and discounts outside 0–100
4. Compute `interest = principal * rate * years / 100`
5. Compute `finalPrice = price * (1 - discount / 100)`
6. Print both values with two decimal places and stop

## Program

Source file: [`main.cpp`](main.cpp)

```cpp
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
```

Compile and run:

```bash
g++ -std=c++17 -Wall -Wextra -o prog main.cpp
./prog
```

## Sample Input / Output

Input (typed by the user):

```text
1000 5 2
500 10
```

Output produced by the program (the typed input does not appear below when it is read from a file, so each prompt is followed directly by the next output):

```text
Enter principal, annual rate (%), years: Enter item price and discount (%): Simple interest: 100.00
Final price: 450.00
```

## Challenge

Also print the total amount (principal plus interest) and the amount saved by the discount.

## Result

The program was compiled and executed successfully and produced the expected output for the sample input.

## Viva Questions

1. Write the formula for simple interest.
2. What is the difference between simple and compound interest?
3. Why is the discount limited to 100?
4. What happens if you write `discount / 100` with two `int` variables?

---
[← Previous](../15-operators-and-expressions/README.md) · [All experiments](../README.md) · [Next →](../17-eligibility-and-leap-year/README.md)
