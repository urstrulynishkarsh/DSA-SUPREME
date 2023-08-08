#include <iostream>
#include <vector>
using namespace std;
void merge(vector<int> &v, int s, int e)
{
    int mid = s + (e - s) / 2;

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

    // merge two sorted array
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
}
void mergeSort(vector<int> &v, int s, int e)
{

    if (s >= e)
    {
        return;
    }

    // mid element
    int mid = s + (e - s) / 2;
    // sorted by recursion on mid
    mergeSort(v, mid + 1, e);
    mergeSort(v, s, mid);
    merge(v, s, e);
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
    mergeSort(v, s, e);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
}