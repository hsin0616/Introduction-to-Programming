#include <iostream>
#include <vector>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    int n;
    if (!(cin >> n)) {
        return 0;
    }

    //  n x n matrix
    vector<vector<int>> mat(n, vector<int>(n, 0));

    int top = 0, bottom = n - 1;
    int left = 0, right = n - 1;
    int val = 1;
    int maxVal = n * n;

    while (top <= bottom && left <= right) {
        // 向右
        for (int j = left; j <= right; ++j) {
            mat[top][j] = val++;
        }
        ++top;

        // 向下
        for (int i = top; i <= bottom; ++i) {
            mat[i][right] = val++;
        }
        --right;

        // 向左
        if (top <= bottom) {
            for (int j = right; j >= left; --j) {
                mat[bottom][j] = val++;
            }
            --bottom;
        }

        // 向上
        if (left <= right) {
            for (int i = bottom; i >= top; --i) {
                mat[i][left] = val++;
            }
            ++left;
        }
    }

    // 欄寬 = n*n 的位數
    int width = to_string(maxVal).size();

    // - 右對齊
    // - 數字之間一個空白
    // - 每行最後沒有多餘空白
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << setw(width) << mat[i][j];
            if (j + 1 < n) {
                cout << ' ';
            }
        }
        if (i + 1 < n) {
            cout << '\n';
        }
    }

    return 0;
}
