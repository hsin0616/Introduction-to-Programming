#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
using namespace std;

int main() {
    ifstream inFile("ex_11_2.csv");
    if (!inFile) {
        cerr << "Error: cannot open the file ex_11_2.csv" << endl;
        return 1;
    }
    
    string name, age, gender;
    
    getline(inFile, name);
    getline(inFile, age);
    getline(inFile, gender);
    
    int ageI = stoi(age);
    
    cout << "{\n";
    cout << "    \"name\": \"" << name << "\",\n";
    cout << "    \"age\": 0x" << hex << ageI << ",\n";
    cout << "    \"gender\": \"" << gender << "\"\n";
    cout << "}\n";

    return 0;
}
