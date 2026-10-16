# Experiment 09: Matrix Addition and Multiplication

*Related notes: [Unit 07](../../units/07-arrays/README.md)*

## Aim

To read two 2×2 matrices and compute their sum and product using two-dimensional arrays.

## Theory

A 2-D array is an array of arrays, accessed as `m[row][col]` and traversed with nested loops. Addition is element-wise: C[i][j] = A[i][j] + B[i][j]. For multiplication, C[i][j] = Σ<sub>k</sub> A[i][k] × B[k][j], which needs a third loop. When passing a 2-D array to a function, every dimension except the first must be given.

## Algorithm

1. Start
2. Read matrices `A` and `B`
3. For each `i`, `j`: `sum[i][j] = a[i][j] + b[i][j]`
4. For each `i`, `j`: set `prod[i][j] = 0`, then for each `k`: `prod[i][j] += a[i][k] * b[k][j]`
5. Print `sum` and `prod`
6. Stop

## Program

Source file: [`main.cpp`](main.cpp)

```cpp
#include <iostream>
using namespace std;

const int N = 2;

void readMatrix(int m[N][N], const char* name) {
    cout << "Enter matrix " << name << " (" << N << "x" << N << "): ";
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++) cin >> m[i][j];
}

void printMatrix(int m[N][N], const char* title) {
    cout << title << ":" << endl;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) cout << m[i][j] << "\t";
        cout << endl;
    }
}

int main() {
    int a[N][N], b[N][N], sum[N][N], prod[N][N];
    readMatrix(a, "A");
    readMatrix(b, "B");

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            sum[i][j] = a[i][j] + b[i][j];
            prod[i][j] = 0;
            for (int k = 0; k < N; k++) prod[i][j] += a[i][k] * b[k][j];
        }
    }
    printMatrix(sum, "A + B");
    printMatrix(prod, "A x B");
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
1 2 3 4
5 6 7 8
```

Output produced by the program (the typed input does not appear below when it is read from a file, so each prompt is followed directly by the next output):

```text
Enter matrix A (2x2): Enter matrix B (2x2): A + B:
6	8	
10	12	
A x B:
19	22	
43	50	
```

## Result

The program was compiled and executed successfully and produced the expected output for the sample input.

## Viva Questions

1. When can two matrices be multiplied?
2. How is a 2-D array stored in memory?
3. How many multiplications are needed for two n×n matrices?
4. Why must the column size be given when passing a 2-D array to a function?

---
[← Previous](../08-array-statistics/README.md) · [All experiments](../README.md) · [Next →](../10-string-operations/README.md)
