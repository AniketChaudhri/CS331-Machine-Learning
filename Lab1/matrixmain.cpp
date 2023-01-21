#include "matrixmul.hpp"
#include <bits/stdc++.h>

using namespace std;

#define n 600

int main() {

    vector<vector<int>> A(n, vector<int>(n));
    vector<vector<int>> B(n, vector<int>(n));
    vector<vector<int>> C(n, vector<int>(n));

    // Read matrix A and B from matrix1.txt and matrix2.txt

    freopen("matrix1.txt", "r", stdin);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> A[i][j];
        }
    }
    for (auto x : A) {
        for (auto y : x) {
            cout << y << " ";
        }
    }
    freopen("matrix2.txt", "r", stdin);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> B[i][j];
        }
    }
    for (auto x : B) {
        for (auto y : x) {
            cout << y << " ";
        }
    }
    matrixmul(A, B, C);
    freopen("matrix3.txt", "w", stdout);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
