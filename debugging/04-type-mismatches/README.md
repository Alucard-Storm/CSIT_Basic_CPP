# Debugging 04: Type Mismatches

*Related notes: [Unit 02](../../units/02-variables-and-types/README.md)*

## Aim

Fix variable initialisations whose values do not match their declared types.

## Task

[`buggy.cpp`](buggy.cpp) contains **3 deliberate syntax errors**. Find and fix all of them so the program produces exactly the expected output. Do not rewrite the program; make the smallest changes that fix it.

Work on a copy so the original stays intact:

```bash
cp buggy.cpp mine.cpp
g++ -std=c++17 -Wall -Wextra -o prog mine.cpp
./prog
```

## Expected output

```text
Asha 19 A 12500.5
```

## What the compiler says

Compiling with `g++ -std=c++17 -Wall -Wextra -o prog buggy.cpp` gives (first lines shown):

```text
buggy.cpp:7:19: warning: multi-character character constant [-Wmultichar]
    7 |     string name = 'Asha';
      |                   ^~~~~~
buggy.cpp: In function ‘int main()’:
buggy.cpp:6:15: error: invalid conversion from ‘const char*’ to ‘int’ [-fpermissive]
    6 |     int age = "19";
      |               ^~~~
      |               |
      |               const char*
buggy.cpp:7:19: error: conversion from ‘int’ to non-scalar type ‘std::string’ {aka ‘std::__cxx11::basic_string<char>’} requested
    7 |     string name = 'Asha';
      |                   ^~~~~~
buggy.cpp:8:18: error: invalid conversion from ‘const char*’ to ‘char’ [-fpermissive]
    8 |     char grade = "A";
      |                  ^~~
      |                  |
      |                  const char*
```

There may be more errors than bugs: one mistake often triggers several messages. Fix the **first** error, recompile, repeat.

## How to check yourself

```bash
./prog | diff - expected.txt && echo "Correct!"
```

Only look at [`SOLUTION.md`](SOLUTION.md) after you have tried; it lists every bug.

---
[All debugging labs](../README.md)
