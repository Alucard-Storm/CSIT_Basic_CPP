# Experiment 01: Hello World and Sum of Two Numbers

*Related notes: [Unit 01](../../units/01-introduction/README.md)*

## Aim

To write, compile and run a first C++ program that prints a message and adds two integers read from the keyboard.

## Theory

Every C++ program starts executing at `main()`. `cout` (from `<iostream>`) sends output to the screen and `cin` reads input from the keyboard. The `<<` operator feeds values to `cout`; `>>` extracts values from `cin`. A variable must be declared with a type (`int`) before it is used.

## Algorithm

1. Start
2. Declare integers `a` and `b`
3. Print `Hello, World!`
4. Read `a` and `b`
5. Print `a + b`
6. Stop

## Program

Source file: [`main.cpp`](main.cpp)

```cpp
#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Hello, World!" << endl;
    cout << "Enter two integers: ";
    cin >> a >> b;
    cout << "Sum = " << a + b << endl;
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
12 30
```

Output produced by the program (the typed input does not appear below when it is read from a file, so each prompt is followed directly by the next output):

```text
Hello, World!
Enter two integers: Sum = 42
```

## Result

The program was compiled and executed successfully and produced the expected output for the sample input.

## Viva Questions

1. What is the role of `#include <iostream>`?
2. What does `main` return and who receives the value?
3. What is the difference between `endl` and `\n`?
4. What happens if you forget the semicolon at the end of a statement?

---
[All experiments](../README.md) · [Next →](../02-temperature-conversion/README.md)
