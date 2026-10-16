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
