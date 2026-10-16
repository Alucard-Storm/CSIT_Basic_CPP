#include <iostream>
using namespace std;

int main() {
    int count = 0;
    for (int i = 1; i <= 5; i++) {
        int square = i * i;
        sum += square;
        cnt++;
    }
    cout << "Count = " << count << endl;
    cout << "Sum of squares = " << sum << endl;
    cout << "Last square = " << square << endl;
    return 0;
}
