# Unit 12: Files and Vectors

*Taught in session 14 of the [session plan](../../SYLLABUS.md#suggested-session-plan).*

## Learning objectives

By the end of this unit you can:

- Read and write text files
- Use vector as a growable array
- Use standard algorithms such as sort

## Key ideas

**Vectors** (`#include <vector>`)

- `vector<int> v;` starts empty and grows: `v.push_back(5)`.
- `v.size()`, `v[i]`, `v.front()`, `v.back()`, `v.pop_back()`, `v.clear()`.
- Range-based loop: `for (int x : v) cout << x;`
- `sort(v.begin(), v.end());` needs `<algorithm>`.

**Files** (`#include <fstream>`)

- `ofstream out("data.txt");` writes; `ifstream in("data.txt");` reads.
- Check that it opened: `if (!in) { /* handle error */ }`
- Read until the end: `while (in >> value) { ... }`
- The file is created in the *current working directory* of the program, not next to the source file.

## Examples

Compile and run each one yourself, then change it and predict what happens.

- [`vector_basic.cpp`](examples/vector_basic.cpp)
- [`file_io.cpp`](examples/file_io.cpp)

```bash
g++ -std=c++17 -Wall -Wextra -o prog examples/vector_basic.cpp
./prog
```

## Practice

1. Read numbers from a file into a vector and print the average.
2. Append a line to a log file using `ios::app`.

## Experiments for this unit

- [Experiment 14: File Handling and Vectors](../../experiments/14-file-and-vector-marks/README.md)
- [Experiment 30: Expense Summary Using Vector](../../experiments/30-vector-expense-summary/README.md)
- [Experiment 31: Text File Line and Word Counter](../../experiments/31-file-line-word-counter/README.md)

---
[← Unit 11](../11-classes/README.md) · [Course home](../../README.md)
