#include <iostream>
#include <vector>
using namespace std;
long long merge(vector<int> &v, int mid, int s, int e)
{
    long long inversion = 0;
    int len1 = mid - s + 1;
    int len2 = e - mid;

    vector<int> v1(len1);
    vector<int> v2(len2);
    //  copy the value in the vector v1 and v2
    int k = s;

    for (int i = 0; i < v1.size(); i++)
    {
        v1[i] = v[k];
        k++;
    }
    // k = mid + 1;
    for (int i = 0; i < v2.size(); i++)
    {
        v2[i] = v[k];
        k++;
    }
    int firstvectorindex = 0;
    int secondvectorindex = 0;
    int mainvectorindex = s;
    while (firstvectorindex < len1 && secondvectorindex < len2)
    {
        if (v1[firstvectorindex] < v2[secondvectorindex])
        {
            // v.push_back(v1[firstvectorindex]);
            v[mainvectorindex] = v1[firstvectorindex];
            firstvectorindex++;
            mainvectorindex++;
        }
        else
        {
            v[mainvectorindex] = v2[secondvectorindex];
            // because first array element is greater than second element
            inversion += len1 - firstvectorindex;
            secondvectorindex++;
            mainvectorindex++;
        }
    }
    while (firstvectorindex < len1)
    {
        v[mainvectorindex] = v1[firstvectorindex];
        firstvectorindex++;
        mainvectorindex++;
    }
    while (secondvectorindex < len2)
    {
        v[mainvectorindex] = v2[secondvectorindex];
        secondvectorindex++;
        mainvectorindex++;
    }
    return inversion;
}
long long mergeSort(vector<int> &v, int s, int e)
{
    long long inversion = 0;
    if (s < e)
    {
        int mid = s + (e - s) / 2;
        inversion += mergeSort(v, s, mid);
        inversion += mergeSort(v, mid + 1, e);
        inversion += merge(v, mid, s, e);
    }
    return inversion;
}
int main()
{
    int n;
    cout << "Enter the size of vector: ";
    cin >> n;
    vector<int> v(n);
    cout << "Enter the element in the vector: ";
    for (int i = 0; i < v.size(); i++)
    {
        cin >> v[i];
    }
    int s = 0;
    int e = n - 1;
    cout << mergeSort(v, s, e);
}