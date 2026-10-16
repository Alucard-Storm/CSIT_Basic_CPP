# Experiment 18: Number Properties

**Level:** Core  
*Related notes: [Unit 05](../../units/05-loops/README.md)*

## Aim

Determine whether an integer is a palindrome, an Armstrong number (for three-digit positive numbers), and a perfect number.

## Theory

Digits are extracted with `n % 10` (last digit) and `n / 10` (remove it). Building the digits in reverse order gives the reversed number; a number equal to its reverse is a **palindrome**. An **Armstrong** number of three digits equals the sum of the cubes of its digits (153 = 1³ + 5³ + 3³). A **perfect** number equals the sum of its proper divisors (6 = 1 + 2 + 3). The input is limited to 1 000 000 so no intermediate value overflows an `int`.

## Algorithm

1. Start
2. Read `n` and check 0 ≤ n ≤ 1000000
3. While `temp > 0`: take `digit = temp % 10`, update `reversed = reversed * 10 + digit`, add `digit³` to `sumCubes`, then `temp /= 10`
4. For `i` from 1 to `n / 2`: if `n % i == 0` add `i` to `sumDivisors`
5. Palindrome if `reversed == n`; Armstrong if `n` has three digits and `sumCubes == n`; perfect if `n > 1` and `sumDivisors == n`
6. Print the three answers and stop

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

    // Reverse the digits and add up their cubes.
    int reversed = 0, sumCubes = 0;
    int temp = n;
    while (temp > 0) {
        int digit = temp % 10;
        reversed = reversed * 10 + digit;
        sumCubes += digit * digit * digit;
        temp /= 10;
    }

    // Add up the proper divisors (divisors smaller than n).
    int sumDivisors = 0;
    for (int i = 1; i <= n / 2; i++) {
        if (n % i == 0) {
            sumDivisors += i;
        }
    }

    bool palindrome = (reversed == n);
    bool armstrong = (n >= 100 && n <= 999 && sumCubes == n);
    bool perfect = (n > 1 && sumDivisors == n);

    cout << "Palindrome: " << (palindrome ? "Yes" : "No") << endl;
    cout << "Three-digit Armstrong: " << (armstrong ? "Yes" : "No") << endl;
    cout << "Perfect number: " << (perfect ? "Yes" : "No") << endl;
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
121
```

Output produced by the program (the typed input does not appear below when it is read from a file, so each prompt is followed directly by the next output):

```text
Enter a non-negative integer (at most 1000000): Palindrome: Yes
Three-digit Armstrong: No
Perfect number: No
```

## Challenge

List all Armstrong numbers between 100 and 999 with a loop.

## Result

The program was compiled and executed successfully and produced the expected output for the sample input.

## Viva Questions

1. Which operator extracts the last digit of a number? Which removes it?
2. Why do we only add divisors up to `n / 2`?
3. Name two more perfect numbers after 6.
4. Why is the input limited to 1 000 000?

---
[← Previous](../17-eligibility-and-leap-year/README.md) · [All experiments](../README.md) · [Next →](../19-multiplication-table-and-digit-sum/README.md)
