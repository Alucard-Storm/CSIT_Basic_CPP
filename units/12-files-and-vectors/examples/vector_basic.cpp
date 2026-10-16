// std::vector is an array that can grow.
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v;
    v.push_back(40);
    v.push_back(10);
    v.push_back(30);
    v.push_back(20);

    cout << "size = " << v.size() << endl;
    sort(v.begin(), v.end());

    cout << "sorted: ";
    for (int x : v) cout << x << " ";
    cout << endl;

    v.pop_back();
    cout << "after pop_back, last = " << v.back() << endl;
    return 0;
}
