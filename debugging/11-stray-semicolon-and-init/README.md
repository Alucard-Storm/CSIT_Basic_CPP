# Debugging 11: Logic Bug: Stray Semicolon and Initial Value

*Related notes: [Unit 05](../../units/05-loops/README.md)*

## Aim

This program compiles but its loops do not do what they appear to do. Find out why.

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
Row 1
Row 2
Row 3
5! = 120
```

## What you see

The program compiles, but running it prints:

```text
Row 4
5! = 0
```

The compiler also prints:

```text
buggy.cpp: In function ‘int main()’:
buggy.cpp:6:5: warning: this ‘for’ clause does not guard... [-Wmisleading-indentation]
    6 |     for (i = 1; i <= 3; i++); {
      |     ^~~
buggy.cpp:6:31: note: ...this statement, but the latter is misleadingly indented as if it were guarded by the ‘for’
    6 |     for (i = 1; i <= 3; i++); {
      |                               ^
```

## How to check yourself

```bash
./prog | diff - expected.txt && echo "Correct!"
```

Only look at [`SOLUTION.md`](SOLUTION.md) after you have tried; it lists every bug.

---
[All debugging labs](../README.md)
