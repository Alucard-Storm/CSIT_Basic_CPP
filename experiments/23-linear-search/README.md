# Experiment 23: Linear Search in an Array

**Level:** Core  
*Related notes: [Unit 07](../../units/07-arrays/README.md)*

## Aim

Read a small list of integers and report the index of a target using linear search.

## Theory

Linear (sequential) search compares the target with each element in turn and stops at the first match. It needs at most n comparisons, so it is O(n), but it works on unsorted data. Array positions start at 0, so the reported index is zero-based. `-1` is a common “not found” marker because it is never a valid index.

## Algorithm

1. Start
2. Read `n` (1–100) and then the `n` values
3. Read `target`
4. Set `index = -1`
5. For `i` from 0 to `n - 1`: if `values[i] == target` set `index = i` and leave the loop
6. If `index == -1` print “Not found”, otherwise print the index; stop

## Program

Source file: [`main.cpp`](main.cpp)

```cpp
#include <iostream>
using namespace std;

int main() {
    const int MAX = 100;
    int values[MAX];
    int n, target;

    cout << "Enter number of elements (1-100): ";
    if (!(cin >> n) || n < 1 || n > MAX) {
        cerr << "Invalid size." << endl;
        return 1;
    }

    cout << "Enter " << n << " integers: ";
    for (int i = 0; i < n; i++) {
        if (!(cin >> values[i])) {
            cerr << "Invalid list." << endl;
            return 1;
        }
    }

    cout << "Enter target: ";
    if (!(cin >> target)) {
        cerr << "Invalid target." << endl;
        return 1;
    }

    int index = -1;
    for (int i = 0; i < n; i++) {
        if (values[i] == target) {
            index = i;
            break;
        }
    }

    if (index == -1) {
        cout << "Not found" << endl;
    } else {
        cout << "Found at zero-based index: " << index << endl;
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
5
4 9 2 9 7
2
```

Output produced by the program (the typed input does not appear below when it is read from a file, so each prompt is followed directly by the next output):

```text
Enter number of elements (1-100): Enter 5 integers: Enter target: Found at zero-based index: 2
```

## Challenge

Count how many times the target occurs and print all of its positions.

## Result

The program was compiled and executed successfully and produced the expected output for the sample input.

## Viva Questions

1. Why is the index of the first element 0?
2. What is the time complexity of linear search?
3. Why does the loop stop at the first match? How would you find all matches?
4. Which faster search works on sorted arrays?

---
[← Previous](../22-recursion-practice/README.md) · [All experiments](../README.md) · [Next →](../24-selection-sort/README.md)
