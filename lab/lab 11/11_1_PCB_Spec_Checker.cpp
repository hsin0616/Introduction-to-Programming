#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <iomanip>
using namespace std;

int main() {
    ifstream file("ex_11_1.csv");
    if (!file) {
        cerr << "Error: can not open the file ex_11_1.csv";
        return 1;
    }

    string line, item;
    if (!getline(file, line)) {
        cerr << "Error: empty file";
        return 1;
    }

    stringstream ss(line);
    int width, length, icNum;

    getline(ss, item, ',');
    width = stoi(item);

    getline(ss, item, ',');
    length = stoi(item);

    getline(ss, item, ',');
    icNum = stoi(item);

    double pcbArea = width * length;

    const int MAX_ICS = 100;
    int count = 0;
    double sumPower = 0.0;
    int    sumArea  = 0;

    while (count < icNum && count < MAX_ICS && getline(file, line)) {
        stringstream ss2(line);
        string powerStr, areaStr;

        if (!getline(ss2, powerStr, ',')) continue;
        if (!getline(ss2, areaStr, ',')) continue;

        double power = stod(powerStr);
        int area     = stoi(areaStr);

        sumPower += power;
        sumArea  += area;
        ++count;
    }

    double avgPower = sumPower / icNum;

    string passFail1;
    if (avgPower <= 3.0)
        passFail1 = "PASS";
    else
        passFail1 = "FAIL";

    string passFail2;
    if (sumArea <= pcbArea/2)
        passFail2 = "PASS";
    else
        passFail2 = "FAIL";

    cout << fixed << setprecision(2);
    cout << "Average IC Power = " << fixed << setprecision(2) << avgPower << ", SPEC1 " << passFail1 << endl;

    cout.unsetf(ios::floatfield);
    cout << "Total IC Area = " << fixed << setprecision(2) <<sumArea << ", SPEC2 " << passFail2 << endl;

    return 0;
}
