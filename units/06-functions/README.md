# Unit 06: Functions

*Taught in session 7 of the [session plan](../../SYLLABUS.md#suggested-session-plan).*

## Learning objectives

By the end of this unit you can:

- Declare, define and call functions
- Pass arguments and return values
- Write simple recursive functions

## Key ideas

```cpp
return_type name(parameters) {
    ...
    return value;
}
```

- A **prototype** (declaration) before `main` lets you define the function after it.
- `void` functions return nothing.
- Arguments are passed **by value** (a copy) by default; see [Unit 09](../09-pointers-and-references/README.md) for references.
- **Scope**: a variable exists only inside the block where it is declared. Avoid global variables.
- **Default arguments**: `void greet(string n = "friend");`
- **Overloading**: functions may share a name if their parameter lists differ.
- **Recursion**: a function that calls itself needs a **base case** and must move toward it.

## Examples

Compile and run each one yourself, then change it and predict what happens.

- [`functions.cpp`](examples/functions.cpp)
- [`recursion.cpp`](examples/recursion.cpp)

```bash
g++ -std=c++17 -Wall -Wextra -o prog examples/functions.cpp
./prog
```

## Practice

1. Write `bool isPrime(int n)` and use it to list primes below 50.
2. Write a recursive function for the sum of digits.

## Experiments for this unit

- [Experiment 07: GCD, LCM and Power using Functions](../../experiments/07-gcd-and-power/README.md)
- [Experiment 21: Functions and Function Overloading](../../experiments/21-functions-and-overloading/README.md)
- [Experiment 22: Recursion: Sum and Factorial](../../experiments/22-recursion-practice/README.md)
- [Experiment 27: References and Pass-by-Reference](../../experiments/27-reference-based-functions/README.md)

---
[← Unit 05](../05-loops/README.md) · [Course home](../../README.md) · [Unit 07 →](../07-arrays/README.md)
