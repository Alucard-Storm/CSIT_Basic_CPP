// Write some numbers to a file, then read them back.
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream out("numbers.txt");
    if (!out) {
        cout << "Cannot create file" << endl;
        return 1;
    }
    for (int i = 1; i <= 5; i++) out << i * i << "\n";
    out.close();

    ifstream in("numbers.txt");
    int value, total = 0;
    while (in >> value) {
        cout << "read " << value << endl;
        total += value;
    }
    cout << "total = " << total << endl;
    return 0;
}
