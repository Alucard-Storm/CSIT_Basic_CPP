#include <iostream>
using namespace std;

int main() {
    int marks[4] = {70, 85, 90, 65};
    int sum = 0;
    for (int i = 0; i < 4; i++) {
        sum += marks[i];
    }
    double average = static_cast<double>(sum) / 4;
    cout << "Average = " << average << endl;
    return 0;
}
