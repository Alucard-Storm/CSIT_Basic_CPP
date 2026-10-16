# Debugging 06: Function Declaration and Call Errors

*Related notes: [Unit 06](../../units/06-functions/README.md)*

## Aim

Fix a program whose function is called before it is declared, called with the wrong number of arguments, and defined with an incomplete parameter list.

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
3 + 4 = 7
10 + 20 = 30
```

## What the compiler says

Compiling with `g++ -std=c++17 -Wall -Wextra -o prog buggy.cpp` gives (first lines shown):

```text
buggy.cpp: In function ‘int main()’:
buggy.cpp:5:27: error: ‘add’ was not declared in this scope
    5 |     cout << "3 + 4 = " << add(3, 4) << endl;
      |                           ^~~
buggy.cpp: At global scope:
buggy.cpp:10:16: error: ‘b’ has not been declared
   10 | int add(int a, b) {
      |                ^
buggy.cpp: In function ‘int add(int, int)’:
buggy.cpp:11:16: error: ‘b’ was not declared in this scope
   11 |     return a + b;
      |                ^
```

There may be more errors than bugs: one mistake often triggers several messages. Fix the **first** error, recompile, repeat.

## How to check yourself

```bash
./prog | diff - expected.txt && echo "Correct!"
```

Only look at [`SOLUTION.md`](SOLUTION.md) after you have tried; it lists every bug.

---
[All debugging labs](../README.md)
