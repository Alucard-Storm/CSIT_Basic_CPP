# Experiment 14: File Handling and Vectors

*Related notes: [Unit 12](../../units/12-files-and-vectors/README.md)*

## Aim

To store marks in a `vector`, save them to a text file, read them back and report the highest, lowest and average.

## Theory

`std::vector<T>` is a resizable array; `push_back` appends, `size()` gives the count and `sort` from `<algorithm>` orders the elements. File streams from `<fstream>` work like `cin` and `cout`: `ofstream` writes, `ifstream` reads, and `while (in >> value)` reads until the data runs out. Closing a stream (or letting it go out of scope) flushes the data.

## Algorithm

1. Start
2. Read `n` and then `n` marks into a `vector<int>`
3. Write each mark on its own line to `marks.txt`
4. Open `marks.txt` for reading and load the values into a second vector
5. Sort the vector; the first element is the lowest and the last is the highest
6. Print the sorted list, highest, lowest and the average, then stop

## Program

Source file: [`main.cpp`](main.cpp)

```cpp
#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cout << "How many marks? ";
    cin >> n;

    vector<int> marks;
    cout << "Enter " << n << " marks: ";
    for (int i = 0; i < n; i++) {
        int m;
        cin >> m;
        marks.push_back(m);
    }

    ofstream out("marks.txt");
    for (int m : marks) out << m << "\n";
    out.close();
    cout << "Saved " << marks.size() << " marks to marks.txt" << endl;

    vector<int> loaded;
    ifstream in("marks.txt");
    int value;
    while (in >> value) loaded.push_back(value);

    sort(loaded.begin(), loaded.end());
    int sum = 0;
    for (int m : loaded) sum += m;

    cout << "Read back (sorted):";
    for (int m : loaded) cout << " " << m;
    cout << endl;
    cout << "Highest = " << loaded.back() << ", Lowest = " << loaded.front()
         << ", Average = " << static_cast<double>(sum) / loaded.size() << endl;
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
5
67 88 45 92 73
```

Output produced by the program (the typed input does not appear below when it is read from a file, so each prompt is followed directly by the next output):

```text
How many marks? Enter 5 marks: Saved 5 marks to marks.txt
Read back (sorted): 45 67 73 88 92
Highest = 92, Lowest = 45, Average = 73
```

## Result

The program was compiled and executed successfully and produced the expected output for the sample input.

## Viva Questions

1. What advantage does `vector` have over an array?
2. What is the difference between `ofstream` and `ifstream`?
3. How can you check that a file opened successfully?
4. What does `while (in >> value)` test?

---
[← Previous](../13-bank-account/README.md) · [All experiments](../README.md)
