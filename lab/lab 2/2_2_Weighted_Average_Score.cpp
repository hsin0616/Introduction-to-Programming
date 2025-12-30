#include <iostream>
using namespace std;

int main() 
{
    const double WM = 1.0;  // math
    const double WP = 1.5;  // physics
    const double WC = 2.5;  // chemistry
    const double WE = 3.3;  // english
    
    // each subject scores is in the range 0 to 100.
    int math = 70;
    int physics = 80;
    int chemistry = 90;
    int english = 100;
    float weightedScore = (math*WM + physics*WP + chemistry*WC + english*WE) / (WM + WP + WC + WE);
    
    cout << "Math: " << math << endl;
    cout << "Physics: " << physics << endl;
    cout << "Chemistry: " << chemistry << endl;
    cout << "English: " << english << endl;
    cout << "Weighted Score: " << weightedScore << endl;
    return 0;
}