# Experiment 27: References and Pass-by-Reference

**Level:** Core  
*Related notes: [Unit 06](../../units/06-functions/README.md), [Unit 09](../../units/09-pointers-and-references/README.md)*

## Aim

Use references to swap two values and return both the minimum and maximum through reference parameters.

## Theory

A reference parameter (`int&`) is another name for the caller's variable, so a function can change it. This gives two uses: `swapValues` modifies both arguments, and `findMinMax` produces *two* results by writing to `smallest` and `largest`, which a single `return` cannot do. Parameters without `&` receive copies and cannot change the caller's variables.

## Algorithm

1. Start
2. Read `a` and `b`
3. Call `findMinMax(a, b, low, high)`; it stores the smaller value in `low` and the larger in `high`
4. Print the minimum and maximum
5. Call `swapValues(a, b)`, which exchanges the two variables
6. Print `a` and `b` after the swap and stop

## Program

Source file: [`main.cpp`](main.cpp)

```cpp
#include <iostream>
using namespace std;

void swapValues(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

// A function can "return" several results by writing to reference parameters.
void findMinMax(int a, int b, int& smallest, int& largest) {
    if (a < b) {
        smallest = a;
        largest = b;
    } else {
        smallest = b;
        largest = a;
    }
}

int main() {
    int a, b, low, high;
    cout << "Enter two integers: ";
    if (!(cin >> a >> b)) {
        cerr << "Invalid input." << endl;
        return 1;
    }

    findMinMax(a, b, low, high);
    cout << "Minimum: " << low << endl;
    cout << "Maximum: " << high << endl;

    swapValues(a, b);
    cout << "After swap: " << a << " " << b << endl;
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
8 3
```

Output produced by the program (the typed input does not appear below when it is read from a file, so each prompt is followed directly by the next output):

```text
Enter two integers: Minimum: 3
Maximum: 8
After swap: 3 8
```

## Challenge

Write `void sortThree(int& a, int& b, int& c)` that arranges three variables in ascending order.

## Result

The program was compiled and executed successfully and produced the expected output for the sample input.

## Viva Questions

1. What is a reference? How is it different from a pointer?
2. Why does a swap function need reference (or pointer) parameters?
3. What is the difference between pass by value and pass by reference?
4. How can a function return more than one value?

---
[← Previous](../26-string-analyzer/README.md) · [All experiments](../README.md) · [Next →](../28-student-records-array/README.md)
