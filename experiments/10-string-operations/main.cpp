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
