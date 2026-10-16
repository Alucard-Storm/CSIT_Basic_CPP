# Experiment 31: Text File Line and Word Counter

**Level:** Extension  
*Related notes: [Unit 12](../../units/12-files-and-vectors/README.md)*

## Aim

Read a text file and count its lines and whitespace-separated words.

## Theory

A text file is read with an `ifstream`. `getline(file, line)` returns false at the end of the file, so `while (getline(...))` visits every line. Each line is split into words with an `istringstream` and `>>`. The file name is relative, so the program looks for `sample.txt` in the *current directory*: run it from inside this folder.

## Algorithm

1. Start
2. Open `sample.txt`; if it cannot be opened print an error and stop
3. `lines = 0`, `words = 0`
4. While a line can be read: increase `lines`, then read the words of that line with an `istringstream` and increase `words` for each
5. Print the number of lines and words
6. Stop (the file is closed automatically)

## Program

Source file: [`main.cpp`](main.cpp)

```cpp
#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main() {
    // sample.txt is looked up in the current directory, so run from this folder.
    const char* filename = "sample.txt";
    ifstream file(filename);
    if (!file) {
        cerr << "Could not open " << filename << "." << endl;
        return 1;
    }

    string line, word;
    int lines = 0, words = 0;
    while (getline(file, line)) {
        lines++;
        istringstream stream(line);
        while (stream >> word) {
            words++;
        }
    }

    cout << "Lines: " << lines << endl;
    cout << "Words: " << words << endl;
    return 0;
}
```

Compile and run:

```bash
cd experiments/31-file-line-word-counter   # sample.txt is found relative to the current folder
g++ -std=c++17 -Wall -Wextra -o prog main.cpp
./prog
```

## Sample Input / Output

This program reads no keyboard input. It reads the file [`sample.txt`](sample.txt):

```text
C++ makes problem solving practical.
Read files one line at a time.
Count words carefully.
```

Output:

```text
Lines: 3
Words: 15
```

## Challenge

Also count the characters, or ask the user for the file name.

## Result

The program was compiled and executed successfully and produced the expected output for the sample input.

## Viva Questions

1. Which header provides `ifstream`?
2. Why must we check that the file opened?
3. What does `while (getline(file, line))` test?
4. Why does it matter which folder the program is run from?

---
[← Previous](../30-vector-expense-summary/README.md) · [All experiments](../README.md) · [Next →](../32-mini-project-quiz/README.md)
