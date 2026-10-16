// Read a word and decide whether it reads the same backwards.
#include <iostream>
#include <string>
using namespace std;

int main() {
    string word;
    cout << "Enter a word: ";
    cin >> word;

    bool isPalindrome = true;
    int n = word.length();
    for (int i = 0; i < n / 2; i++) {
        if (word[i] != word[n - 1 - i]) {
            isPalindrome = false;
            break;
        }
    }

    cout << word << (isPalindrome ? " is" : " is not") << " a palindrome" << endl;
    return 0;
}
