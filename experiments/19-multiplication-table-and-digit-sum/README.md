# Experiment 19: Multiplication Table and Digit Sum

**Level:** Core  
*Related notes: [Unit 05](../../units/05-loops/README.md)*

## Aim

Print a multiplication table and calculate the sum and count of digits using loops.

## Theory

A `for` loop with a fixed count prints the ten lines of a table. Digits are counted and added with the same `% 10` and `/ 10` steps as in the previous experiment. A `do-while` loop is used so that the body runs at least once, which makes the input `0` count as one digit.

## Algorithm

1. Start
2. Read `n` and check 0 ≤ n ≤ 1000000
3. For `i` from 1 to 10 print `n x i = n*i`
4. `temp = n`, `sum = 0`, `count = 0`
5. Repeat: add `temp % 10` to `sum`, increase `count`, set `temp = temp / 10`, until `temp` is 0
6. Print the digit count and digit sum, then stop

## Program

Source file: [`main.cpp`](main.cpp)

```cpp
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a non-negative integer (at most 1000000): ";
    if (!(cin >> n) || n < 0 || n > 1000000) {
        cerr << "Invalid input." << endl;
        return 1;
    }

    for (int i = 1; i <= 10; i++) {
        cout << n << " x " << i << " = " << n * i << endl;
    }

    // do-while so that n = 0 is counted as one digit.
    int temp = n, sum = 0, count = 0;
    do {
        sum += temp % 10;
        count++;
        temp /= 10;
    } while (temp > 0);

    cout << "Digit count: " << count << endl;
    cout << "Digit sum: " << sum << endl;
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
23
```

Output produced by the program (the typed input does not appear below when it is read from a file, so each prompt is followed directly by the next output):

```text
Enter a non-negative integer (at most 1000000): 23 x 1 = 23
23 x 2 = 46
23 x 3 = 69
23 x 4 = 92
23 x 5 = 115
23 x 6 = 138
23 x 7 = 161
23 x 8 = 184
23 x 9 = 207
23 x 10 = 230
Digit count: 2
Digit sum: 5
```

## Challenge

Make the table length a second input instead of the fixed value 10.

## Result

The program was compiled and executed successfully and produced the expected output for the sample input.

## Viva Questions

1. What is the difference between `while` and `do-while`?
2. Why would a plain `while (temp > 0)` give the wrong digit count for 0?
3. How many times does the `for` loop run?
4. How would you print the table in reverse order?

---
[← Previous](../18-number-properties/README.md) · [All experiments](../README.md) · [Next →](../20-menu-driven-converter/README.md)
