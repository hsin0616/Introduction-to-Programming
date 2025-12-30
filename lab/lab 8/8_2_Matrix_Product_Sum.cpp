#include <iostream>
using namespace std;

// Read two integers m and n, constructs two matrices: A and B.
int main()
{
    long long m, n;
    cin >> m >> n;

    // A: 2x3
    long long a[2][3];
    a[0][0] = m;
    a[0][1] = m + 1;
    a[0][2] = m + 2;
    a[1][0] = m + 3;
    a[1][1] = m + 4;
    a[1][2] = m + 5;

    // B: 3x4
    long long b[3][4];
    b[0][0] = n;
    b[0][1] = n + 3;
    b[0][2] = n + 6;
    b[0][3] = n + 9;
    b[1][0] = n + 1;
    b[1][1] = n + 4;
    b[1][2] = n + 7;
    b[1][3] = n + 10;
    b[2][0] = n + 2;
    b[2][1] = n + 5;
    b[2][2] = n + 8;
    b[2][3] = n + 11;

    // C(2x4) = A(2x3) * B(3x4)
    long long sum = 0;
    for (int i = 0; i < 2; ++i)
    {
        for (int j = 0; j < 4; ++j)
        {
            long long cij = 0;
            for (int k = 0; k < 3; ++k)
            {
                cij += a[i][k] * b[k][j];
            }
            sum += cij;
        }
    }
    cout << sum << endl;
    return 0;
}
