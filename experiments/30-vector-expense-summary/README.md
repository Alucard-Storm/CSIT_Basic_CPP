# Experiment 30: Expense Summary Using Vector

**Level:** Core  
*Related notes: [Unit 12](../../units/12-files-and-vectors/README.md)*

## Aim

Store expense amounts in a vector and calculate total, average, minimum, and maximum.

## Theory

`vector<double>` is a resizable array; `vector<double> expenses(n)` creates `n` elements. `min_element` and `max_element` from `<algorithm>` return *iterators* (like pointers), so `*` is used to read the value. The total is accumulated while reading, and the average is `total / n`.

## Algorithm

1. Start
2. Read `n` (1–100) and create `vector<double> expenses(n)`
3. For each expense: read it, reject negative values, and add it to `total`
4. Print `total` and `total / n`
5. Print the values found by `min_element` and `max_element`
6. Stop

## Program

Source file: [`main.cpp`](main.cpp)

```cpp
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
```

Compile and run:

```bash
g++ -std=c++17 -Wall -Wextra -o prog main.cpp
./prog
```

## Sample Input / Output

Input (typed by the user):

```text
3
100
250.5
49.5
```

Output produced by the program (the typed input does not appear below when it is read from a file, so each prompt is followed directly by the next output):

```text
Enter number of expenses (1-100): Expense 1: Expense 2: Expense 3: Total: 400.00
Average: 133.33
Minimum: 49.50
Maximum: 250.50
```

## Challenge

Use `push_back` to read expenses until the user enters 0, then print the same summary.

## Result

The program was compiled and executed successfully and produced the expected output for the sample input.

## Viva Questions

1. How does a `vector` differ from an array?
2. What does `expenses.size()` return?
3. Why is `*` needed in front of `min_element(...)`?
4. How would you read the expenses without asking for `n` first?

---
[← Previous](../29-rectangle-class/README.md) · [All experiments](../README.md) · [Next →](../31-file-line-word-counter/README.md)
