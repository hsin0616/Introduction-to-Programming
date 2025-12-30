#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream iff("data.txt");
    
    if (!iff.is_open()) {
        cout << "Can not open the file. Check if data.txt exists." << endl;
        return 1;
    }

    int a, b;

    // Line 1
    iff >> a >> b;
    cout << "Line 1: Sum=" << a+b << ", Diff=" << a-b << ", Prod=" << a*b << ", Quot=" << a/b << endl;

    // Line 2
    iff >> a >> b;
    cout << "Line 2: Sum=" << a+b << ", Diff=" << a-b << ", Prod=" << a*b << ", Quot=" << a/b << endl;

    // Line 3
    iff >> a >> b;
    cout << "Line 3: Sum=" << a+b << ", Diff=" << a-b << ", Prod=" << a*b << ", Quot=" << a/b << endl;

    return 0;
}
