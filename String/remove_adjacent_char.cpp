#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string removeDuplicates(string s)
{
    for (int i = 0; i < s.length();)
    {
        if (s[i] == s[i + 1])
        {
            s.erase(s.begin() + i);
            s.erase(s.begin() + i);
            i = 0;
        }
        else
            i++;
    }
    return s;
}

int main()
{
    string s = "azxxzyy";
    cout << removeDuplicates(s);

    return 0;
}