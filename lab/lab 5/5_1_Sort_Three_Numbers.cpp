#include <iostream>
#include <cmath>
using namespace std;

// Read three integers from the user
// Output them in ascending order
int main() 
{
    int num1, num2, num3;
    cin >> num1 >> num2 >> num3;
    
    int third = max(num1, max(num2, num3));
    int first = min(num1, min(num2, num3));
    int second = num1 + num2 + num3 - first - third;
    
    cout << first << " " << second << " " << third;
    return 0;
}