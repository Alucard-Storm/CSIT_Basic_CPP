#include <iostream>
#include <string>
using namespace std;

int main() {
    int marks[3] = {70, 80, 90};
    string city = "Pune";
    int total = 0;
    for (int i = 0; i < 3; i++) {
        total += marks[i];
    }
    cout << city << ": total = " << total << endl;
    return 0;
}
