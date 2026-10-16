# Experiment 32: Mini Project: Multiple-Choice Quiz

**Level:** Extension  
*Related notes: [Unit 02](../../units/02-variables-and-types/README.md), [Unit 04](../../units/04-decisions/README.md), [Unit 05](../../units/05-loops/README.md), [Unit 07](../../units/07-arrays/README.md)*

## Aim

Run a small multiple-choice quiz, accept answers, and report the final score.

## Theory

This small project combines earlier topics: an array of questions and a parallel array of correct answers, a `for` loop to ask them in turn, `if` to compare each answer, and an `if – else if – else` ladder to choose the closing message. `tolower` makes the comparison case-insensitive.

## Algorithm

1. Start
2. Store three questions and their correct answers (`a`, `b`, `b`) in two arrays
3. `score = 0`; for each question: print it, read one letter, convert it to lower case, and add 1 to `score` if it equals the stored answer
4. Print `Score: score/3`
5. If `score` is 3 print “Excellent!”, if 2 print “Good work…”, otherwise “Review the notes…”
6. Stop

## Program

Source file: [`main.cpp`](main.cpp)

```cpp
#include <cctype>
#include <iostream>
#include <string>
using namespace std;

int main() {
    const int TOTAL = 3;
    const string questions[TOTAL] = {
        "1) Which type stores whole numbers? (a) int (b) string (c) double",
        "2) Which loop checks its condition before each iteration? (a) do-while (b) while (c) none",
        "3) Which operator tests equality? (a) = (b) == (c) !="
    };
    const char answers[TOTAL] = {'a', 'b', 'b'};

    int score = 0;
    for (int i = 0; i < TOTAL; i++) {
        char answer;
        cout << questions[i] << endl;
        cout << "Your answer: ";
        if (!(cin >> answer)) {
            cerr << "Invalid input." << endl;
            return 1;
        }
        if (tolower(static_cast<unsigned char>(answer)) == answers[i]) {
            score++;
        }
    }

    cout << "Score: " << score << "/" << TOTAL << endl;
    if (score == TOTAL) {
        cout << "Excellent!" << endl;
    } else if (score == TOTAL - 1) {
        cout << "Good work; review one concept." << endl;
    } else {
        cout << "Review the notes and try again." << endl;
    }
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
a
b
b
```

Output produced by the program (the typed input does not appear below when it is read from a file, so each prompt is followed directly by the next output):

```text
1) Which type stores whole numbers? (a) int (b) string (c) double
Your answer: 2) Which loop checks its condition before each iteration? (a) do-while (b) while (c) none
Your answer: 3) Which operator tests equality? (a) = (b) == (c) !=
Your answer: Score: 3/3
Excellent!
```

## Challenge

Add three more questions of your own and print the percentage score.

## Result

The program was compiled and executed successfully and produced the expected output for the sample input.

## Viva Questions

1. Why are the questions and answers kept in arrays?
2. What does `tolower` do and why is it used?
3. How would you add a fourth question?
4. How would you shuffle the order of the questions?

---
[← Previous](../31-file-line-word-counter/README.md) · [All experiments](../README.md)
