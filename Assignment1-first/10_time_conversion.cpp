#include <iostream>
using namespace std;

int main()
{
    int totalSeconds, hours, minutes, remainingSeconds;

    cout << "Enter total number of seconds: ";
    cin >> totalSeconds;

    hours = totalSeconds / 3600;
    minutes = (totalSeconds % 3600) / 60;
    remainingSeconds = totalSeconds % 60;

    cout << "Hours = " << hours << endl;
    cout << "Minutes = " << minutes << endl;
    cout << "Remaining seconds = " << remainingSeconds << endl;

    return 0;
}
