#include <iostream>
using namespace std;
int main()
{
    int P, R, T;
    cout << "Enter Principal Amount: ";
    cin >> P;
    cout << "Enter Rate: ";
    cin >> R;
    cout << "Enter Time: ";
    cin >> T;
    int SI = (P * R * T) / 100;
    cout << "Simple Interest is: " << SI;
}