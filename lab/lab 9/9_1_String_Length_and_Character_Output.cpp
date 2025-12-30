#include <iostream>
#include <cstring>
using namespace std;

// Read a single word (no space) into a character array char s[51]
// Print two lines:
// 1. The length of the string (excluding the numm terminator \0)
// 2. Each character of the string is separated by a single space
int main() 
{
    char s[51]; cin >> s;
    int lengthS = strlen(s);
    cout << "len=" << lengthS << endl;
    for (int i=0; i<lengthS; i++){
      cout << s[i] << " ";
    }
    return 0;
}
