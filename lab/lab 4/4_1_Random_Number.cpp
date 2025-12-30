#include <iostream>
#include <cmath>
#include <algorithm>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() 
{
  // Read two integers a and b from the user, and then generates a random integer between them (inclusive).
  // Should work no matter which number is larger.
  int a, b;
  cin >> a >> b;
  int high = max(a, b), low = min(a, b);
  srand(time(0));
  int answer = rand() % (high-1) + low;
  cout << answer;
  return 0;
}





/*
rand()%10     // [0, 1, 2, 3, 4, 5, 6, 7, 8, 9]
rand()%10+2   // [2, 3, 4, 5, 6, 7, 8, 9, 10, 11]
rand()%9      // [0, 1, 2, 3, 4, 5, 6, 7, 8]
rand()%9+2    // [2, 3, 4, 5, 6, 7, 8, 9, 10]
*/