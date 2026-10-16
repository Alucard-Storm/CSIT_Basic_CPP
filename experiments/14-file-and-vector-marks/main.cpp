#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cout << "How many marks? ";
    cin >> n;

    vector<int> marks;
    cout << "Enter " << n << " marks: ";
    for (int i = 0; i < n; i++) {
        int m;
        cin >> m;
        marks.push_back(m);
    }

    ofstream out("marks.txt");
    for (int m : marks) out << m << "\n";
    out.close();
    cout << "Saved " << marks.size() << " marks to marks.txt" << endl;

    vector<int> loaded;
    ifstream in("marks.txt");
    int value;
    while (in >> value) loaded.push_back(value);

    sort(loaded.begin(), loaded.end());
    int sum = 0;
    for (int m : loaded) sum += m;

    cout << "Read back (sorted):";
    for (int m : loaded) cout << " " << m;
    cout << endl;
    cout << "Highest = " << loaded.back() << ", Lowest = " << loaded.front()
         << ", Average = " << static_cast<double>(sum) / loaded.size() << endl;
    return 0;
}
