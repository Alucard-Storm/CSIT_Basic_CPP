# Experiment 17: Eligibility and Leap-Year Checker

**Level:** Core  
*Related notes: [Unit 04](../../units/04-decisions/README.md)*

## Aim

Use if/else and logical operators to check voting eligibility and whether a year is a leap year.

## Theory

A condition such as `age >= 18` gives `true` or `false`, and `if`/`else` chooses what to print. A year is a leap year if it is divisible by 400, or divisible by 4 but not by 100: `(y % 400 == 0) || (y % 4 == 0 && y % 100 != 0)`. So 1900 is not a leap year but 2000 is.

## Algorithm

1. Start
2. Read `age` and `year`; reject a negative age or a year below 1
3. If `age >= 18` print “Yes”, otherwise “No”
4. Set `leap = (year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)`
5. Print whether the year is a leap year
6. Stop

## Program

Source file: [`main.cpp`](main.cpp)

```cpp
#include <iostream>
using namespace std;

int main() {
    int age, year;
    cout << "Enter age and year: ";
    if (!(cin >> age >> year) || age < 0 || year < 1) {
        cerr << "Invalid input." << endl;
        return 1;
    }

    if (age >= 18) {
        cout << "Voting eligible: Yes" << endl;
    } else {
        cout << "Voting eligible: No" << endl;
    }

    bool leap = (year % 400 == 0) || (year % 4 == 0 && year % 100 != 0);
    if (leap) {
        cout << year << " is a leap year" << endl;
    } else {
        cout << year << " is not a leap year" << endl;
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
20 2024
```

Output produced by the program (the typed input does not appear below when it is read from a file, so each prompt is followed directly by the next output):

```text
Enter age and year: Voting eligible: Yes
2024 is a leap year
```

## Challenge

Read a month number as well and print the number of days in that month for the given year.

## Result

The program was compiled and executed successfully and produced the expected output for the sample input.

## Viva Questions

1. Why is 1900 not a leap year, although it is divisible by 4?
2. What is the difference between `&&` and `||`?
3. What does `%` return?
4. How would you also print the number of days in February?

---
[← Previous](../16-simple-interest-and-discount/README.md) · [All experiments](../README.md) · [Next →](../18-number-properties/README.md)
