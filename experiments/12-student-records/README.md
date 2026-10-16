# Experiment 12: Student Records using Structures

*Related notes: [Unit 10](../../units/10-structs/README.md)*

## Aim

To store details of several students in an array of structures and find the class average and the topper.

## Theory

A `struct` groups variables of different types into one user-defined type. Members are accessed with the dot operator (`s[i].marks`). Declaring an array of structs gives a simple table of records. Traversing the array lets us compute aggregates such as the average and the maximum.

## Algorithm

1. Start
2. Define `struct Student { name, rollNo, marks }`
3. Read `n`, then read `n` students into an array
4. Traverse: add up marks and remember the index of the highest marks
5. Print the table, class average and the topper
6. Stop

## Program

Source file: [`main.cpp`](main.cpp)

```cpp
#include <iostream>
#include <string>
using namespace std;

struct Student {
    string name;
    int rollNo;
    double marks;
};

int main() {
    int n;
    cout << "Number of students (max 20): ";
    cin >> n;
    if (n < 1 || n > 20) {
        cout << "Invalid count." << endl;
        return 1;
    }

    Student s[20];
    for (int i = 0; i < n; i++) {
        cout << "Enter name, roll number and marks of student " << i + 1 << ": ";
        cin >> s[i].name >> s[i].rollNo >> s[i].marks;
    }

    int top = 0;
    double total = 0;
    for (int i = 0; i < n; i++) {
        total += s[i].marks;
        if (s[i].marks > s[top].marks) top = i;
    }

    cout << "Roll\tName\tMarks" << endl;
    for (int i = 0; i < n; i++)
        cout << s[i].rollNo << "\t" << s[i].name << "\t" << s[i].marks << endl;
    cout << "Class average = " << total / n << endl;
    cout << "Topper: " << s[top].name << " (" << s[top].marks << ")" << endl;
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
Asha 101 78.5
Ravi 102 91
Meera 103 66
```

Output produced by the program (the typed input does not appear below when it is read from a file, so each prompt is followed directly by the next output):

```text
Number of students (max 20): Enter name, roll number and marks of student 1: Enter name, roll number and marks of student 2: Enter name, roll number and marks of student 3: Roll	Name	Marks
101	Asha	78.5
102	Ravi	91
103	Meera	66
Class average = 78.5
Topper: Ravi (91)
```

## Result

The program was compiled and executed successfully and produced the expected output for the sample input.

## Viva Questions

1. What is the difference between a structure and an array?
2. How do you access a member of a structure?
3. Can a structure contain another structure?
4. How does a `struct` differ from a `class` in C++?

---
[← Previous](../11-pointers-and-swap/README.md) · [All experiments](../README.md) · [Next →](../13-bank-account/README.md)
