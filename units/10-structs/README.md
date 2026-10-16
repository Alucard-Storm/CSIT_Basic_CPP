# Unit 10: Structures

*Taught in session 12 of the [session plan](../../SYLLABUS.md#suggested-session-plan).*

## Learning objectives

By the end of this unit you can:

- Define and use a struct
- Build arrays of structs
- Pass structs to functions

## Key ideas

```cpp
struct Student {
    string name;
    int rollNo;
    double cgpa;
};
```

- A struct is a **user-defined type** made of members of any types.
- Access members with `.`; through a pointer use `->` (`p->cgpa`).
- Initialise with braces: `Student s = {"Ravi", 101, 8.4};`
- An **array of structs** is a table of records; loop over it to search or sort.
- Structs are copied when passed to functions; use `const Student&` for efficiency.
- A struct can contain arrays or other structs.

## Examples

Compile and run each one yourself, then change it and predict what happens.

- [`struct_basic.cpp`](examples/struct_basic.cpp)
- [`struct_array.cpp`](examples/struct_array.cpp)

```bash
g++ -std=c++17 -Wall -Wextra -o prog examples/struct_basic.cpp
./prog
```

## Practice

1. Store 5 books (title, price) and print the costliest.
2. Sort the students in the example by CGPA.

## Experiments for this unit

- [Experiment 12: Student Records using Structures](../../experiments/12-student-records/README.md)
- [Experiment 28: Multiple Student Records](../../experiments/28-student-records-array/README.md)

---
[← Unit 09](../09-pointers-and-references/README.md) · [Course home](../../README.md) · [Unit 11 →](../11-classes/README.md)
