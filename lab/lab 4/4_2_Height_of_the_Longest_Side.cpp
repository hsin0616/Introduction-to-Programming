#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main(){
  int a, b, c;
  cin >> a >> b >> c;
  double s = (a+b+c)/float(2);
  double area = sqrt(s*(s-a)*(s-b)*(s-c));
  int longestSide = max(a, max(b, c));
  //cout << "a, b, c are " << a << " " << b << " " << c << endl;
  //cout << "s is " << s << endl;
  //cout << "area is " << area << endl;
  cout << "The height of the longest side: " << area*2/longestSide << endl;
  return 0;
}