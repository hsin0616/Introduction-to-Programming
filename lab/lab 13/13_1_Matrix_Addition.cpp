#include <iostream>
using namespace std;

int** CreateMatrix(int m, int n) {
    int **mat = new int*[m];
    for (int i = 0; i < m; ++i) {
        mat[i] = new int[n];
    }
    return mat;
}

void DeleteMatrix(int** mat, int m) {
    for (int i = 0; i < m; ++i) {
        delete[] mat[i];  // 刪每一 new int[n]
    }
    delete[] mat;  // 刪 new int*[m] 
}

int main() {
    int m, n;
    cin >> m >> n;

    int **A = CreateMatrix(m, n);
    int **B = CreateMatrix(m, n);
    int **C = CreateMatrix(m, n);

    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> A[i][j];
        }
    }

    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> B[i][j];
        }
    }

    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            C[i][j] = A[i][j] + B[i][j];
            
            cout << C[i][j];
            if (j < n - 1) cout << ' ';
        }
        if (i < m - 1) cout << '\n';
    }

    // for (int i = 0; i < m; ++i) {
    //     for (int j = 0; j < n; ++j) {
    //         cout << C[i][j];
    //         if (j < n - 1) cout << ' ';
    //     }
    //     if (i < m - 1) cout << '\n';
    // }

    DeleteMatrix(A, m);
    DeleteMatrix(B, m);
    DeleteMatrix(C, m);

    return 0;
}
