#include <iostream>
using namespace std;

int main()
{
    float length, width, height;
    float volume, capacity;

    cout << "Enter tank length in meters: ";
    cin >> length;
    cout << "Enter tank width in meters: ";
    cin >> width;
    cout << "Enter tank height in meters: ";
    cin >> height;

    volume = length * width * height;
    capacity = volume * 1000;

    cout << "Tank volume = " << volume << " cubic meters" << endl;
    cout << "Tank capacity = " << capacity << " litres" << endl;

    return 0;
}
