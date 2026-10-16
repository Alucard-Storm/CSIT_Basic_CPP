# Debugging 05: Stream Operators and for-loop Syntax

*Related notes: [Unit 05](../../units/05-loops/README.md)*

## Aim

Fix a counting program that uses the wrong stream operators and a malformed `for` header.

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
5
```

## Expected output

```text
Enter n: 1 2 3 4 5
```

## What the compiler says

Compiling with `g++ -std=c++17 -Wall -Wextra -o prog buggy.cpp` gives (first lines shown):

```text
buggy.cpp: In function ‘int main()’:
buggy.cpp:7:9: error: no match for ‘operator<<’ (operand types are ‘std::istream’ {aka ‘std::basic_istream<char>’} and ‘int’)
    7 |     cin << n;
      |     ~~~ ^~ ~
      |     |      |
      |     |      int
      |     std::istream {aka std::basic_istream<char>}
buggy.cpp:7:9: note: candidate: ‘operator<<(int, int)’ (built-in)
    7 |     cin << n;
      |     ~~~~^~~~
buggy.cpp:7:9: note:   no known conversion for argument 1 from ‘std::istream’ {aka ‘std::basic_istream<char>’} to ‘int’
In file included from /usr/include/c++/13/bits/basic_string.h:47,
                 from /usr/include/c++/13/string:54,
                 from /usr/include/c++/13/bits/locale_classes.h:40,
                 from /usr/include/c++/13/bits/ios_base.h:41,
                 from /usr/include/c++/13/ios:44,
                 from /usr/include/c++/13/ostream:40,
                 from /usr/include/c++/13/iostream:41,
                 from buggy.cpp:1:
/usr/include/c++/13/string_view:761:5: note: candidate: ‘template<class _CharT, class _Traits> std::basic_ostream<_CharT, _Traits>& std::operator<<(basic_ostream<_CharT, _Traits>&, basic_string_view<_CharT, _Traits>)’
  761 |     operator<<(basic_ostream<_CharT, _Traits>& __os,
      |     ^~~~~~~~
```

There may be more errors than bugs: one mistake often triggers several messages. Fix the **first** error, recompile, repeat.

## How to check yourself

```bash
./prog < input.txt | diff - expected.txt && echo "Correct!"
```

Only look at [`SOLUTION.md`](SOLUTION.md) after you have tried; it lists every bug.

---
[All debugging labs](../README.md)
