# Experiment 24: Selection Sort

**Level:** Core  
*Related notes: [Unit 07](../../units/07-arrays/README.md)*

## Aim

Sort a list of integers in ascending order using selection sort.

## Theory

Selection sort repeatedly finds the smallest element in the unsorted part of the array and swaps it into the next position. After pass *i*, positions 0…*i* hold the *i + 1* smallest values in order. It makes n − 1 passes and about n²/2 comparisons, so it is O(n²) but easy to follow and uses very few swaps.

## Algorithm

1. Start
2. Read `n` (1–100) and the `n` values
3. For `i` from 0 to `n - 2`: set `minIndex = i`
4. For `j` from `i + 1` to `n - 1`: if `a[j] < a[minIndex]` set `minIndex = j`
5. Swap `a[i]` and `a[minIndex]`
6. Print the sorted array and stop

## Program

Source file: [`main.cpp`](main.cpp)

```cpp
#include <iostream>
using namespace std;

int main() {
    const int MAX = 100;
    int a[MAX];
    int n;

    cout << "Enter number of elements (1-100): ";
    if (!(cin >> n) || n < 1 || n > MAX) {
        cerr << "Invalid size." << endl;
        return 1;
    }

    cout << "Enter " << n << " integers: ";
    for (int i = 0; i < n; i++) {
        if (!(cin >> a[i])) {
            cerr << "Invalid list." << endl;
            return 1;
        }
    }

    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (a[j] < a[minIndex]) {
                minIndex = j;
            }
        }
        int temp = a[i];
        a[i] = a[minIndex];
        a[minIndex] = temp;
    }

    cout << "Sorted:";
    for (int i = 0; i < n; i++) {
        cout << " " << a[i];
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
5
8 3 6 1 4
```

Output produced by the program (the typed input does not appear below when it is read from a file, so each prompt is followed directly by the next output):

```text
Enter number of elements (1-100): Enter 5 integers: Sorted: 1 3 4 6 8
```

## Challenge

Print the array after each pass to watch the sorted part grow.

## Result

The program was compiled and executed successfully and produced the expected output for the sample input.

## Viva Questions

1. How does selection sort differ from bubble sort (Experiment 08)?
2. How many swaps does it make at most?
3. What is its time complexity?
4. How would you sort in descending order?

---
[← Previous](../23-linear-search/README.md) · [All experiments](../README.md) · [Next →](../25-matrix-transpose-diagonal/README.md)
