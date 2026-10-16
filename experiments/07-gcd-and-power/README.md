# Experiment 07: GCD, LCM and Power using Functions

*Related notes: [Unit 06](../../units/06-functions/README.md)*

## Aim

To write functions (including recursive ones) that compute the GCD, LCM and a power of integers.

## Theory

A function packages reusable logic with parameters and a return type. A recursive function calls itself on a smaller problem and needs a base case. Euclid's algorithm: gcd(a, b) = gcd(b, a mod b), with gcd(a, 0) = a. Also lcm(a, b) = a / gcd(a, b) × b, and a<sup>e</sup> = a × a<sup>e−1</sup> with a<sup>0</sup> = 1.

## Algorithm

1. Start
2. Define `gcd(a, b)`: if `b == 0` return `a`, else return `gcd(b, a % b)`
3. Define `power(base, exp)`: if `exp == 0` return 1, else return `base * power(base, exp-1)`
4. In `main`, read two numbers, print GCD and LCM
5. Read base and exponent, print the power
6. Stop

## Program

Source file: [`main.cpp`](main.cpp)

```cpp
#include <iostream>
using namespace std;

int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);          // Euclid's algorithm
}

long long power(int base, int exp) {
    if (exp == 0) return 1;
    return base * power(base, exp - 1);
}

int main() {
    int a, b, e;
    cout << "Enter two integers for GCD: ";
    cin >> a >> b;
    int g = gcd(a, b);
    cout << "GCD = " << g << endl;
    cout << "LCM = " << (g == 0 ? 0 : a / g * b) << endl;

    cout << "Enter base and exponent: ";
    cin >> a >> e;
    cout << a << "^" << e << " = " << power(a, e) << endl;
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
48 18
2 10
```

Output produced by the program (the typed input does not appear below when it is read from a file, so each prompt is followed directly by the next output):

```text
Enter two integers for GCD: GCD = 6
LCM = 144
Enter base and exponent: 2^10 = 1024
```

## Result

The program was compiled and executed successfully and produced the expected output for the sample input.

## Viva Questions

1. What is a base case and why is it essential?
2. What is the difference between a function declaration and a definition?
3. What is the difference between pass by value and pass by reference?
4. Trace `gcd(48, 18)` step by step.

---
[← Previous](../06-fibonacci-and-patterns/README.md) · [All experiments](../README.md) · [Next →](../08-array-statistics/README.md)
