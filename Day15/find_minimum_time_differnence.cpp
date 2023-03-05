#include <iostream>
#include <vector>
#include <string.h>
#include <string>
#include <algorithm>
#include <math.h>
#include <limits.h>
using namespace std;
int main()
{
    string str[7] = {"12:10", "10:15", "13:15", "17:20", "18:00", "19:47", "23:53"};
    vector<int> minutes;
    for (int i = 0; i < 7; i++)
    {
        string element = str[i];
        int hr = stoi(element.substr(0, 2));
        int min = stoi(element.substr(3, 2));
        int total = (hr * 60) + min;
        minutes.push_back(total);
    }
    // all minutes before sorting
    for (int i = 0; i < 7; i++)
    {
        cout << minutes[i] << " " << endl;
    }
    cout << endl;
    // all minutes after sorting
    sort(minutes.begin(), minutes.end());

    for (int i = 0; i < 7; i++)
    {
        cout << minutes[i] << " " << endl;
    }
    cout << endl;

    int mini = INT_MAX;
    for (int i = 0; i < 6; i++)
    {
        int difference = minutes[i + 1] - minutes[i];
        mini = min(mini, difference);
    }
    int lastdifferent = (minutes[0] + 1140) - minutes[6];
    mini = min(mini, lastdifferent);

    cout << "Mini difference " << mini << endl;
}