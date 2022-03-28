#include <iostream>
using namespace std;

void Bubble_Sort(int arr[], int n)
{
    for (int i = 1; i < n ; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main()
{
    int arr[5] = {6, 2, 8, 4, 10};
    Bubble_Sort(arr, 5);
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}