#include <iostream>
using namespace std;

int main()
{
    float basicSalary, houseRentAllowance, medicalAllowance;
    float grossSalary;

    cout << "Enter basic monthly salary: ";
    cin >> basicSalary;
    cout << "Enter house rent allowance: ";
    cin >> houseRentAllowance;
    cout << "Enter medical allowance: ";
    cin >> medicalAllowance;

    grossSalary = basicSalary + houseRentAllowance + medicalAllowance;

    cout << "Gross salary = Rs. " << grossSalary << endl;

    return 0;
}
