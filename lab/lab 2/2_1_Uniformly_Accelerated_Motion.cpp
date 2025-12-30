#include <iostream>
using namespace std;

int main() 
{
    double u = 10;    // initial velocity, 0.0 to 100.0
    double a = 2;     // acceleration, -10.0 to 10.0
    double t = 5;     // time, 1 to 100
    double s;         // displacement

    s = u*t + a*t*t/2;
    
    cout << "Initial Velocity: " << u << endl;
    cout << "Acceleration: " << a << endl;
    cout << "Time: " << t << endl;
    cout << "Displacement: " << s << endl;

    return 0;
}