# Basics of Programming using C++

A 12-week introductory course for students who have never programmed before. This repository holds everything for the course: the **layout**, the **notes**, runnable **examples**, and a set of lab **experiments** written in lab-record format.

## Start here

1. **Install a compiler**: [setup guide](setup/README.md) (Linux, Windows, macOS, or an online compiler)
2. **Read the plan**: [SYLLABUS.md](SYLLABUS.md): outcomes, weekly plan, assessment, books
3. **Follow the schedule below**: read the unit notes, run the examples, then do the experiment

## Schedule

| Week | Unit notes | Experiment(s) |
|------|------------|---------------|
| 1 | [Introduction to Programming and C++](units/01-introduction/README.md) | [01](experiments/01-hello-and-sum/README.md) |
| 2 | [Variables, Data Types and Constants](units/02-variables-and-types/README.md) | [02](experiments/02-temperature-conversion/README.md) |
| 3 | [Operators and Input/Output](units/03-operators-and-io/README.md) | Practice questions |
| 4 | [Decision Making: if and switch](units/04-decisions/README.md) | [03](experiments/03-grade-calculator/README.md), [04](experiments/04-menu-calculator/README.md) |
| 5 | [Loops](units/05-loops/README.md) | [05](experiments/05-prime-and-factorial/README.md), [06](experiments/06-fibonacci-and-patterns/README.md) |
| 6 | [Functions](units/06-functions/README.md) | [07](experiments/07-gcd-and-power/README.md) |
| 7 | [Arrays](units/07-arrays/README.md) | [08](experiments/08-array-statistics/README.md), [09](experiments/09-matrix-operations/README.md) |
| 8 | [Strings](units/08-strings/README.md) | [10](experiments/10-string-operations/README.md) |
| 9 | [Pointers and References](units/09-pointers-and-references/README.md) | [11](experiments/11-pointers-and-swap/README.md) |
| 10 | [Structures](units/10-structs/README.md) | [12](experiments/12-student-records/README.md) |
| 11 | [Classes and Objects](units/11-classes/README.md) | [13](experiments/13-bank-account/README.md) |
| 12 | [Files and Vectors](units/12-files-and-vectors/README.md) | [14](experiments/14-file-and-vector-marks/README.md) |

All experiments: [experiments/](experiments/README.md)  
Debugging practice (broken programs to fix): [debugging/](debugging/README.md)

## How to use this repository

```text
setup/         installing and using a compiler
units/NN-*/    notes (README.md) and examples/*.cpp for each topic
experiments/NN-*/  lab write-up (README.md), main.cpp, input.txt, output.txt
debugging/NN-*/    broken program (buggy.cpp) to fix, expected output, solution
SYLLABUS.md    course layout
Makefile       builds every program to check it compiles
```

For each week:

1. Read the unit's `README.md`.
2. Compile and run every file in its `examples/` folder. **Change something and predict the result before you run it.**
3. Attempt the *Practice* questions.
4. Do the experiment on your own first, then compare with the given program.
5. Copy the write-up into your lab record and prepare the viva questions.

### Compiling a program

```bash
g++ -std=c++17 -Wall -Wextra -o prog units/01-introduction/examples/hello.cpp
./prog
```

### Building everything (for instructors and contributors)

```bash
make               # compile all examples and experiments
make run-exp N=05  # run experiment 05 with its sample input
make check-debug   # confirm the buggy programs are still broken and the fixed ones pass
make clean
```

A GitHub Actions workflow runs the same build on every push, so a broken program is caught before students see it.

## Getting the repository

```bash
git clone <repository-url>
cd Basic_CPP
```

Or use the green **Code → Download ZIP** button on GitHub.
