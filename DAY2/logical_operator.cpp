#include <iostream>
using namespace std;
int main()
{
    int age = 18;
    string citizen = "india";
    cout << (age >= 18 && citizen == "india") << "you can vote" << endl;
    cout << (age >= 18 || citizen == "new") << "you can vote" << endl;
    cout << !(age < 18);
}