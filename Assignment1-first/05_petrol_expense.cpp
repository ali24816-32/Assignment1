#include <iostream>
using namespace std;

int main()
{
    float distance, average, petrolPrice;
    float petrolConsumed, totalCost;

    cout << "Enter distance travelled in km: ";
    cin >> distance;
    cout << "Enter average fuel consumption (km per litre): ";
    cin >> average;
    cout << "Enter petrol price per litre: ";
    cin >> petrolPrice;

    petrolConsumed = distance / average;
    totalCost = petrolConsumed * petrolPrice;

    cout << "Petrol consumed = " << petrolConsumed << " litres" << endl;
    cout << "Total petrol cost = Rs. " << totalCost << endl;

    return 0;
}
