#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char str[] = "beautiful how are you.";
    memset(str, '-', 10);
    puts(str);
}