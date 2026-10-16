# Course Plan: Basics of Programming using C++

## Purpose

A practical introductory course for students who are new to programming. It is intended to supplement regular classes and build confidence with problem-solving; it is **not a replacement for the formal RGPV practical syllabus**.

**Suggested duration:** 30 hours across 15 sessions.  
**Language:** C++17.  
**Prerequisites:** Basic school mathematics and the ability to use a computer.

## Learning outcomes

By the end, a student should be able to:

1. Explain the basic edit–compile–run cycle.
2. Read input, display output, and use variables, data types, operators, and expressions.
3. Design solutions with conditions, loops, and functions.
4. Work with arrays, strings, and simple two-dimensional arrays.
5. Explain references and pointers at an introductory level.
6. Group related data with structures and model simple behaviour with a class.
7. Use vectors and basic text-file input.
8. Test normal and boundary cases, interpret compiler messages, and debug simple programs.
9. Describe a solution's algorithm before explaining its code.

## Suggested session plan

| Session | Main concepts | Unit notes | Experiments |
|---:|---|---|---|
| 1 | What is a program, compiler, `main`, output/input | [Unit 01](units/01-introduction/README.md) | 01 |
| 2 | Variables, types, expressions, arithmetic and formatting | [Unit 02](units/02-variables-and-types/README.md), [Unit 03](units/03-operators-and-io/README.md) | 02, 15, 16 |
| 3 | `if`/`else`, comparisons, Boolean logic | [Unit 04](units/04-decisions/README.md), [Unit 03](units/03-operators-and-io/README.md) | 03, 17 |
| 4 | `switch`, menus, input validation | [Unit 04](units/04-decisions/README.md) | 04, 20 |
| 5 | Loops, factorial, primes, number properties | [Unit 05](units/05-loops/README.md) | 05, 18 |
| 6 | Loop practice, Fibonacci, patterns, digit processing | [Unit 05](units/05-loops/README.md) | 06, 19 |
| 7 | Functions, decomposition, recursion, references | [Unit 06](units/06-functions/README.md), [Unit 09](units/09-pointers-and-references/README.md) | 07, 21, 22, 27 |
| 8 | Arrays, statistics, searching and sorting | [Unit 07](units/07-arrays/README.md) | 08, 23, 24 |
| 9 | Two-dimensional arrays and matrix operations | [Unit 07](units/07-arrays/README.md) | 09, 25 |
| 10 | Strings, character handling, full-line input | [Unit 08](units/08-strings/README.md) | 10, 26 |
| 11 | Addresses, pointers and safe introductory examples | [Unit 09](units/09-pointers-and-references/README.md) | 11 |
| 12 | Structures and arrays of records | [Unit 10](units/10-structs/README.md) | 12, 28 |
| 13 | Classes, constructors and encapsulation | [Unit 11](units/11-classes/README.md) | 13, 29 |
| 14 | Vectors and file input/output | [Unit 12](units/12-files-and-vectors/README.md) | 14, 30 |
| 15 | Revision, debugging and applied practice | All units (revision) | Debugging labs; optional 31–32 |

The schedule is flexible. Use demonstrations and pair programming where needed. Students do not have to complete every experiment independently during the session; some can be assigned as guided practice or homework.

Notes and examples for every topic are listed under [Unit notes](README.md#unit-notes) in the README.

## Experiment levels

- **Core (01–30):** progressive practice across the main beginner topics.
- **Extensions (31–32):** optional text-file analysis and a short quiz program for students who finish early or need a small applied task.

See the [complete experiment index](experiments/README.md).

## A repeatable problem-solving method

Encourage students to follow this cycle for every task:

1. **Understand the problem:** identify inputs, outputs, constraints, and examples.
2. **Plan:** write numbered algorithm steps or sketch a flowchart.
3. **Implement:** convert the plan into C++.
4. **Test:** try the sample, a different normal input, and a boundary or invalid input.
5. **Debug:** use compiler messages and output to locate mistakes.
6. **Explain:** describe why the solution works without simply reading the code.

## Debugging practice

The [debugging labs](debugging/README.md) contain deliberately broken programs for students to inspect. Use them after the related concept has been taught. Ask students to identify the symptom, explain the likely cause, fix it, and test the result.

## Suggested lightweight assessment

This is an adaptable suggestion for an introductory class, not an official RGPV assessment scheme.

| Component | Suggested weight |
|---|---:|
| In-class problem-solving and participation | 20% |
| Completed experiments and short explanations | 35% |
| Debugging and test-case exercise | 20% |
| Small end-of-course practical task | 25% |

## References

- Bjarne Stroustrup, *Programming: Principles and Practice Using C++*, 3rd ed.
- Tony Gaddis, *Starting Out with C++: From Control Structures through Objects*.
- [LearnCpp](https://www.learncpp.com)
- [cppreference](https://en.cppreference.com)
- [Compiler Explorer](https://godbolt.org)

## Suggested experiment write-up format

Each experiment page uses a concise lab-record structure:

**Aim → Concepts → Algorithm → Program → Sample Input/Output → Result → Viva Questions**

Students should write the algorithm themselves before consulting the reference program.
