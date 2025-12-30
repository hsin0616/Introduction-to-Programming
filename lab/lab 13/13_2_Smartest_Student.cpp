#include <iostream>
using namespace std;

struct Student {
    char name[20];
    int score;
};

Student* findTopStudent(Student* list, int N) {
    if (N <= 0 || list == nullptr) {
        return nullptr;
    }

    Student* best = &list[0];  // 設第 0 個是最高分

    for (int i = 1; i < N; ++i) {
        if (list[i].score > best->score) {
            best = &list[i];
        }
    }

    return best;  // 指向那個 student 的指標
}

int main() {
    int N;
    cin >> N;

    Student* list = new Student[N];

    for (int i = 0; i < N; ++i) {
        cin >> list[i].name >> list[i].score;
    }

    Student* top = findTopStudent(list, N);

    if (top != nullptr) {
        cout << "Top student: " << top->name;
    }

    delete[] list;

    return 0;
}


// finish the code without using pointer
/*
#include <iostream>
#include <string>
#include <sstream>  // for stringstream
#include <limits>
using namespace std;

int main() {
    int n;
    cin >> n;
    cin.ignore(); // 吃掉 n 後面的換行

    int count = 0;
    int bestScore = -1;
    string bestName = "";

    while (count < n) {
        string line;
        getline(cin, line);

        if (line.empty()) continue;

        stringstream ss(line);
        string name;
        int score;

        if (!(ss >> name >> score)) continue;

        if (score > bestScore) {
            bestScore = score;
            bestName = name;
        }

        count++;
    }

    cout << "Top student: " << bestName << endl;
    return 0;
}

*/