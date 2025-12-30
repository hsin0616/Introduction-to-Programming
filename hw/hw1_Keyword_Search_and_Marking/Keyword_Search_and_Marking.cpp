#include <iostream>
#include <algorithm>
#include <cctype>
#include <string>
using namespace std;

int main() 
{
    string sentence, keyword;
    getline(cin, sentence);
    cin >> keyword;

    string orig_sentence = sentence;
    string orig_keyword  = keyword;

    transform(sentence.begin(), sentence.end(), sentence.begin(),
              [](unsigned char c){ return tolower(c); });
    transform(keyword.begin(), keyword.end(), keyword.begin(),
              [](unsigned char c){ return tolower(c); });

    size_t pos = sentence.find(keyword);

    if (pos == -1) {
        cout << -1 << "\n";
        cout << orig_sentence << "\n";
    } else {
        cout << static_cast<int>(pos) << "\n";
        cout << orig_sentence.substr(0, pos)
             << "[" << orig_sentence.substr(pos, orig_keyword.size()) << "]"
             << orig_sentence.substr(pos + orig_keyword.size())
             << "\n";
    }
    return 0;
}

