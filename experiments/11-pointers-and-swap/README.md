# Experiment 11: Pointers and Swapping

*Related notes: [Unit 09](../../units/09-pointers-and-references/README.md)*

## Aim

To swap two integers using pointers and using references, and to traverse an array through a pointer.

## Theory

A pointer variable stores the address of another variable. `&x` gives the address of `x`; `*p` accesses the value at address `p`. Passing pointers lets a function change the caller's variables. A reference (`int&`) is an alias for an existing variable and gives the same effect with cleaner syntax. An array name converts to a pointer to its first element, so `*(p + i)` equals `p[i]`.

## Algorithm

1. Start
2. Read `x` and `y`
3. Call `swapPointers(&x, &y)`: `t = *p; *p = *q; *q = t`
4. Print `x`, `y`
5. Call `swapReferences(x, y)` and print again (values return to the original)
6. Set `p` to the start of an array and sum `*(p + i)` for each `i`
7. Stop

## Program

Source file: [`main.cpp`](main.cpp)

```cpp
#include <iostream>
using namespace std;

void swapPointers(int* p, int* q) {
    int t = *p;
    *p = *q;
    *q = t;
}

void swapReferences(int& a, int& b) {
    int t = a;
    a = b;
    b = t;
}

int main() {
    int x, y;
    cout << "Enter two integers: ";
    cin >> x >> y;

    swapPointers(&x, &y);
    cout << "After swap using pointers:    x = " << x << ", y = " << y << endl;
    swapReferences(x, y);
    cout << "After swap using references:  x = " << x << ", y = " << y << endl;

    int arr[5] = {5, 10, 15, 20, 25};
    int* p = arr;
    int total = 0;
    for (int i = 0; i < 5; i++) total += *(p + i);
    cout << "Sum of array via pointer = " << total << endl;
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
3 9
```

Output produced by the program (the typed input does not appear below when it is read from a file, so each prompt is followed directly by the next output):

```text
Enter two integers: After swap using pointers:    x = 9, y = 3
After swap using references:  x = 3, y = 9
Sum of array via pointer = 75
```

## Result

The program was compiled and executed successfully and produced the expected output for the sample input.

## Viva Questions

1. What do the operators `&` and `*` mean when used with pointers?
2. What is the difference between a pointer and a reference?
3. What is a null pointer?
4. Why does a swap function taking plain `int` parameters not work?

---
[← Previous](../10-string-operations/README.md) · [All experiments](../README.md) · [Next →](../12-student-records/README.md)
