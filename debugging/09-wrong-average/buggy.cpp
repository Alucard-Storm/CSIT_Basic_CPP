#include <iostream>
using namespace std;

int main() {
    int marks[4] = {70, 85, 90, 65};
    int sum = 0;
    for (int i = 1; i < 4; i++) {
        sum += marks[i];
    }
    double average = sum / 4;
    cout << "Average = " << average << endl;
    return 0;
}
