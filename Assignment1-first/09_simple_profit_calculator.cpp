#include <iostream>
using namespace std;

int main()
{
    float purchasePrice, sellingPrice;
    float totalPurchaseCost, totalSalesRevenue, profitOrLoss;
    int quantity;

    cout << "Enter purchase price per product: ";
    cin >> purchasePrice;
    cout << "Enter selling price per product: ";
    cin >> sellingPrice;
    cout << "Enter quantity sold: ";
    cin >> quantity;

    totalPurchaseCost = purchasePrice * quantity;
    totalSalesRevenue = sellingPrice * quantity;
    profitOrLoss = totalSalesRevenue - totalPurchaseCost;

    cout << "Total purchase cost = Rs. " << totalPurchaseCost << endl;
    cout << "Total sales revenue = Rs. " << totalSalesRevenue << endl;
    cout << "Profit/Loss amount = Rs. " << profitOrLoss << endl;

    return 0;
}
