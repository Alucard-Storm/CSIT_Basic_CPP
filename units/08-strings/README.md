# Unit 08: Strings

*Taught in session 10 of the [session plan](../../SYLLABUS.md#suggested-session-plan).*

## Learning objectives

By the end of this unit you can:

- Use std::string and its member functions
- Process text character by character

## Key ideas

- `#include <string>`; `string s = "hello";`
- `s.length()`, `s[i]`, `s + t`, `s += "x"`, `s == t`, `s.substr(pos, len)`, `s.find("x")`.
- `cin >> s` stops at the first space. To read a line, use `getline(cin, s);`. After a `cin >> number`, call `cin.ignore();` before `getline`.
- Characters are small integers: `'a' + 1` is `'b'`. `<cctype>` offers `isdigit`, `isalpha`, `toupper`, `tolower`.
- Indexing with `[]` is not bounds-checked; `s.at(i)` throws an error instead.
- C-style strings (`char[]` ending in `'\0'`) exist, but prefer `std::string`.

## Examples

Compile and run each one yourself, then change it and predict what happens.

- [`strings.cpp`](examples/strings.cpp)
- [`palindrome.cpp`](examples/palindrome.cpp)

```bash
g++ -std=c++17 -Wall -Wextra -o prog examples/strings.cpp
./prog
```

## Practice

1. Count the words in a sentence read with `getline`.
2. Convert a string to upper case without using a library string function.

## Experiments for this unit

- [Experiment 10: String Operations and Palindrome](../../experiments/10-string-operations/README.md)
- [Experiment 26: String Analyzer](../../experiments/26-string-analyzer/README.md)

---
[← Unit 07](../07-arrays/README.md) · [Course home](../../README.md) · [Unit 09 →](../09-pointers-and-references/README.md)
