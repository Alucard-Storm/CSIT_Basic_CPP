# Debugging 09: Logic Bug: Wrong Average

*Related notes: [Unit 02](../../units/02-variables-and-types/README.md)*

## Aim

This program compiles, but prints the wrong average. Find out why.

## Task

[`buggy.cpp`](buggy.cpp) contains **2 deliberate logic bugs**. Find and fix all of them so the program produces exactly the expected output. Do not rewrite the program; make the smallest changes that fix it.

Work on a copy so the original stays intact:

```bash
cp buggy.cpp mine.cpp
g++ -std=c++17 -Wall -Wextra -o prog mine.cpp
./prog
```

## Expected output

```text
Average = 77.5
```

## What you see

The program compiles, but running it prints:

```text
Average = 60
```

The compiler prints no warnings for this one: you must find it by reading the code and comparing the output.

## How to check yourself

```bash
./prog | diff - expected.txt && echo "Correct!"
```

Only look at [`SOLUTION.md`](SOLUTION.md) after you have tried; it lists every bug.

---
[All debugging labs](../README.md)
