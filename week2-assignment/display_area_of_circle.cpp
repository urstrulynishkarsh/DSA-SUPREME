#include <iostream>
using namespace std;
float area(float radius)
{
    float area_of_circle = 3.14 * radius * radius;
    return area_of_circle;
}
int main()
{
    float radius;
    cout << "Enter the radius of the circle: ";
    cin >> radius;
    cout << area(radius);
}