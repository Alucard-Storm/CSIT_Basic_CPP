# Experiment 29: Rectangle Class and Encapsulation

**Level:** Core  
*Related notes: [Unit 11](../../units/11-classes/README.md)*

## Aim

Create a Rectangle class with private dimensions, a constructor, and methods for area and perimeter.

## Theory

A class keeps its data `private` and offers `public` methods (encapsulation). The constructor sets `length` and `width` when the object is created, using an initialiser list. `area()` and `perimeter()` only read the data, so they are marked `const`. Code outside the class cannot set a negative size directly; here the check is done before the object is made.

## Algorithm

1. Start
2. Define class `Rectangle` with private `length` and `width`
3. The constructor stores the two values
4. `area()` returns `length * width`; `perimeter()` returns `2 * (length + width)`
5. In `main` read and validate the dimensions, create `Rectangle r(l, w)`
6. Print `r.area()` and `r.perimeter()` with two decimals and stop

## Program

Source file: [`main.cpp`](main.cpp)

```cpp
#include <iomanip>
#include <iostream>
using namespace std;

class Rectangle {
private:
    double length;
    double width;

public:
    Rectangle(double l, double w) : length(l), width(w) {}

    double area() const {
        return length * width;
    }

    double perimeter() const {
        return 2 * (length + width);
    }
};

int main() {
    double l, w;
    cout << "Enter length and width: ";
    if (!(cin >> l >> w) || l < 0 || w < 0) {
        cerr << "Dimensions must be non-negative." << endl;
        return 1;
    }

    Rectangle r(l, w);
    cout << fixed << setprecision(2);
    cout << "Area: " << r.area() << endl;
    cout << "Perimeter: " << r.perimeter() << endl;
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
5 3
```

Output produced by the program (the typed input does not appear below when it is read from a file, so each prompt is followed directly by the next output):

```text
Enter length and width: Area: 15.00
Perimeter: 16.00
```

## Challenge

Add a method `isSquare()` and print whether the rectangle is a square.

## Result

The program was compiled and executed successfully and produced the expected output for the sample input.

## Viva Questions

1. Why are the data members private?
2. What does `const` after a method mean?
3. What is an initialiser list?
4. What is the difference between a class and an object?

---
[← Previous](../28-student-records-array/README.md) · [All experiments](../README.md) · [Next →](../30-vector-expense-summary/README.md)
