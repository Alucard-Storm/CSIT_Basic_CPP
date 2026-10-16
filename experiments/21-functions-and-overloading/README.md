# Experiment 21: Functions and Function Overloading

**Level:** Core  
*Related notes: [Unit 06](../../units/06-functions/README.md)*

## Aim

Write reusable functions to calculate the area of a circle and rectangle, demonstrating function parameters and overloading.

## Theory

Function overloading lets several functions share one name if their parameter lists differ. Here `area(double)` computes a circle (π r²) and `area(double, double)` a rectangle (l × w); the compiler chooses by the number of arguments in the call. Overloads must differ in parameters, not just in return type.

## Algorithm

1. Start
2. Define `area(radius)` returning π × radius × radius
3. Define `area(length, width)` returning length × width
4. In `main` read and validate a radius and a length and width
5. Call `area(r)` and `area(l, w)` and print both with two decimals
6. Stop

## Program

Source file: [`main.cpp`](main.cpp)

```cpp
#include <iomanip>
#include <iostream>
using namespace std;

// Two functions share the name area; the arguments decide which one runs.
double area(double radius) {
    return 3.141592653589793 * radius * radius;
}

double area(double length, double width) {
    return length * width;
}

int main() {
    double r, l, w;

    cout << "Enter circle radius: ";
    if (!(cin >> r) || r < 0) {
        cerr << "Invalid radius." << endl;
        return 1;
    }

    cout << "Enter rectangle length and width: ";
    if (!(cin >> l >> w) || l < 0 || w < 0) {
        cerr << "Invalid dimensions." << endl;
        return 1;
    }

    cout << fixed << setprecision(2);
    cout << "Circle area: " << area(r) << endl;
    cout << "Rectangle area: " << area(l, w) << endl;
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
2
4 3
```

Output produced by the program (the typed input does not appear below when it is read from a file, so each prompt is followed directly by the next output):

```text
Enter circle radius: Enter rectangle length and width: Circle area: 12.57
Rectangle area: 12.00
```

## Challenge

Add a third overload `area(double base, double height, char type)` that returns the area of a triangle when `type` is `'t'`.

## Result

The program was compiled and executed successfully and produced the expected output for the sample input.

## Viva Questions

1. What is function overloading?
2. How does the compiler decide which `area` to call?
3. Can two functions differ only in return type?
4. What is the difference between a function declaration and a definition?

---
[← Previous](../20-menu-driven-converter/README.md) · [All experiments](../README.md) · [Next →](../22-recursion-practice/README.md)
