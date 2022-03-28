#include <iostream>
using namespace std;

bool check_Palindrom(string s)
{
    int n = s.length();
    for (int i = 0; i < n; i++)
    {
        if (s[i] == s[n - i - 1])
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}

int main()
{
    to
            cout
        << check_Palindrom("racecar");
    return 0;
}