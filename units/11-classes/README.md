# Unit 11: Classes and Objects

*Taught in session 13 of the [session plan](../../SYLLABUS.md#suggested-session-plan).*

## Learning objectives

By the end of this unit you can:

- Define classes with data and methods
- Use constructors and access specifiers
- Explain encapsulation

## Key ideas

- A **class** is a blueprint; an **object** is one instance built from it.
- `private` members are visible only inside the class; `public` ones form its interface.
- **Encapsulation**: keep data private and change it only through methods that enforce rules.
- A **constructor** has the class name, no return type, and runs when an object is created. Prefer the initialiser list: `BankAccount() : balance(0) {}`
- **Getters** return values; mark methods that do not modify the object `const`.
- Difference from `struct`: members are `private` by default in a class, `public` in a struct.
- Next topics (beyond this course): destructors, inheritance, polymorphism.

## Examples

Compile and run each one yourself, then change it and predict what happens.

- [`class_basic.cpp`](examples/class_basic.cpp)
- [`bank_account.cpp`](examples/bank_account.cpp)

```bash
g++ -std=c++17 -Wall -Wextra -o prog examples/class_basic.cpp
./prog
```

## Practice

1. Create a `Student` class with a method that returns the grade.
2. Add a `transfer` method to `BankAccount`.

## Experiments for this unit

- [Experiment 13: Bank Account using a Class](../../experiments/13-bank-account/README.md)
- [Experiment 29: Rectangle Class and Encapsulation](../../experiments/29-rectangle-class/README.md)

---
[← Unit 10](../10-structs/README.md) · [Course home](../../README.md) · [Unit 12 →](../12-files-and-vectors/README.md)
