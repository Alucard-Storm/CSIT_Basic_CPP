# Debugging 02: Braces, Parentheses and Quotes

*Related notes: [Unit 04](../../units/04-decisions/README.md)*

## Aim

Fix a pass/fail program with unbalanced parentheses, braces and a string literal.

## Task

[`buggy.cpp`](buggy.cpp) contains **3 deliberate syntax errors**. Find and fix all of them so the program produces exactly the expected output. Do not rewrite the program; make the smallest changes that fix it.

Work on a copy so the original stays intact:

```bash
cp buggy.cpp mine.cpp
g++ -std=c++17 -Wall -Wextra -o prog mine.cpp
./prog < input.txt
```

Use this input:

```text
55
```

## Expected output

```text
Enter marks: Pass
```

## What the compiler says

Compiling with `g++ -std=c++17 -Wall -Wextra -o prog buggy.cpp` gives (first lines shown):

```text
buggy.cpp:6:13: warning: missing terminating " character
    6 |     cout << "Enter marks: ;
      |             ^
buggy.cpp:6:13: error: missing terminating " character
    6 |     cout << "Enter marks: ;
      |             ^~~~~~~~~~~~~~~
buggy.cpp: In function ‘int main()’:
buggy.cpp:6:10: error: no match for ‘operator<<’ (operand types are ‘std::ostream’ {aka ‘std::basic_ostream<char>’} and ‘std::istream’ {aka ‘std::basic_istream<char>’})
    6 |     cout << "Enter marks: ;
      |     ~~~~ ^~
      |     |
      |     std::ostream {aka std::basic_ostream<char>}
    7 |     cin >> marks;
      |     ~~~   
      |     |
      |     std::istream {aka std::basic_istream<char>}
buggy.cpp:6:10: note: candidate: ‘operator<<(int, int)’ (built-in)
    6 |     cout << "Enter marks: ;
      |     ~~~~~^~~~~~~~~~~~~~~~~~
    7 |     cin >> marks;
      |     ~~~   
buggy.cpp:6:10: note:   no known conversion for argument 2 from ‘std::istream’ {aka ‘std::basic_istream<char>’} to ‘int’
```

There may be more errors than bugs: one mistake often triggers several messages. Fix the **first** error, recompile, repeat.

## How to check yourself

```bash
./prog < input.txt | diff - expected.txt && echo "Correct!"
```

Only look at [`SOLUTION.md`](SOLUTION.md) after you have tried; it lists every bug.

---
[All debugging labs](../README.md)
