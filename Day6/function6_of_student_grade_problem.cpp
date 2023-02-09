#include <iostream>
using namespace std;
char gradeOfStudent(int score)
{
    if (score >= 90)
    {
        return 'A';
    }
    else if (score >= 80)
    {
        return 'B';
    }
    else if (score >= 70)
    {
        return 'C';
    }
    else if (score >= 60)
    {
        return 'D';
    }
    else
    {
        return 'E';
    }
}

int main()
{
    int score;
    cout << "enter the score: ";
    cin >> score;
    // cout << gradeOfStudent(score);
    for (int i = 0; i <= score; i++)
    {
        char ans = gradeOfStudent(i);
        cout << "grade for score " << i << " is " << ans << endl;
    }
}