#include <iostream>
using namespace std;

void reverse_String(string &str, int i, int j)
{
    if (i > j)
    {
        return;
    }
    swap(str[i], str[j]);
    i++;
    j--;
    reverse_String(str, i, j);
}

int main()
{
    string str = "racecar";
    reverse_String(str, 0, str.length() - 1);
    cout << str;
    return 0;
}