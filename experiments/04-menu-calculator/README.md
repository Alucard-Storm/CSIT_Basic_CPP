# Experiment 04: Simple Calculator using switch

*Related notes: [Unit 04](../../units/04-decisions/README.md)*

## Aim

To build a calculator that reads `number operator number` and performs the operation using a `switch` statement.

## Theory

`switch` compares one expression against several constant `case` labels. `break` ends a case; without it execution falls through into the next case. `default` handles any value not listed. Division needs an explicit check for a zero divisor.

## Algorithm

1. Start
2. Read `a`, `op`, `b`
3. Switch on `op`: `+`, `-`, `*` print the result
4. For `/`, if `b == 0` print an error, otherwise print `a / b`
5. `default`: print “Unknown operator”
6. Stop

## Program

Source file: [`main.cpp`](main.cpp)

```cpp
#include <iostream>
using namespace std;

int main() {
    double a, b;
    char op;
    cout << "Enter expression (number operator number), e.g. 8 * 3: ";
    cin >> a >> op >> b;

    switch (op) {
        case '+': cout << a << " + " << b << " = " << a + b << endl; break;
        case '-': cout << a << " - " << b << " = " << a - b << endl; break;
        case '*': cout << a << " * " << b << " = " << a * b << endl; break;
        case '/':
            if (b == 0) cout << "Error: division by zero" << endl;
            else cout << a << " / " << b << " = " << a / b << endl;
            break;
        default:
            cout << "Unknown operator '" << op << "'" << endl;
    }
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
8 * 3
```

Output produced by the program (the typed input does not appear below when it is read from a file, so each prompt is followed directly by the next output):

```text
Enter expression (number operator number), e.g. 8 * 3: 8 * 3 = 24
```

## Result

The program was compiled and executed successfully and produced the expected output for the sample input.

## Viva Questions

1. What happens if `break` is omitted from a case?
2. Which data types can be used in a `switch` expression?
3. Why do we test for division by zero?
4. When would you prefer `if – else if` over `switch`?

---
[← Previous](../03-grade-calculator/README.md) · [All experiments](../README.md) · [Next →](../05-prime-and-factorial/README.md)
