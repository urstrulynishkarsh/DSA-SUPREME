#include <iostream>
using namespace std;
void printIncreasingDecreasing(int n, int i)
{
    if (i > n)
    {
        return;
    }
    cout << i << " ";
    printIncreasingDecreasing(n, i + 1);
    // actually mere end se voice nhi ja rhi aap bataiye
    cout << i << " ";
}
int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;
    printIncreasingDecreasing(n, 1);
}