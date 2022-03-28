#include <iostream>
using namespace std;

bool palindrom(string &str, int i)
{
    int j = str.length()-1-i;
    if (i > j)
    {
        return true;
    }
    if (str[i] != str[j])
    {
        return false;
    }
    else
    {
        j--;
        return palindrom(str, i + 1);
    }
}

int main()
{
    string str = "racefcar";
    cout << palindrom(str, 0);
    return 0;
}