# Unit 04: Decision Making: if and switch

## Learning objectives

By the end of this unit you can:

- Write one-way, two-way and multi-way decisions
- Use switch correctly
- Combine conditions with logical operators

## Key ideas

```cpp
if (condition) { ... }
else if (other)  { ... }
else             { ... }
```

- Conditions are tested top to bottom; the first true branch runs and the rest are skipped.
- Always use braces, even for one statement; it prevents a common class of bugs.
- Ternary operator: `result = (a > b) ? a : b;`
- `switch (x)` works on integers and characters. Each `case` needs a `break`, otherwise execution **falls through** to the next case. `default` handles everything else.
- Choose `switch` for many fixed values; use `if` for ranges and compound conditions.

## Examples

Compile and run each one yourself, then change it and predict what happens.

- [`if_else.cpp`](examples/if_else.cpp)
- [`switch_menu.cpp`](examples/switch_menu.cpp)

```bash
g++ -std=c++17 -Wall -Wextra -o prog examples/if_else.cpp
./prog
```

## Practice

1. Read a year and say whether it is a leap year.
2. Read three numbers and print the largest.

## Experiments for this unit

- [Experiment 03: Grade Calculator](../../experiments/03-grade-calculator/README.md)
- [Experiment 04: Simple Calculator using switch](../../experiments/04-menu-calculator/README.md)

---
[← Unit 03](../03-operators-and-io/README.md) · [Course home](../../README.md) · [Unit 05 →](../05-loops/README.md)
