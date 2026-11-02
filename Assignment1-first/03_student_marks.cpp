#include <iostream>
using namespace std;

int main()
{
    float marks1, marks2, marks3, marks4, marks5;
    float totalMarks, averageMarks, percentage;

    cout << "Enter marks in subject 1: ";
    cin >> marks1;
    cout << "Enter marks in subject 2: ";
    cin >> marks2;
    cout << "Enter marks in subject 3: ";
    cin >> marks3;
    cout << "Enter marks in subject 4: ";
    cin >> marks4;
    cout << "Enter marks in subject 5: ";
    cin >> marks5;

    totalMarks = marks1 + marks2 + marks3 + marks4 + marks5;
    averageMarks = totalMarks / 5;
    percentage = (totalMarks / 500) * 100;

    cout << "Total marks = " << totalMarks << endl;
    cout << "Average marks = " << averageMarks << endl;
    cout << "Percentage = " << percentage << "%" << endl;

    return 0;
}
