#include <iostream>
#include <fstream>
#include <cctype>  // for isalpha, toupper
using namespace std;

int main() {
    ifstream inFile("10_2.txt");
    if (!inFile) {
        cout << "Failed to open 10_2.txt" << endl;
        return 1;
    }

    int freq[26] = {0};
    char ch;

    // 統計每個字母出現次數
    while (inFile.get(ch)) {
        if (isalpha(ch)){
            ch = toupper(ch);
            freq[ch - 'A']++;
        }
    }
    inFile.close();

    // 字母對照表
    char letters[26];
    for (int i = 0; i < 26; i++) {
        letters[i] = 'A' + i;
    }

    // 排序 (依頻率高→低，字母小→大)
    for (int i = 0; i < 25; i++) {
        for (int j = i + 1; j < 26; j++) {
            // if freq[j] > freq[i]，或次數相同 but letters[j] < letters[i]，則交換
            if (freq[j] > freq[i] || (freq[j] == freq[i] && letters[j] < letters[i])) {
                // 交換頻率
                int tf = freq[i];
                freq[i] = freq[j];
                freq[j] = tf;

                // 交換字母
                char tc = letters[i];
                letters[i] = letters[j];
                letters[j] = tc;
            }
        }
    }

    // top 5
    cout << "Top 5 letters:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Top " << (i + 1) << ": " << letters[i] << " (" << freq[i] << ")" << endl;
    }

    return 0;
}
