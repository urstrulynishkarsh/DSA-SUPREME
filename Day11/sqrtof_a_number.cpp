#include <iostream>
using namespace std;
int sqrt(int n)
{
    int s = 0;
    int e = n;
    int mid = s + (e - s) / 2;
    int ans = -1;
    while (s <= e)
    {
        if (mid * mid == n)
        {
            return mid;
        }
        if (mid * mid > n)
        {
            e = mid - 1;
        }
        if (mid * mid < n)
        {
            ans = mid;
            s = mid + 1;
        }

        mid = s + (e - s) / 2;
    }
    return ans;
}
int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;
    int ans = sqrt(n);
    cout << "square of a " << n << " is:" << ans << endl;
    int precision;
    cout << "enter the digit of floating of precision: ";
    cin >> precision;
    double step = 0.1;
    double answer = ans;
    for (int i = 0; i < precision; i++)
    {
        for (double j = answer; j * j <= n; j = j + step)
        {
            answer = j;
        }
        step = step / 10;
    }
    cout << "final answer: " << answer;
}