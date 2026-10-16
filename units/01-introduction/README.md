# Unit 01: Introduction to Programming and C++

## Learning objectives

By the end of this unit you can:

- Explain what a program, compiler and algorithm are
- Write, compile and run a C++ program
- Identify the parts of a simple program

## Key ideas

- A **program** is a list of instructions; a **compiler** translates C++ source code into machine code the computer can run.
- Workflow: *write* (`.cpp`) → *compile* → *run* → fix errors → repeat.
- Every C++ program has exactly one `main()` function where execution begins.
- `#include <iostream>` brings in input/output; `std::cout` prints. `using namespace std;` lets you write `cout` instead of `std::cout`.
- Statements end with `;`. Blocks are enclosed in `{ }`. Comments: `// one line` and `/* many lines */`.
- Escape sequences: `\n` newline, `\t` tab, `\"` quote, `\\` backslash.

## Errors you will meet

| Kind | When | Example |
|------|------|---------|
| Syntax error | compile time | missing `;` |
| Linker error | compile time | misspelled `main` |
| Runtime error | while running | division by zero |
| Logic error | wrong answer, no crash | using `+` instead of `*` |

## Examples

Compile and run each one yourself, then change it and predict what happens.

- [`hello.cpp`](examples/hello.cpp)
- [`structure.cpp`](examples/structure.cpp)

```bash
g++ -std=c++17 -Wall -Wextra -o prog examples/hello.cpp
./prog
```

## Practice

1. Print your name and branch on separate lines.
2. Deliberately remove a semicolon and read the compiler message.

## Experiments for this unit

- [Experiment 01: Hello World and Sum of Two Numbers](../../experiments/01-hello-and-sum/README.md)

---
[Course home](../../README.md) · [Unit 02 →](../02-variables-and-types/README.md)
