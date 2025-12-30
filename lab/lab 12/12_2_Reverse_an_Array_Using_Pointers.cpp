#include <iostream>
using namespace std;

void reverseArray(int* left, int* right) {
    while (left < right) {
        // swap *left and *right
        int temp = *left;
        *left = *right;
        *right = temp;

        // move pointers inward
        ++left;
        --right;
    }
}

int main() {
    int N;
    cin >> N;

    int* arr = new int[N];
    for (int i = 0; i < N; ++i) {
        cin >> arr[i];
    }

    // reverse using pointers
    reverseArray(arr, arr + N - 1);

    for (int i = 0; i < N; ++i) {
        if (i) cout << ' ';
        cout << arr[i];
    }
    cout << endl;

    delete[] arr;
    return 0;
}
