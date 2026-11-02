#include <iostream>
using namespace std;

int main()
{
    int age, months, weeks, days;

    cout << "Enter age in years: ";
    cin >> age;

    months = age * 12;
    weeks = age * 52;
    days = age * 365;

    cout << "Age in months = " << months << endl;
    cout << "Age in weeks = " << weeks << endl;
    cout << "Age in days = " << days << endl;

    return 0;
}
