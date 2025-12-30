#include <iostream>
#include <iomanip>
using namespace std;

int main() 
{
    string productName;
    int quantity;
    double unitPrice;
    string cashierName;
    
    cout << setw(20) << left << "Item" 
    << setw(6) << "Qty" 
    << setw(10) << "Unit"
    << setw(12) << "Total" << endl;
    
    getline(cin, productName);
    
    cin >> quantity >> unitPrice;
    cin.ignore();
    getline(cin, cashierName);
    
    cout << setw(20) << left << productName 
    << setw(6) << quantity 
    << setw(10) << fixed << setprecision(2) << unitPrice
    << setw(12) << fixed << unitPrice*quantity << endl;
    
    cout << cashierName;
    return 0;
}
