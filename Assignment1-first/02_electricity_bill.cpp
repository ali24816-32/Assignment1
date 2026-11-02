#include <iostream>
using namespace std;

int main()
{
    float units, pricePerUnit, totalCharges;

    cout << "Enter electricity units consumed: ";
    cin >> units;
    cout << "Enter price per unit: ";
    cin >> pricePerUnit;

    totalCharges = units * pricePerUnit;

    cout << "Total electricity charges = Rs. " << totalCharges << endl;

    return 0;
}
