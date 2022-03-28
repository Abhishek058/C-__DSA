#include <iostream>
using namespace std;

bool binary_search(int arr[], int s, int e, int k)
{
    if (s > e)
    {
        return false;
    }
    int mid = s + (e - s) / 2;

    if (arr[mid] == k)
    {
        return true;
    }
    if (arr[mid] > k)
    {
        return binary_search(arr, s, mid - 1, k);
    }
    if (arr[mid] < k)
    {
        return binary_search(arr, mid + 1, e, k);
    }
}

int main()
{
    int arr[6] = {3, 4, 6, 5, 7, 8};
    cout << binary_search(arr, 0, 6, 2);
    return 0;
}