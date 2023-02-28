#include <iostream>
using namespace std;
int Division(int dividend, int divisor)
{
    int s = 0;
    int e = abs(dividend);
    int mid = s + (e - s) / 2;
    int ans = -1;
    while (s <= e)
    {
        if (abs(mid * divisor) == abs(dividend))
        {
            ans = mid;
            break;
        }
        if (abs(mid * divisor) > abs(dividend))
        {
            e = mid - 1;
        }
        if (abs(mid * divisor) < abs(dividend))
        {
            ans = mid;
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    if ((divisor > 0 && dividend > 0) || (divisor < 0 && dividend < 0))
        return ans;
    else
    {
        return -ans;
    }
}
int main()
{
    int dividend;
    cout << "Enter the dividend value: ";
    cin >> dividend;
    int divisor;
    cout << "Enter the Divisor value: ";
    cin >> divisor;
    int ans = Division(dividend, divisor);
    // int answer=ans;
    cout << ans;

    int precison;
    cout << "Enter the precision value: ";
    cin >> precison;
    double step = 0.1;
    double answer = ans;
    for (int i = 0; i < precison; i++)
    {
        for (double j = answer; j * divisor <= dividend; j = j + step)
        {
            answer = j;
        }
        step = step / 10;
    }
    cout << "final answer: " << answer;
}
