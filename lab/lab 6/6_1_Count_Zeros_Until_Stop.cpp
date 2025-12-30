#include <iostream>
using namespace std;


// Read integers from the user one by one.
// Count the number of zeros entered before the first '1' and stop the program.

int main() 
{
    int c; cin >> c;
    int count = 0;
    while (c == 0){
      count += 1;
      cin >> c;
      if (c == 1) break;
    }
    cout << count;
    return 0;
}