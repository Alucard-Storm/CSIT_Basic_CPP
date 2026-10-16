# Syllabus: Basics of Programming using C++

## Course description

An introduction to computer programming for first-year students with no prior experience. Students learn to break problems into steps, express them in C++, and test and debug the result, ending with an introduction to classes and file handling.

## Learning outcomes

After completing the course a student can:

1. Describe how a program is written, compiled and executed.
2. Use variables, operators and the basic data types correctly.
3. Control program flow with decisions and loops.
4. Decompose a problem into functions, including simple recursion.
5. Store and process collections of data with arrays, strings, structures and vectors.
6. Explain and use pointers and references.
7. Define a simple class with private data and public methods.
8. Read from and write to text files.
9. Compile, test and debug small programs on their own computer.

## Prerequisites

None beyond basic school mathematics and the ability to use a computer. Complete the [setup guide](setup/README.md) before Week 1.

## Weekly plan

| Week | Notes | Experiment(s) |
|------|-------|---------------|
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

Topic lists per week:

| Week | Topics |
|------|--------|
| 1 | What is a program; compiler; `main`; `cout`; syntax and logic errors |
| 2 | Variables; `int`, `double`, `char`, `bool`; constants; integer division; casting |
| 3 | Arithmetic, relational and logical operators; `cin`; formatted output |
| 4 | `if`, `else if`, `else`; ternary operator; `switch` |
| 5 | `for`, `while`, `do-while`; `break`/`continue`; nested loops and patterns |
| 6 | Function definition, parameters, return values, scope; recursion |
| 7 | 1-D and 2-D arrays; searching and sorting basics |
| 8 | `std::string`; character handling; `getline` |
| 9 | Addresses, pointers, references; pass by reference |
| 10 | `struct`; arrays of structs |
| 11 | Classes, objects, constructors, encapsulation |
| 12 | `vector`; file input/output; revision |

## Debugging labs

The [debugging labs](debugging/README.md) give students broken programs (syntax errors and logic bugs) to diagnose from compiler messages and wrong output. Each is tied to a unit and can be set as in-class exercises after that unit.

## Suggested assessment

Adjust the weights to your institution's rules.

| Component | Weight |
|-----------|--------|
| Lab record and experiments (continuous) | 30% |
| Quizzes / in-class tests | 20% |
| Mid-term written test | 20% |
| End-of-course practical exam | 30% |

## Resources

**Textbooks**

- Bjarne Stroustrup, *Programming: Principles and Practice Using C++*, 3rd ed., Addison-Wesley.
- Herbert Schildt, *C++: The Complete Reference*, McGraw-Hill.
- Robert Lafore, *Object-Oriented Programming in C++*, Sams.
- Tony Gaddis, *Starting Out with C++: From Control Structures through Objects*, Pearson.

**Online**

- <https://www.learncpp.com>: free, thorough tutorial.
- <https://en.cppreference.com>: the language and library reference.
- <https://godbolt.org>: see what the compiler does with your code.

## Lab record format

Each experiment page follows the layout expected in the lab notebook: **Aim → Theory → Algorithm → Program → Sample Input/Output → Result → Viva questions**.
