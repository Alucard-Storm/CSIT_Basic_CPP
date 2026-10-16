# Debugging 03: Undeclared Names and Scope

*Related notes: [Unit 02](../../units/02-variables-and-types/README.md)*

## Aim

Fix a loop program that uses a variable that was never declared, a misspelled name, and a variable used outside its scope.

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
Count = 5
Sum of squares = 55
Last square = 25
```

## What the compiler says

Compiling with `g++ -std=c++17 -Wall -Wextra -o prog buggy.cpp` gives (first lines shown):

```text
buggy.cpp: In function ‘int main()’:
buggy.cpp:8:9: error: ‘sum’ was not declared in this scope
    8 |         sum += square;
      |         ^~~
buggy.cpp:9:9: error: ‘cnt’ was not declared in this scope; did you mean ‘int’?
    9 |         cnt++;
      |         ^~~
      |         int
buggy.cpp:12:36: error: ‘sum’ was not declared in this scope
   12 |     cout << "Sum of squares = " << sum << endl;
      |                                    ^~~
buggy.cpp:13:33: error: ‘square’ was not declared in this scope
   13 |     cout << "Last square = " << square << endl;
      |                                 ^~~~~~
```

There may be more errors than bugs: one mistake often triggers several messages. Fix the **first** error, recompile, repeat.

## How to check yourself

```bash
./prog | diff - expected.txt && echo "Correct!"
```

Only look at [`SOLUTION.md`](SOLUTION.md) after you have tried; it lists every bug.

---
[All debugging labs](../README.md)
