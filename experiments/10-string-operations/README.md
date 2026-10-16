# Experiment 10: String Operations and Palindrome

*Related notes: [Unit 08](../../units/08-strings/README.md)*

## Aim

To find the length of a string, reverse it, count its vowels and check whether it is a palindrome.

## Theory

`std::string` stores text and offers `length()`, indexing with `[]`, `+=` for appending and comparison with `==`. Characters can be tested with the `<cctype>` functions such as `tolower`. A palindrome reads the same forwards and backwards; the check is made case-insensitive by converting to lower case first.

## Algorithm

1. Start
2. Read a word `s`
3. Print `s.length()`
4. Build `reversed` by appending characters from the last to the first
5. Count characters that are `a e i o u` (ignoring case)
6. Convert `s` to lower case, compare with its reverse, print the verdict
7. Stop

## Program

Source file: [`main.cpp`](main.cpp)

```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cout << "Enter a word: ";
    cin >> s;

    cout << "Length: " << s.length() << endl;

    string reversed;
    for (int i = static_cast<int>(s.length()) - 1; i >= 0; i--) reversed += s[i];
    cout << "Reversed: " << reversed << endl;

    int vowels = 0;
    for (char c : s) {
        char l = static_cast<char>(tolower(c));
        if (l == 'a' || l == 'e' || l == 'i' || l == 'o' || l == 'u') vowels++;
    }
    cout << "Vowels: " << vowels << endl;

    string lower;
    for (char c : s) lower += static_cast<char>(tolower(c));
    string lowerRev(lower.rbegin(), lower.rend());
    cout << s << (lower == lowerRev ? " is" : " is not") << " a palindrome" << endl;
    return 0;
}
```

Compile and run:

```bash
g++ -std=c++17 -Wall -Wextra -o prog main.cpp
./prog
```

## Sample Input / Output

Input (typed by the user):

```text
Level
```

Output produced by the program (the typed input does not appear below when it is read from a file, so each prompt is followed directly by the next output):

```text
Enter a word: Length: 5
Reversed: leveL
Vowels: 2
Level is a palindrome
```

## Result

The program was compiled and executed successfully and produced the expected output for the sample input.

## Viva Questions

1. How does `std::string` differ from a C-style `char` array?
2. How do you read a whole line including spaces?
3. What does `s[i]` return, and is it bounds-checked?
4. What are some other palindromes?

---
[← Previous](../09-matrix-operations/README.md) · [All experiments](../README.md) · [Next →](../11-pointers-and-swap/README.md)
