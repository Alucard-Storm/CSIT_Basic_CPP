// A struct groups related variables under one name.
#include <iostream>
#include <string>
using namespace std;

struct Student {
    string name;
    int rollNo;
    double cgpa;
};

int main() {
    Student s1 = {"Ravi", 101, 8.4};
    Student s2;
    s2.name = "Meera";
    s2.rollNo = 102;
    s2.cgpa = 9.1;

    cout << s1.name << " (" << s1.rollNo << ") CGPA " << s1.cgpa << endl;
    cout << s2.name << " (" << s2.rollNo << ") CGPA " << s2.cgpa << endl;
    return 0;
}
