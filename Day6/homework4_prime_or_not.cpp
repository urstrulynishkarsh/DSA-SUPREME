#include <iostream>
using namespace std;
void prime(int num)
{
    int i = 2;
    if (i == num)
    {
        cout << "prime" << endl;
    }
    while (i < num)
    {
        if (num % i == 0)
        {
            cout << "Not prime";
            break;
        }
        else
        {
            if (i == (num - 1))
            {
                cout << "prime";
                break;
            }
            i++;
        }
    }
}
int main()
{
    int num;
    cout << "Enter the number: ";
    cin >> num;
    prime(num);
}