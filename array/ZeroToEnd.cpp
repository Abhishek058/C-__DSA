#include <iostream>
using namespace std;

void ZeroToEnd(int arr[], int n)
{
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            swap(arr[i], arr[j++]);
        }
    }
}

int main()
{
    int arr[5] = {0,1,0,3,12};
    ZeroToEnd(arr, 5);
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}