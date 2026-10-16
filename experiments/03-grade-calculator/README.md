# Experiment 03: Grade Calculator

*Related notes: [Unit 04](../../units/04-decisions/README.md)*

## Aim

To read marks in three subjects, compute the average and assign a letter grade using `if – else if – else`.

## Theory

Conditional statements let a program choose between paths. Conditions are tested top to bottom and the first true one runs; the rest are skipped. Relational operators (`<`, `>=`, `==`) and logical operators (`&&`, `||`, `!`) build the conditions. Validating input before using it avoids nonsense results.

## Algorithm

1. Start
2. Read `m1`, `m2`, `m3`
3. If any mark is outside 0–100, print an error and stop
4. Compute `average = (m1 + m2 + m3) / 3`
5. If average ≥ 90 → A; else if ≥ 75 → B; else if ≥ 60 → C; else if ≥ 40 → D; else F
6. Stop

## Program

Source file: [`main.cpp`](main.cpp)

```cpp
#include <iostream>
using namespace std;

int main() {
    double m1, m2, m3;
    cout << "Enter marks in three subjects (out of 100): ";
    cin >> m1 >> m2 >> m3;

    if (m1 < 0 || m1 > 100 || m2 < 0 || m2 > 100 || m3 < 0 || m3 > 100) {
        cout << "Invalid marks entered." << endl;
        return 1;
    }

    double average = (m1 + m2 + m3) / 3;
    cout << "Average = " << average << endl;

    if (average >= 90) cout << "Grade: A" << endl;
    else if (average >= 75) cout << "Grade: B" << endl;
    else if (average >= 60) cout << "Grade: C" << endl;
    else if (average >= 40) cout << "Grade: D" << endl;
    else cout << "Grade: F (Fail)" << endl;
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
82 76 91
```

Output produced by the program (the typed input does not appear below when it is read from a file, so each prompt is followed directly by the next output):

```text
Enter marks in three subjects (out of 100): Average = 83
Grade: B
```

## Result

The program was compiled and executed successfully and produced the expected output for the sample input.

## Viva Questions

1. Why is the order of the `else if` conditions important?
2. What is the difference between `=` and `==`?
3. What does `||` do when the left operand is already true?
4. Can an `if` have no `else`? When is that useful?

---
[← Previous](../02-temperature-conversion/README.md) · [All experiments](../README.md) · [Next →](../04-menu-calculator/README.md)
