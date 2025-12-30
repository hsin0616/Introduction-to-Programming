#include <iostream>
using namespace std;

// Determine whether an integer is a palindrome number.
// A palindrome number: a number that reads the same forward and backward.
int reverse(int n){
  int r = 0;
  while (n > 0){
    r = r * 10 + (n % 10);
    n /= 10;
  }
  return r;
}


bool isPalindrome(int n){
  return n == reverse(n);
}


int main() 
{
    int n; cin >> n;
    cout << (isPalindrome(n) ? 1:0) << endl;
    return 0;
}