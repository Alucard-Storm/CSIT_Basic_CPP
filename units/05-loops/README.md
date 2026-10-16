# Unit 05: Loops

## Learning objectives

By the end of this unit you can:

- Use for, while and do-while
- Write nested loops
- Control loops with break and continue

## Key ideas

| Loop | Use when | Checks condition |
|------|----------|------------------|
| `for (init; cond; step)` | you know how many times | before each pass |
| `while (cond)` | repeat until something changes | before each pass |
| `do { } while (cond);` | must run at least once (menus, validation) | after each pass |

- `break` leaves the loop; `continue` jumps to the next iteration.
- **Nested loops**: the inner loop runs completely for every pass of the outer loop. Rows × columns patterns use this.
- Beware **off-by-one** errors (`<` vs `<=`) and **infinite loops** (forgetting to update the variable).
- Typical patterns: accumulate (`sum += i`), count, search, print patterns.

## Examples

Compile and run each one yourself, then change it and predict what happens.

- [`loops.cpp`](examples/loops.cpp)
- [`patterns.cpp`](examples/patterns.cpp)

```bash
g++ -std=c++17 -Wall -Wextra -o prog examples/loops.cpp
./prog
```

## Practice

1. Print the sum of the digits of a number.
2. Print an inverted right triangle of stars.

## Experiments for this unit

- [Experiment 05: Factorial and Prime Numbers](../../experiments/05-prime-and-factorial/README.md)
- [Experiment 06: Fibonacci Series and Pyramid Pattern](../../experiments/06-fibonacci-and-patterns/README.md)

---
[← Unit 04](../04-decisions/README.md) · [Course home](../../README.md) · [Unit 06 →](../06-functions/README.md)
