# Experiment 25: Matrix Transpose and Diagonal Sums

**Level:** Core  
*Related notes: [Unit 07](../../units/07-arrays/README.md)*

## Aim

Read a square matrix, display its transpose, and calculate its main-diagonal sum.

## Theory

The transpose of a square matrix swaps rows and columns: T[i][j] = A[j][i], so printing `a[j][i]` in row-major order prints the transpose. The main diagonal consists of the elements where the row index equals the column index (`a[i][i]`). Both operations need nested loops (the diagonal needs only one).

## Algorithm

1. Start
2. Read the size `n` (1–10) and the `n × n` values
3. Print the transpose: for each `i`, print `a[j][i]` for every `j`
4. `diagonal = 0`; for each `i` add `a[i][i]`
5. Print the diagonal sum
6. Stop

## Program

Source file: [`main.cpp`](main.cpp)

```cpp
#include <iostream>
using namespace std;

int main() {
    const int MAX = 10;
    int a[MAX][MAX];
    int n;

    cout << "Enter square matrix size (1-10): ";
    if (!(cin >> n) || n < 1 || n > MAX) {
        cerr << "Invalid size." << endl;
        return 1;
    }

    cout << "Enter matrix values: ";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (!(cin >> a[i][j])) {
                cerr << "Invalid matrix." << endl;
                return 1;
            }
        }
    }

    cout << "Transpose:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << a[j][i];
            if (j + 1 < n) {
                cout << " ";
            }
        }
        cout << endl;
    }

    int diagonal = 0;
    for (int i = 0; i < n; i++) {
        diagonal += a[i][i];
    }
    cout << "Main diagonal sum: " << diagonal << endl;
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
2
1 2 3 4
```

Output produced by the program (the typed input does not appear below when it is read from a file, so each prompt is followed directly by the next output):

```text
Enter square matrix size (1-10): Enter matrix values: Transpose:
1 3
2 4
Main diagonal sum: 5
```

## Challenge

Also print the sum of the anti-diagonal (`a[i][n-1-i]`).

## Result

The program was compiled and executed successfully and produced the expected output for the sample input.

## Viva Questions

1. What is the transpose of a matrix?
2. Which elements form the main diagonal?
3. Which elements form the other (anti-)diagonal?
4. Why is a second array not needed to print the transpose?

---
[← Previous](../24-selection-sort/README.md) · [All experiments](../README.md) · [Next →](../26-string-analyzer/README.md)
