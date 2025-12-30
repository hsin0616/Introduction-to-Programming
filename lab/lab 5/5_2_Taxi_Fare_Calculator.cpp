#include <iostream>
using namespace std;

// Calculate a taxi fare based on the distance
/*
Rules:
1. Base fare: $70 if distance <= 1.5km
2. If distance > 1.5km, charge $5 for every additional 0.1km
3. If distance > 20.0km, add a 10% surcharge after calculating the total.
*/
int main() 
{
    float travelDistance;
    cin >> travelDistance;
    
    if (travelDistance <= 1.5){
      cout << "70";
    }
    else if (1.5 < travelDistance && travelDistance <= 20.0){
      cout << 70 + (travelDistance-1.5)/0.1*5;
    }
    else {cout << (70 + (travelDistance-1.5)/0.1*5)*1.1;
    }
    
    return 0;
}