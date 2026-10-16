// An array of structs: find the student with the highest CGPA.
#include <iostream>
#include <string>
using namespace std;

struct Student {
    string name;
    double cgpa;
};

int main() {
    Student cls[3] = {{"Ravi", 8.4}, {"Meera", 9.1}, {"Kabir", 7.8}};

    int best = 0;
    for (int i = 1; i < 3; i++) {
        if (cls[i].cgpa > cls[best].cgpa) best = i;
    }
    cout << "Topper: " << cls[best].name << " with " << cls[best].cgpa << endl;
    return 0;
}
