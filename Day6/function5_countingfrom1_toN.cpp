#include <iostream>
using namespace std;
void printNum(int num)
{
    for (int i = 1; i <= num; i++)
    {
        cout << i << endl;
    }
}
int main()
{
    int num;
    cout << "Enter the number: ";
    cin >> num;
    printNum(num);
}