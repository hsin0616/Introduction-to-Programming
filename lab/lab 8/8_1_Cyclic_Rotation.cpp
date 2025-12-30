#include <iostream>
using namespace std;

// Perform a cyclic right rotation on an array of integers.
// Given an array of size 5 and an integer K, rotate all elements to the right by K positions.
// Valid range: 0 <= K <= 100

int main()
{
    int k;
    cin >> k;
    const int MaxSize = 5;
    int a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;
    int array[MaxSize] = {a, b, c, d, e};
    int move = k % 5;

    for (int i = 5 - move; i < 5; i++)
    {
        cout << array[i] << " ";
    }
    for (int i = 0; i < 5 - move; i++)
    {
        cout << array[i] << " ";
    }
    return 0;
}