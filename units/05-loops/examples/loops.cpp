// for, while and do-while doing the same job: print 1..5.
#include <iostream>
using namespace std;

int main() {
    cout << "for:      ";
    for (int i = 1; i <= 5; i++) cout << i << " ";
    cout << endl;

    cout << "while:    ";
    int j = 1;
    while (j <= 5) {
        cout << j << " ";
        j++;
    }
    cout << endl;

    cout << "do-while: ";
    int k = 1;
    do {
        cout << k << " ";
        k++;
    } while (k <= 5);
    cout << endl;

    int sum = 0;
    for (int i = 1; i <= 100; i++) {
        if (i % 2 == 0) continue;  // skip even numbers
        sum += i;
    }
    cout << "Sum of odd numbers up to 100 = " << sum << endl;
    return 0;
}
