#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

int main()
{
    ifstream inFile("10_1.csv");
    if (!inFile) {
        cout << "Failed to open 10_1.csv" << endl;
        return 1;
    }
    long long sum=0; string line;
    while (getline(inFile, line)){
        stringstream ss(line);
        string pass;
        int cost;
        getline(ss, pass, ',');
        ss >> cost;
        sum += cost;
    }
    cout << "Final Balance: " << sum << endl;

    return 0;
}
