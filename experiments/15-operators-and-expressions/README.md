# Experiment 15: Operators and Expression Evaluation

**Level:** Core  
*Related notes: [Unit 03](../../units/03-operators-and-io/README.md)*

## Aim

Read two numbers and display arithmetic results, integer quotient/remainder, comparisons, and a logical condition.

## Theory

Arithmetic operators (`+ - * /`) work on `double` values without truncating. Division by zero is a mistake, so the program tests the divisor before dividing. Relational (`<`) and logical (`&&`) operators produce a `bool`; `boolalpha` prints it as `true` or `false` instead of `1` or `0`.

## Algorithm

1. Start
2. Read `a` and `b` as `double`; stop with an error if the input is not numeric
3. Print the sum, difference and product
4. If `b != 0` print `a / b`, otherwise print that the quotient is undefined
5. Print `a < b` and `a > 0 && b > 0` using `boolalpha`
6. Stop

## Program

Source file: [`main.cpp`](main.cpp)

```cpp
#include <iostream>
using namespace std;

int main() {
    double a, b;
    cout << "Enter two numbers: ";
    if (!(cin >> a >> b)) {
        cerr << "Invalid input." << endl;
        return 1;
    }

    cout << "Sum: " << a + b << endl;
    cout << "Difference: " << a - b << endl;
    cout << "Product: " << a * b << endl;
    if (b != 0) {
        cout << "Quotient: " << a / b << endl;
    } else {
        cout << "Quotient: undefined (division by zero)" << endl;
    }

    cout << boolalpha;
    cout << "a < b: " << (a < b) << endl;
    cout << "Both positive: " << (a > 0 && b > 0) << endl;
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
7 2
```

Output produced by the program (the typed input does not appear below when it is read from a file, so each prompt is followed directly by the next output):

```text
Enter two numbers: Sum: 9
Difference: 5
Product: 14
Quotient: 3.5
a < b: false
Both positive: true
```

## Challenge

Also print `a` modulo `b` for the integer parts of the numbers (hint: cast to `int` and guard against zero).

## Result

The program was compiled and executed successfully and produced the expected output for the sample input.

## Viva Questions

1. What is the result of `7 / 2` for two `int`s and for two `double`s?
2. Why must we check `b != 0` before dividing?
3. What does `&&` return if its left operand is false?
4. What does `boolalpha` change?

---
[← Previous](../14-file-and-vector-marks/README.md) · [All experiments](../README.md) · [Next →](../16-simple-interest-and-discount/README.md)
