# Experiment 02: Temperature Conversion

*Related notes: [Unit 02](../../units/02-variables-and-types/README.md)*

## Aim

To convert a temperature from Celsius to Fahrenheit and Kelvin using floating-point variables.

## Theory

Floating-point types (`double`) store numbers with a fractional part. The conversions are F = C × 9/5 + 32 and K = C + 273.15. Writing `9.0 / 5.0` rather than `9 / 5` matters: integer division would give `1`. `fixed` and `setprecision(2)` from `<iomanip>` control the number of decimal places printed.

## Algorithm

1. Start
2. Read `celsius` as a `double`
3. Compute `fahrenheit = celsius * 9.0 / 5.0 + 32`
4. Compute `kelvin = celsius + 273.15`
5. Print both results with 2 decimal places
6. Stop

## Program

Source file: [`main.cpp`](main.cpp)

```cpp
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double celsius;
    cout << "Enter temperature in Celsius: ";
    cin >> celsius;

    double fahrenheit = celsius * 9.0 / 5.0 + 32.0;
    double kelvin = celsius + 273.15;

    cout << fixed << setprecision(2);
    cout << "Fahrenheit = " << fahrenheit << endl;
    cout << "Kelvin     = " << kelvin << endl;
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
37
```

Output produced by the program (the typed input does not appear below when it is read from a file, so each prompt is followed directly by the next output):

```text
Enter temperature in Celsius: Fahrenheit = 98.60
Kelvin     = 310.15
```

## Result

The program was compiled and executed successfully and produced the expected output for the sample input.

## Viva Questions

1. What is the difference between `int` and `double`?
2. Why does `9 / 5` evaluate to 1?
3. What does `setprecision(2)` do, and why is `fixed` needed with it?
4. What is a type cast? Give an example.

---
[← Previous](../01-hello-and-sum/README.md) · [All experiments](../README.md) · [Next →](../03-grade-calculator/README.md)
