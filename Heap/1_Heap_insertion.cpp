#include <iostream>
using namespace std;

class Heap
{
public:
    // static array
    // int arr[100];

    // dynamic array
    int *arr;
    int size;

    Heap()
    {

        size = 0;
        arr = new int[100];
    }
    ~Heap()
    {

        delete[] arr;
    }

    void insert(int value)
    {
        size = size + 1;
        int index = size;
        arr[index] = value;

        // index is greater than one  used
        while (index > 1)
        {
            int parentIndex = index / 2;
            if (arr[index] > arr[parentIndex])
            {
                swap(arr[index], arr[parentIndex]);
                index = parentIndex;
            }
            else
            {
                break;
            }
        }
    }
};

int main()
{
    Heap h;
    h.insert(50);
    h.insert(30);
    h.insert(70);
    h.insert(40);
    h.insert(80);
    h.insert(100);

    cout << "printing the heap..." << endl;

    for (int i = 0; i <= h.size; i++)
    {
        cout << h.arr[i] << " ";
    }
}