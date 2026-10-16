# Basics of Programming using C++

A practical, beginner-friendly introduction for students who are new to programming. This repository is designed as an **extra/introductory class**, not as a replacement for the formal RGPV practical syllabus.

The goal is to help students learn how to **understand a problem, plan a solution, write code, test it, and debug it**—not merely copy C++ programs.

## Start here

1. **Install a compiler:** [setup guide](setup/README.md) (Linux, Windows, macOS, or an online compiler).
2. **Review the course plan:** [SYLLABUS.md](SYLLABUS.md).
3. **Study a unit:** read the [unit notes](#unit-notes) and run the small examples.
4. **Attempt an experiment:** write your own solution before checking `main.cpp`.
5. **Test and debug:** use the [debugging labs](debugging/README.md).

## Unit notes

Topic notes, each with runnable examples and practice questions:

1. [Introduction to Programming and C++](units/01-introduction/README.md)
2. [Variables, Data Types and Constants](units/02-variables-and-types/README.md)
3. [Operators and Input/Output](units/03-operators-and-io/README.md)
4. [Decision Making: if and switch](units/04-decisions/README.md)
5. [Loops](units/05-loops/README.md)
6. [Functions](units/06-functions/README.md)
7. [Arrays](units/07-arrays/README.md)
8. [Strings](units/08-strings/README.md)
9. [Pointers and References](units/09-pointers-and-references/README.md)
10. [Structures](units/10-structs/README.md)
11. [Classes and Objects](units/11-classes/README.md)
12. [Files and Vectors](units/12-files-and-vectors/README.md)

## Suggested 15-session plan

Designed for approximately **30 hours (15 sessions × 2 hours)**. Adjust pacing to the students' prior experience. Experiments 01–30 are the core set; 31–32 are optional extensions.

| Session | Focus | Unit notes | Suggested experiments |
|---:|---|---|---|
| 1 | What a program is; compiler; output and input | [Unit 01](units/01-introduction/README.md) | 01 |
| 2 | Variables, types, arithmetic and expressions | [Unit 02](units/02-variables-and-types/README.md), [Unit 03](units/03-operators-and-io/README.md) | 02, 15, 16 |
| 3 | Conditions and Boolean logic | [Unit 04](units/04-decisions/README.md), [Unit 03](units/03-operators-and-io/README.md) | 03, 17 |
| 4 | `switch`, menu-driven programs | [Unit 04](units/04-decisions/README.md) | 04, 20 |
| 5 | Loops and number properties | [Unit 05](units/05-loops/README.md) | 05, 18 |
| 6 | Loop practice, patterns and digit processing | [Unit 05](units/05-loops/README.md) | 06, 19 |
| 7 | Functions, decomposition and references | [Unit 06](units/06-functions/README.md), [Unit 09](units/09-pointers-and-references/README.md) | 07, 21, 22, 27 |
| 8 | Arrays, statistics, searching and sorting | [Unit 07](units/07-arrays/README.md) | 08, 23, 24 |
| 9 | Two-dimensional arrays and matrices | [Unit 07](units/07-arrays/README.md) | 09, 25 |
| 10 | Strings and text processing | [Unit 08](units/08-strings/README.md) | 10, 26 |
| 11 | Pointers and addresses | [Unit 09](units/09-pointers-and-references/README.md) | 11 |
| 12 | Structures and collections of records | [Unit 10](units/10-structs/README.md) | 12, 28 |
| 13 | Classes and encapsulation | [Unit 11](units/11-classes/README.md) | 13, 29 |
| 14 | Vectors and files | [Unit 12](units/12-files-and-vectors/README.md) | 14, 30 |
| 15 | Revision, debugging and a small applied task | All units (revision) | Debugging labs; optional 31–32 |

The schedule is a teaching guide, not a requirement to complete every experiment in class. Demonstrate some programs, let students solve others independently, and use extensions as homework or challenge tasks.

## Repository layout

```text
setup/              Compiler installation instructions
units/NN-*/         Topic notes and runnable examples
experiments/NN-*/   Experiment write-up, main.cpp, sample input/output
debugging/NN-*/     Broken programs, fixes, and explanations
SYLLABUS.md         Learning outcomes and session plan
Makefile            Build and run helpers
```

## Suggested student workflow

For each problem:

1. **Understand:** identify the inputs, expected outputs, and constraints.
2. **Plan:** write the algorithm in plain language or draw a flowchart.
3. **Implement:** translate the steps into C++.
4. **Test:** run normal, boundary, and invalid inputs.
5. **Debug and explain:** fix errors and explain why the solution works.

## Compile a program

```bash
g++ -std=c++17 -Wall -Wextra -pedantic -o prog units/01-introduction/examples/hello.cpp
./prog
```

## Build and run

```bash
make
make run-exp N=05
make check-debug
make clean
```

`make` compiles the examples and experiment programs. `make check-debug` checks the debugging exercises. A GitHub Actions workflow also builds the code on pushes.

## Experiment collection

- [Core and extension experiments](experiments/README.md)
- [Debugging labs](debugging/README.md)
- [Course syllabus](SYLLABUS.md)
- [Compiler setup](setup/README.md)

## Getting the repository

```bash
git clone <repository-url>
cd Basic_CPP
```

Or use GitHub's **Code → Download ZIP** option.
