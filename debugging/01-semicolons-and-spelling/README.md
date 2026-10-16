# Debugging 01: Semicolons and Spelling

*Related notes: [Unit 01](../../units/01-introduction/README.md)*

## Aim

Fix a short program that will not compile because of missing semicolons and a misspelled name.

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
Sum = 12
```

## What the compiler says

Compiling with `g++ -std=c++17 -Wall -Wextra -o prog buggy.cpp` gives (first lines shown):

```text
buggy.cpp: In function ‘int main()’:
buggy.cpp:6:5: error: expected ‘,’ or ‘;’ before ‘int’
    6 |     int b = 7;
      |     ^~~
buggy.cpp:7:5: error: ‘Cout’ was not declared in this scope
    7 |     Cout << "Sum = " << a + b << endl;
      |     ^~~~
buggy.cpp:7:29: error: ‘b’ was not declared in this scope
    7 |     Cout << "Sum = " << a + b << endl;
      |                             ^
buggy.cpp:8:13: error: expected ‘;’ before ‘}’ token
    8 |     return 0
      |             ^
      |             ;
    9 | }
      | ~
```

There may be more errors than bugs: one mistake often triggers several messages. Fix the **first** error, recompile, repeat.

## How to check yourself

```bash
./prog | diff - expected.txt && echo "Correct!"
```

Only look at [`SOLUTION.md`](SOLUTION.md) after you have tried; it lists every bug.

---
[All debugging labs](../README.md)
