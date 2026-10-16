# Experiment 22: Recursion: Sum and Factorial

**Level:** Core  
*Related notes: [Unit 06](../../units/06-functions/README.md)*

## Aim

Use recursive functions to calculate the sum from 1 to n and factorial of n.

## Theory

A recursive function solves a problem by calling itself on a smaller one and stops at a **base case**. sum(n) = n + sum(n − 1) with sum(0) = 0, and n! = n × (n − 1)! with 0! = 1! = 1. Every call waits on the stack for the one below it, so very deep recursion can run out of stack; the input is limited to 12 to keep the example small.

## Algorithm

1. Start
2. Define `sumTo(n)`: if `n <= 0` return 0, else return `n + sumTo(n - 1)`
3. Define `factorial(n)`: if `n <= 1` return 1, else return `n * factorial(n - 1)`
4. Read `n` and check 0 ≤ n ≤ 12
5. Print `sumTo(n)` and `factorial(n)`
6. Stop

## Program

Source file: [`main.cpp`](main.cpp)

```cpp
#include <iostream>
using namespace std;

long long sumTo(int n) {
    if (n <= 0) {
        return 0;                  // base case
    }
    return n + sumTo(n - 1);       // recursive case
}

long long factorial(int n) {
    if (n <= 1) {
        return 1;                  // base case
    }
    return n * factorial(n - 1);   // recursive case
}

int main() {
    int n;
    cout << "Enter n (0 to 12): ";
    if (!(cin >> n) || n < 0 || n > 12) {
        cerr << "Enter an integer from 0 to 12." << endl;
        return 1;
    }

    cout << "Sum 1..n: " << sumTo(n) << endl;
    cout << "n factorial: " << factorial(n) << endl;
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
5
```

Output produced by the program (the typed input does not appear below when it is read from a file, so each prompt is followed directly by the next output):

```text
Enter n (0 to 12): Sum 1..n: 15
n factorial: 120
```

## Challenge

Write a recursive function that prints the Fibonacci number at position n, then compare its speed with the loop from Experiment 06 for n = 40.

## Result

The program was compiled and executed successfully and produced the expected output for the sample input.

## Viva Questions

1. What is a base case? What happens without one?
2. Trace `sumTo(3)` call by call.
3. What is the difference between recursion and iteration?
4. Why is the return type `long long`?

---
[← Previous](../21-functions-and-overloading/README.md) · [All experiments](../README.md) · [Next →](../23-linear-search/README.md)
