# Debugging 07: Array and String Errors

*Related notes: [Unit 07](../../units/07-arrays/README.md)*

## Aim

Fix a program with too many array initialisers, a string written with single quotes and array indexing written like a function call.

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
Pune: total = 240
```

## What the compiler says

Compiling with `g++ -std=c++17 -Wall -Wextra -o prog buggy.cpp` gives (first lines shown):

```text
buggy.cpp:7:19: warning: multi-character character constant [-Wmultichar]
    7 |     string city = 'Pune';
      |                   ^~~~~~
buggy.cpp: In function ‘int main()’:
buggy.cpp:6:36: error: too many initializers for ‘int [3]’
    6 |     int marks[3] = {70, 80, 90, 100};
      |                                    ^
buggy.cpp:7:19: error: conversion from ‘int’ to non-scalar type ‘std::string’ {aka ‘std::__cxx11::basic_string<char>’} requested
    7 |     string city = 'Pune';
      |                   ^~~~~~
buggy.cpp:10:23: error: ‘marks’ cannot be used as a function
   10 |         total += marks(i);
      |                  ~~~~~^~~
```

There may be more errors than bugs: one mistake often triggers several messages. Fix the **first** error, recompile, repeat.

## How to check yourself

```bash
./prog | diff - expected.txt && echo "Correct!"
```

Only look at [`SOLUTION.md`](SOLUTION.md) after you have tried; it lists every bug.

---
[All debugging labs](../README.md)
