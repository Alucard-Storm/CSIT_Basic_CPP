# Unit 03: Operators and Input/Output

## Learning objectives

By the end of this unit you can:

- Use arithmetic, relational, logical and assignment operators
- Read input with cin
- Format output

## Key ideas

- **Arithmetic**: `+ - * / %` (`%` is the remainder, integers only).
- **Relational**: `< > <= >= == !=` give a `bool`.
- **Logical**: `&&` (and), `||` (or), `!` (not).
- **Assignment**: `= += -= *= /= %=`; **increment/decrement**: `++ --`.
- **Precedence**: `* / %` before `+ -`; relational before `&&`, before `||`. Use parentheses when in doubt.
- **Input**: `cin >> x >> y;` reads whitespace-separated values. Use `getline(cin, line)` to read a whole line.
- **Formatting** (`<iomanip>`): `setw(n)` field width, `fixed`, `setprecision(n)`.
- Never write `=` when you mean `==` inside a condition.

## Examples

Compile and run each one yourself, then change it and predict what happens.

- [`operators.cpp`](examples/operators.cpp)
- [`io.cpp`](examples/io.cpp)

```bash
g++ -std=c++17 -Wall -Wextra -o prog examples/operators.cpp
./prog
```

## Practice

1. Read a number of seconds and print it as hours, minutes and seconds (hint: `/` and `%`).
2. Read two numbers and print the larger using the relational operators only.

## Experiments for this unit

No separate experiment; use the practice questions above and revisit the earlier experiments.

---
[← Unit 02](../02-variables-and-types/README.md) · [Course home](../../README.md) · [Unit 04 →](../04-decisions/README.md)
