# Unit 02: Variables, Data Types and Constants

## Learning objectives

By the end of this unit you can:

- Declare and initialise variables
- Choose an appropriate data type
- Understand integer division and type casting

## Key ideas

A **variable** is a named place in memory with a type. Declare it before use: `int age = 19;`

| Type | Holds | Typical size |
|------|-------|--------------|
| `int` | whole numbers | 4 bytes |
| `long long` | large whole numbers | 8 bytes |
| `double` | decimals | 8 bytes |
| `float` | decimals (less precise) | 4 bytes |
| `char` | one character, `'A'` | 1 byte |
| `bool` | `true` / `false` | 1 byte |
| `std::string` | text | varies |

- **Naming**: letters, digits, `_`; cannot start with a digit; case-sensitive; not a keyword.
- **Constants**: `const double PI = 3.14159;` cannot be changed after initialisation.
- **Integer division** truncates: `7 / 2` is `3`. Make one operand a `double` to get `3.5`.
- **Casting**: `static_cast<double>(a) / b`.
- Always initialise variables. An uninitialised local variable holds garbage.
- Overflow: an `int` holds roughly ±2.1 billion; go beyond it and results are wrong.

## Examples

Compile and run each one yourself, then change it and predict what happens.

- [`types.cpp`](examples/types.cpp)
- [`sizes.cpp`](examples/sizes.cpp)

```bash
g++ -std=c++17 -Wall -Wextra -o prog examples/types.cpp
./prog
```

## Practice

1. Which type would you use for a roll number? A price? A grade letter?
2. Predict, then check: `cout << 10 / 4 << " " << 10 % 4 << " " << 10 / 4.0;`

## Experiments for this unit

- [Experiment 02: Temperature Conversion](../../experiments/02-temperature-conversion/README.md)

---
[← Unit 01](../01-introduction/README.md) · [Course home](../../README.md) · [Unit 03 →](../03-operators-and-io/README.md)
