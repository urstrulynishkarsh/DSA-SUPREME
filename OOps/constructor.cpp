#include <iostream>
using namespace std;

class A
{
    int width;

public:
    A(int width)
    {
        this->width = width;
    }
    int getWidth() const
    {
        return width;
    }
    void setWidth(int width)
    {
        this->width = width;
    }
};
int main()
{
    A a(5);
    cout << a.getWidth();
}