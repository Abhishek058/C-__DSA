#include <iostream>
using namespace std;

void Selection_Sort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                swap(arr[i], arr[j]);
            }
        }
    }
}

int main()
{
    int arr[2] = {7, 2};
    Selection_Sort(arr, 2);
    for (int i = 0; i < 2; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}