#include <iostream>
using namespace std;

const int N = 2;

void readMatrix(int m[N][N], const char* name) {
    cout << "Enter matrix " << name << " (" << N << "x" << N << "): ";
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++) cin >> m[i][j];
}

void printMatrix(int m[N][N], const char* title) {
    cout << title << ":" << endl;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) cout << m[i][j] << "\t";
        cout << endl;
    }
}

int main() {
    int a[N][N], b[N][N], sum[N][N], prod[N][N];
    readMatrix(a, "A");
    readMatrix(b, "B");

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            sum[i][j] = a[i][j] + b[i][j];
            prod[i][j] = 0;
            for (int k = 0; k < N; k++) prod[i][j] += a[i][k] * b[k][j];
        }
    }
    printMatrix(sum, "A + B");
    printMatrix(prod, "A x B");
    return 0;
}
