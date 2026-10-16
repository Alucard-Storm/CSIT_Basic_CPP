# Unit 07: Arrays

## Learning objectives

By the end of this unit you can:

- Declare, initialise and traverse arrays
- Use two-dimensional arrays
- Avoid out-of-bounds access

## Key ideas

- `int a[5] = {1, 2, 3, 4, 5};` holds 5 values of the same type, stored side by side.
- Indices run from **0 to size − 1**. `a[5]` is out of bounds: undefined behaviour, no automatic error.
- Traverse with a `for` loop; there is no built-in length, so keep the size in a variable or constant.
- Typical tasks: sum, maximum, linear search, reversing, sorting (bubble sort).
- **2-D arrays**: `int m[3][4];` is 3 rows × 4 columns; use nested loops.
- Arrays passed to functions are not copied; the function works on the original.
- `std::vector` ([Unit 12](../12-files-and-vectors/README.md)) is the flexible alternative.

## Examples

Compile and run each one yourself, then change it and predict what happens.

- [`arrays.cpp`](examples/arrays.cpp)
- [`matrix.cpp`](examples/matrix.cpp)

```bash
g++ -std=c++17 -Wall -Wextra -o prog examples/arrays.cpp
./prog
```

## Practice

1. Find the second largest element.
2. Print the sum of each row of a 3×3 matrix.

## Experiments for this unit

- [Experiment 08: Array Statistics and Bubble Sort](../../experiments/08-array-statistics/README.md)
- [Experiment 09: Matrix Addition and Multiplication](../../experiments/09-matrix-operations/README.md)

---
[← Unit 06](../06-functions/README.md) · [Course home](../../README.md) · [Unit 08 →](../08-strings/README.md)
