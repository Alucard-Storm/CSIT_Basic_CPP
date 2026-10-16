# Debugging 10: Logic Bug: = vs == and Missing break

*Related notes: [Unit 04](../../units/04-decisions/README.md)*

## Aim

This program compiles (with a warning) but prints extra or wrong lines. Find out why.

## Task

[`buggy.cpp`](buggy.cpp) contains **2 deliberate logic bugs**. Find and fix all of them so the program produces exactly the expected output. Do not rewrite the program; make the smallest changes that fix it.

Work on a copy so the original stays intact:

```bash
cp buggy.cpp mine.cpp
g++ -std=c++17 -Wall -Wextra -o prog mine.cpp
./prog < input.txt
```

Use this input:

```text
7
```

## Expected output

```text
Enter a number: Not ten
remainder 1
```

## What you see

The program compiles, but running it prints:

```text
Enter a number: Ten
remainder 1
remainder 2
```

The compiler also prints:

```text
buggy.cpp: In function ‘int main()’:
buggy.cpp:8:11: warning: suggest parentheses around assignment used as truth value [-Wparentheses]
    8 |     if (n = 10) {
      |         ~~^~~~
buggy.cpp:18:38: warning: this statement may fall through [-Wimplicit-fallthrough=]
   18 |             cout << "remainder 1" << endl;
      |                                      ^~~~
buggy.cpp:19:9: note: here
   19 |         default:
      |         ^~~~~~~
```

## How to check yourself

```bash
./prog < input.txt | diff - expected.txt && echo "Correct!"
```

Only look at [`SOLUTION.md`](SOLUTION.md) after you have tried; it lists every bug.

---
[All debugging labs](../README.md)
