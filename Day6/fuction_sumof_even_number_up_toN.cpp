#include <iostream>
using namespace std;
int sumEven(int num)
{
    int sum = 0;
    for (int i = 2; i <= num; i += 2)
    {
        sum += i;
    }
    return sum;
}
int main()
{
    int num;
    cout << "Enter the Number: ";
    cin >> num;
    int allen = sumEven(num);
    cout << allen;
}