#include <iostream>
using namespace std;
void update(int *p, int *q)
{
    *p = 10;
    *q = 20;
}
int main()
{
    int arr[4] = {1, 2, 3, 4};
    int *p = arr + 1;
    int *q = arr + 2;
    update(p, q);
    for (int i = 0; i < 4; i++)
    {
        cout << arr[i] << " ";
    }
}