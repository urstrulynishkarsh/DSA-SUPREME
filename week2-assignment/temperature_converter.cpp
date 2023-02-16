#include <iostream>
#include <vector>
using namespace std;
vector<double> celcius(double n)
{
    double f = (n * 1.80) + 32.00;
    double k = n + 273.15;
    vector<double> v;
    v.push_back(f);
    v.push_back(k);

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << ' ';
    }
}
int main()
{
    int n;
    cout << "Enter the celcius temperature: ";
    cin >> n;
    celcius(n);
}