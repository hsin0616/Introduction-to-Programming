#include <iostream>
using namespace std;

int* findPtr(int* arr, int N, int target) {
    int* p = arr;
    for (int i = 0; i < N; ++i, ++p) {
        if (*p == target) {
            return p;
        }
    }
    return nullptr;  // not found
}

int main() {
    int N;
    cin >> N;

    int* arr = new int[N];  // 用 new 在 heap 上動態配置一個「有 N 個 int 的陣列」。
    for (int i = 0; i < N; ++i) {
        cin >> arr[i];
    }

    int target;
    cin >> target;

    int* p = findPtr(arr, N, target);

    if (p != nullptr) {
        int index = p - arr;   // compute index from pointer
        cout << "Found at index " << index << endl;
    } else {
        cout << "Not found" << endl;
    }

    delete[] arr;
    return 0;
}
