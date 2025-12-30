#include <iostream>
#include <cstring>
#include <iomanip>   // setw
#include <algorithm> // min
using namespace std;

// Reads several names and prints the one that comes first in lexicographical order.
// Uses a fixed-size 2D C-string array: char name[50][31]
int main() {
    char name[50][31] = {};

    int n, m; // number of names, max length of names
    if (!(cin >> n >> m)) return 0;

    n = min(n, 50);
    int width = min(m, 30);   // to keep '\0'

    cin >> setw(width + 1) >> name[0];
    int outputIdx = 0;

    for (int i = 1; i < n; ++i) {
        cin >> setw(width + 1) >> name[i];
        if (strcmp(name[i], name[outputIdx]) < 0) {  // name[i] < name[outputIdx]
            outputIdx = i;
        }
    }

    cout << name[outputIdx] << endl;
    return 0;
}
