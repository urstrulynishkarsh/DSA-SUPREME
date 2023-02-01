#include <iostream>
using namespace std;
int main()
{
    int studentScore;
    cout << "Enter student score: ";
    cin >> studentScore;
    if (studentScore >= 90)
    {
        cout << "Grade A";
    }
    else if (studentScore >= 80)
    {
        cout << "Grade B";
    }
    else if (studentScore >= 70)
    {
        cout << "Grade C";
    }
    else if (studentScore >= 60)
    {
        cout << "Grade D";
    }
    else
    {
        cout << "Grade E";
    }
}