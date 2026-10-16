# Unit 04: Decision Making: if and switch

*Taught in sessions 3–4 of the [session plan](../../SYLLABUS.md#suggested-session-plan).*

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
- [Experiment 17: Eligibility and Leap-Year Checker](../../experiments/17-eligibility-and-leap-year/README.md)
- [Experiment 20: Menu-Driven Unit Converter](../../experiments/20-menu-driven-converter/README.md)
- [Experiment 32: Mini Project: Multiple-Choice Quiz](../../experiments/32-mini-project-quiz/README.md)

---
[← Unit 03](../03-operators-and-io/README.md) · [Course home](../../README.md) · [Unit 05 →](../05-loops/README.md)
