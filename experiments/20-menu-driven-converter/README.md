# Experiment 20: Menu-Driven Unit Converter

**Level:** Core  
*Related notes: [Unit 04](../../units/04-decisions/README.md)*

## Aim

Use switch to convert kilometres to miles, Celsius to Fahrenheit, or kilograms to pounds.

## Theory

`switch` selects one branch by comparing an integer against `case` labels. Each branch ends with `break`; `default` runs when no label matches. Conversion factors: 1 km = 0.621371 miles, F = C × 9/5 + 32, 1 kg = 2.20462 lb. An unknown choice is reported as an error instead of being ignored.

## Algorithm

1. Start
2. Display the three-item menu
3. Read `choice` and `value`; stop with an error if the input is not numeric
4. `switch (choice)`: 1 → miles, 2 → Fahrenheit, 3 → pounds, each followed by `break`
5. `default`: print “Unknown choice.” and stop with a non-zero status
6. Stop

## Program

Source file: [`main.cpp`](main.cpp)

```cpp
#include <iomanip>
#include <iostream>
using namespace std;

int main() {
    int choice;
    double value;

    cout << "1. km to miles" << endl;
    cout << "2. Celsius to Fahrenheit" << endl;
    cout << "3. kg to pounds" << endl;
    cout << "Choose and enter value: ";
    if (!(cin >> choice >> value)) {
        cerr << "Invalid input." << endl;
        return 1;
    }

    cout << fixed << setprecision(2);
    switch (choice) {
        case 1:
            cout << value << " km = " << value * 0.621371 << " miles" << endl;
            break;
        case 2:
            cout << value << " C = " << value * 9 / 5 + 32 << " F" << endl;
            break;
        case 3:
            cout << value << " kg = " << value * 2.20462 << " lb" << endl;
            break;
        default:
            cerr << "Unknown choice." << endl;
            return 1;
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
2 25
```

Output produced by the program (the typed input does not appear below when it is read from a file, so each prompt is followed directly by the next output):

```text
1. km to miles
2. Celsius to Fahrenheit
3. kg to pounds
Choose and enter value: 25.00 C = 77.00 F
```

## Challenge

Wrap the menu in a `do-while` loop and add a fourth option `0. Exit`.

## Result

The program was compiled and executed successfully and produced the expected output for the sample input.

## Viva Questions

1. What happens if a `break` is missing from a case?
2. What is the purpose of `default`?
3. Can you switch on a `double`? Why not?
4. How would you repeat the menu until the user chooses to quit?

---
[← Previous](../19-multiplication-table-and-digit-sum/README.md) · [All experiments](../README.md) · [Next →](../21-functions-and-overloading/README.md)
