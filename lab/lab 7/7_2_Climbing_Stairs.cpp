#include <iostream>
using namespace std;

// Climbing a staircase with n steps. At each move, you can climb either 1 or 2 steps.
// Not allowed to land on any step that is a multiple of 3.
// Print the total number of different valid ways to reach exactly step n.
// Start at step 0, and step 0 is not considered a multiple of 3.
int climb(int current, int n){
  static int memo[101];  // int can be changed to long long
  static int savedN = -1;  // remember the "n" be calculated before
  static bool inited = false;  // if memo has been initialized
  
  if (!inited || n != savedN){  // ||: or
    for (int i = 0; i <= 100; ++i) memo[i] = -1;
    savedN = n;
    inited = true;
  }
  
  if (current > n) return 0;
  if (current != 0 && current % 3 == 0) return 0;
  if (current == n) return 1;
  if (memo[current] != -1) return (int)memo[current];
  
  // f(current) = f(current+1) + f(current+2)
  int ways = (int)climb(current + 1, n) + (int)climb(current + 2, n);
  memo[current] = ways;
  return (int)ways;
  
}

int main() 
{
  int n; cin >> n;
  cout << climb(0, n) << '\n';
  return 0;
}


/*
int main() 
{
  int n; if (!(cin >> n)) return 0;
  cout << climb(0, n) << '\n';
  return 0;
}
*/