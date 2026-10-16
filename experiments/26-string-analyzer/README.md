# Experiment 26: String Analyzer

**Level:** Core  
*Related notes: [Unit 08](../../units/08-strings/README.md)*

## Aim

Read a full line and count vowels, consonants, digits, spaces, and words.

## Theory

`getline` reads a whole line including spaces, unlike `cin >>`. The `<cctype>` functions `isalpha`, `isdigit` and `isspace` classify each character; they are given an `unsigned char` so that unusual characters are handled safely. An `istringstream` splits the line into words using `>>`, which skips any run of spaces.

## Algorithm

1. Start
2. Read one line with `getline`; stop if there is no input
3. For every character: if it is a letter count it as a vowel (`a e i o u`, any case) or a consonant; else count digits and white-space
4. Put the line in an `istringstream` and count the words read with `>>`
5. Print the five counts
6. Stop

## Program

Source file: [`main.cpp`](main.cpp)

```cpp
#include <cctype>
#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main() {
    string line;
    cout << "Enter a line: ";
    if (!getline(cin, line)) {
        cerr << "No input." << endl;
        return 1;
    }

    int vowels = 0, consonants = 0, digits = 0, spaces = 0;
    for (unsigned char ch : line) {
        if (isalpha(ch)) {
            char c = static_cast<char>(tolower(ch));
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        } else if (isdigit(ch)) {
            digits++;
        } else if (isspace(ch)) {
            spaces++;
        }
    }

    // Reading word by word from a stringstream skips the extra spaces.
    istringstream stream(line);
    string word;
    int words = 0;
    while (stream >> word) {
        words++;
    }

    cout << "Vowels: " << vowels << endl;
    cout << "Consonants: " << consonants << endl;
    cout << "Digits: " << digits << endl;
    cout << "Spaces: " << spaces << endl;
    cout << "Words: " << words << endl;
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
Hello C++ 2026
```

Output produced by the program (the typed input does not appear below when it is read from a file, so each prompt is followed directly by the next output):

```text
Enter a line: Vowels: 2
Consonants: 4
Digits: 4
Spaces: 2
Words: 3
```

## Challenge

Also print the line in upper case and reversed.

## Result

The program was compiled and executed successfully and produced the expected output for the sample input.

## Viva Questions

1. Why is `getline` used instead of `cin >>`?
2. What does `isalpha` return for a space? For `'+'`?
3. How does the program count words when there are several spaces in a row?
4. How would you count upper-case letters?

---
[← Previous](../25-matrix-transpose-diagonal/README.md) · [All experiments](../README.md) · [Next →](../27-reference-based-functions/README.md)
