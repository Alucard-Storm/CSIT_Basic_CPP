#include <iostream>
using namespace std;

int main() {
    int count = 0;
    int sum = 0;
    int square = 0;
    for (int i = 1; i <= 5; i++) {
        square = i * i;
        sum += square;
        count++;
    }
    cout << "Count = " << count << endl;
    cout << "Sum of squares = " << sum << endl;
    cout << "Last square = " << square << endl;
    return 0;
}
