// The std::string class: length, indexing, concatenation, searching.
#include <iostream>
#include <string>
using namespace std;

int main() {
    string first = "Hello";
    string second = "World";
    string both = first + ", " + second + "!";

    cout << both << endl;
    cout << "length  = " << both.length() << endl;
    cout << "first char = " << both[0] << endl;
    cout << "substr(7, 5) = " << both.substr(7, 5) << endl;

    size_t pos = both.find("World");
    if (pos != string::npos) cout << "\"World\" found at index " << pos << endl;

    for (size_t i = 0; i < first.length(); i++) {
        cout << static_cast<char>(toupper(first[i]));
    }
    cout << endl;
    return 0;
}
