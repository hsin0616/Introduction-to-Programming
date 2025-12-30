#include <iostream>
using namespace std;

// Print an inverted composed of the number n (the pyramid levels)
int main() 
{
    int n; cin >> n;
    for (int i = 1; i <= n; i++){
      // print the spaces
      for (int s=1; s < i; s++){
        cout << " ";
      }
      // print the numbers
      for (int j = 1; j <= n + 1 - i; j++){
        cout << j;
      }
      for (int k = 1; k <= n - i; k++){
        cout << (n - k + 1 - i);
      }
      cout << endl;
    }
    return 0;
}