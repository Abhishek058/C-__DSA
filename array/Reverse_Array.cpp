#include <iostream>
using namespace std;

void Reverse_array(int arr[], int n)
{
    for (int j = 0; j < n / 2; j++)
    {
        swap(arr[j], arr[n - j - 1]);
    }
}

int main()
{
    int arr[6] = {4, 12, 3, 7, 11, 5};
    Reverse_array(arr, 6);
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}