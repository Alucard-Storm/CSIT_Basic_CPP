# Debugging 08: Class Definition Errors

*Related notes: [Unit 11](../../units/11-classes/README.md)*

## Aim

Fix a class that is missing its closing semicolon, hides its constructor and methods in the private section, and is constructed incorrectly.

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
Area = 12.5664
```

## What the compiler says

Compiling with `g++ -std=c++17 -Wall -Wextra -o prog buggy.cpp` gives (first lines shown):

```text
buggy.cpp:10:2: error: expected ‘;’ after class definition
   10 | }
      |  ^
      |  ;
buggy.cpp: In function ‘int main()’:
buggy.cpp:13:12: error: no matching function for call to ‘Circle::Circle()’
   13 |     Circle c;
      |            ^
buggy.cpp:8:5: note: candidate: ‘Circle::Circle(double)’
    8 |     Circle(double r) { radius = r; }
      |     ^~~~~~
buggy.cpp:8:5: note:   candidate expects 1 argument, 0 provided
buggy.cpp:4:7: note: candidate: ‘constexpr Circle::Circle(const Circle&)’
    4 | class Circle {
      |       ^~~~~~
buggy.cpp:4:7: note:   candidate expects 1 argument, 0 provided
buggy.cpp:4:7: note: candidate: ‘constexpr Circle::Circle(Circle&&)’
buggy.cpp:4:7: note:   candidate expects 1 argument, 0 provided
buggy.cpp:14:32: error: ‘double Circle::area() const’ is private within this context
   14 |     cout << "Area = " << c.area() << endl;
      |                          ~~~~~~^~
buggy.cpp:9:12: note: declared private here
```

There may be more errors than bugs: one mistake often triggers several messages. Fix the **first** error, recompile, repeat.

## How to check yourself

```bash
./prog | diff - expected.txt && echo "Correct!"
```

Only look at [`SOLUTION.md`](SOLUTION.md) after you have tried; it lists every bug.

---
[All debugging labs](../README.md)
