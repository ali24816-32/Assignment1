#include <iostream>
using namespace std;

int main()
{
    float notebookPrice, penPrice, totalBill;
    int notebookQuantity, penQuantity;

    cout << "Enter notebook price: ";
    cin >> notebookPrice;
    cout << "Enter notebook quantity: ";
    cin >> notebookQuantity;

    cout << "Enter pen price: ";
    cin >> penPrice;
    cout << "Enter pen quantity: ";
    cin >> penQuantity;

    totalBill = (notebookPrice * notebookQuantity) +
                (penPrice * penQuantity);

    cout << "Total shopping bill = Rs. " << totalBill << endl;

    return 0;
}
