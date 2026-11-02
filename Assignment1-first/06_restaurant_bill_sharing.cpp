#include <iostream>
using namespace std;

int main()
{
    float totalBill, amountPerFriend;
    int numberOfFriends;

    cout << "Enter total restaurant bill: ";
    cin >> totalBill;
    cout << "Enter number of friends: ";
    cin >> numberOfFriends;

    amountPerFriend = totalBill / numberOfFriends;

    cout << "Amount per friend = Rs. " << amountPerFriend << endl;

    return 0;
}
