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
