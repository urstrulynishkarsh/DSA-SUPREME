#include <iostream>
using namespace std;
float areaOfCircle(int r)
{
    float pi = 3.14;
    float area = pi * r * r;
    return area;
}
int main()
{
    int r;
    cout << "Enter the radius: ";
    cin >> r;
    cout << "areof circle is: " << areaOfCircle(r);
}