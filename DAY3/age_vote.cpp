#include <iostream>
using namespace std;
int main()
{
    int age;
    cout << "Enter the age: ";
    cin >> age;
    if (age >= 18)
    {
        cout << "I can Vote";
    }
    else
    {
        cout << "I can't Vote";
    }
}