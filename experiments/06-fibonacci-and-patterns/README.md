# Experiment 06: Fibonacci Series and Pyramid Pattern

*Related notes: [Unit 05](../../units/05-loops/README.md)*

## Aim

To print the first n terms of the Fibonacci series and a star pyramid using single and nested loops.

## Theory

Each Fibonacci term is the sum of the previous two (0, 1, 1, 2, 3, 5, …). Two variables are rolled forward on each iteration. A pattern needs nested loops: the outer loop counts rows, inner loops print spaces and stars for that row. In row *r* of an *n*-row pyramid there are *n − r* spaces and *2r − 1* stars.

## Algorithm

1. Start
2. Read `n`
3. `a = 0`, `b = 1`; repeat `n` times: print `a`, `next = a + b`, `a = b`, `b = next`
4. For `row` = 1 to `n`: print `n - row` spaces, then `2*row - 1` stars, then a newline
5. Stop

## Program

Source file: [`main.cpp`](main.cpp)

```cpp
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of terms: ";
    cin >> n;

    long long a = 0, b = 1;
    cout << "Fibonacci series:";
    for (int i = 0; i < n; i++) {
        cout << " " << a;
        long long next = a + b;
        a = b;
        b = next;
    }
    cout << endl << endl;

    cout << "Pyramid of " << n << " rows:" << endl;
    for (int row = 1; row <= n; row++) {
        for (int s = 0; s < n - row; s++) cout << " ";
        for (int k = 0; k < 2 * row - 1; k++) cout << "*";
        cout << endl;
    }
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
8
```

Output produced by the program (the typed input does not appear below when it is read from a file, so each prompt is followed directly by the next output):

```text
Enter number of terms: Fibonacci series: 0 1 1 2 3 5 8 13

Pyramid of 8 rows:
       *
      ***
     *****
    *******
   *********
  ***********
 *************
***************
```

## Result

The program was compiled and executed successfully and produced the expected output for the sample input.

## Viva Questions

1. What are the first ten Fibonacci numbers?
2. How does an inner loop behave for each iteration of the outer loop?
3. What is an infinite loop? Give an example.
4. How would you print the pyramid upside down?

---
[← Previous](../05-prime-and-factorial/README.md) · [All experiments](../README.md) · [Next →](../07-gcd-and-power/README.md)
