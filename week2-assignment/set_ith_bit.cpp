#include <iostream>
using namespace std;
int setithbit(int n, int key)
{
    int mask = 1 << key;
    int ans = n | mask;
    return ans;
}
int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;
    int key;
    cout << "Enter the bit: ";
    cin >> key;
    cout << setithbit(n, key);
}