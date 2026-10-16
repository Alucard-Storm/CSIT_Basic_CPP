# Experiment 08: Array Statistics and Bubble Sort

*Related notes: [Unit 07](../../units/07-arrays/README.md)*

## Aim

To read n numbers into an array, find their sum, average, largest and smallest, and sort them in ascending order.

## Theory

An array stores a fixed number of values of one type in contiguous memory, indexed from 0 to n − 1. Accessing an index outside this range is undefined behaviour. Bubble sort repeatedly compares adjacent elements and swaps them if they are out of order; after each pass the largest remaining value settles at the end.

## Algorithm

1. Start
2. Read `n` and validate it
3. Read `n` values into `a[0..n-1]`
4. Traverse the array updating `sum`, `largest`, `smallest`
5. Print sum, average (`sum / n` as `double`), largest, smallest
6. For `pass` = 0 to `n-2`: for `i` = 0 to `n-2-pass`: swap `a[i]` and `a[i+1]` if `a[i] > a[i+1]`
7. Print the sorted array and stop

## Program

Source file: [`main.cpp`](main.cpp)

```cpp
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "How many numbers (max 50)? ";
    cin >> n;
    if (n < 1 || n > 50) {
        cout << "Invalid size." << endl;
        return 1;
    }

    int a[50];
    cout << "Enter " << n << " numbers: ";
    for (int i = 0; i < n; i++) cin >> a[i];

    int sum = 0, largest = a[0], smallest = a[0];
    for (int i = 0; i < n; i++) {
        sum += a[i];
        if (a[i] > largest) largest = a[i];
        if (a[i] < smallest) smallest = a[i];
    }
    cout << "Sum = " << sum << ", Average = " << static_cast<double>(sum) / n << endl;
    cout << "Largest = " << largest << ", Smallest = " << smallest << endl;

    // Bubble sort (ascending)
    for (int pass = 0; pass < n - 1; pass++) {
        for (int i = 0; i < n - 1 - pass; i++) {
            if (a[i] > a[i + 1]) {
                int t = a[i];
                a[i] = a[i + 1];
                a[i + 1] = t;
            }
        }
    }
    cout << "Sorted:";
    for (int i = 0; i < n; i++) cout << " " << a[i];
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
6
42 7 19 3 88 25
```

Output produced by the program (the typed input does not appear below when it is read from a file, so each prompt is followed directly by the next output):

```text
How many numbers (max 50)? Enter 6 numbers: Sum = 184, Average = 30.6667
Largest = 88, Smallest = 3
Sorted: 3 7 19 25 42 88
```

## Result

The program was compiled and executed successfully and produced the expected output for the sample input.

## Viva Questions

1. What is the index of the first element of an array?
2. What happens when you access `a[n]` for an array of size `n`?
3. What is the time complexity of bubble sort?
4. How would you modify the program to sort in descending order?

---
[← Previous](../07-gcd-and-power/README.md) · [All experiments](../README.md) · [Next →](../09-matrix-operations/README.md)
