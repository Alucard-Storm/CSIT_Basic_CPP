# Experiment 05: Factorial and Prime Numbers

*Related notes: [Unit 05](../../units/05-loops/README.md)*

## Aim

To compute the factorial of a number, test whether it is prime and list all primes up to it using loops.

## Theory

A `for` loop repeats a block a known number of times. n! = 1 × 2 × … × n. A number n > 1 is prime if no integer from 2 up to √n divides it, so the loop condition `d * d <= n` is enough. `break` leaves a loop early. `long long` is used because 20! does not fit in a 32-bit `int`.

## Algorithm

1. Start
2. Read `n` (1 ≤ n ≤ 20)
3. `fact = 1`; for `i` from 2 to `n`: `fact *= i`
4. Assume `n` is prime if `n > 1`; for `d = 2` while `d*d <= n`: if `n % d == 0` it is not prime, stop
5. For each `k` from 2 to `n`, repeat the prime test and print the primes
6. Stop

## Program

Source file: [`main.cpp`](main.cpp)

```cpp
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a positive integer (at most 20): ";
    cin >> n;
    if (n < 1 || n > 20) {
        cout << "Out of range." << endl;
        return 1;
    }

    long long fact = 1;
    for (int i = 2; i <= n; i++) fact *= i;
    cout << n << "! = " << fact << endl;

    bool isPrime = n > 1;
    for (int d = 2; d * d <= n; d++) {
        if (n % d == 0) {
            isPrime = false;
            break;
        }
    }
    cout << n << (isPrime ? " is" : " is not") << " a prime number" << endl;

    cout << "Primes up to " << n << ":";
    for (int k = 2; k <= n; k++) {
        bool p = true;
        for (int d = 2; d * d <= k; d++) {
            if (k % d == 0) { p = false; break; }
        }
        if (p) cout << " " << k;
    }
    cout << endl;
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
13
```

Output produced by the program (the typed input does not appear below when it is read from a file, so each prompt is followed directly by the next output):

```text
Enter a positive integer (at most 20): 13! = 6227020800
13 is a prime number
Primes up to 13: 2 3 5 7 11 13
```

## Result

The program was compiled and executed successfully and produced the expected output for the sample input.

## Viva Questions

1. Why is it enough to test divisors up to √n?
2. What is the difference between `break` and `continue`?
3. Why is `long long` used for the factorial?
4. How many times does a `do-while` loop execute at minimum?

---
[← Previous](../04-menu-calculator/README.md) · [All experiments](../README.md) · [Next →](../06-fibonacci-and-patterns/README.md)
