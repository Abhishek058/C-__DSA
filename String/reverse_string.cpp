#include <iostream>
using namespace std;

void reverseString(string s)
{
    int n = s.size();
    for (int i = 0; i < n / 2; i++)
    {
        swap(s[i], s[n-i-1]);
    }
    cout<<s;
}

int main()
{
    reverseString("abcdef");
    return 0;
}