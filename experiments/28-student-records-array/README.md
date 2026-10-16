# Experiment 28: Multiple Student Records

**Level:** Core  
*Related notes: [Unit 10](../../units/10-structs/README.md)*

## Aim

Store several student records in an array of structures and display the student with the highest marks.

## Theory

A `struct` groups related data under one type; an array of structs forms a table of records. Members are read with the dot operator (`students[i].marks`). Scanning the array while remembering the *index* of the best element finds the topper without copying records. Marks outside 0–100 are rejected.

## Algorithm

1. Start
2. Define `struct Student { name, roll, marks }`
3. Read `n` (1–50) and then `roll name marks` for each student; reject marks outside 0–100
4. Set `top = 0`; for `i` from 1 to `n - 1`: if `students[i].marks > students[top].marks` set `top = i`
5. Print the name, roll number and marks of `students[top]`
6. Stop

## Program

Source file: [`main.cpp`](main.cpp)

```cpp
#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

struct Student {
    string name;
    int roll;
    double marks;
};

int main() {
    const int MAX = 50;
    Student students[MAX];
    int n;

    cout << "Enter number of students (1-50): ";
    if (!(cin >> n) || n < 1 || n > MAX) {
        cerr << "Invalid count." << endl;
        return 1;
    }

    for (int i = 0; i < n; i++) {
        cout << "Enter roll, one-word name, marks for student " << i + 1 << ": ";
        cin >> students[i].roll >> students[i].name >> students[i].marks;
        if (!cin || students[i].marks < 0 || students[i].marks > 100) {
            cerr << "Invalid student data." << endl;
            return 1;
        }
    }

    int top = 0;
    for (int i = 1; i < n; i++) {
        if (students[i].marks > students[top].marks) {
            top = i;
        }
    }

    cout << fixed << setprecision(1);
    cout << "Top student: " << students[top].name
         << " (roll " << students[top].roll << "), marks "
         << students[top].marks << endl;
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
3
101 Asha 82.5
102 Ravi 91
103 Neha 88
```

Output produced by the program (the typed input does not appear below when it is read from a file, so each prompt is followed directly by the next output):

```text
Enter number of students (1-50): Enter roll, one-word name, marks for student 1: Enter roll, one-word name, marks for student 2: Enter roll, one-word name, marks for student 3: Top student: Ravi (roll 102), marks 91.0
```

## Challenge

Also print the class average and the number of students above it.

## Result

The program was compiled and executed successfully and produced the expected output for the sample input.

## Viva Questions

1. What is a structure and why use one?
2. How is an array of structures stored?
3. Why do we remember the index of the topper instead of only the marks?
4. What happens if two students have the same highest marks?

---
[← Previous](../27-reference-based-functions/README.md) · [All experiments](../README.md) · [Next →](../29-rectangle-class/README.md)
