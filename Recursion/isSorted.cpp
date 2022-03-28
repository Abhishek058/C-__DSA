#include <iostream>
using namespace std;

bool isSorted(int arr[], int n)
{
    if (n == 0 || n == 1)
    {
        return true;
    }
    if (arr[0] > arr[1])
    {
        return false;
    }
    return isSorted(arr + 1, n - 1);
}

int main()
{
    int arr[6] = {3,6,4,5,14};
    int arr2[5] = {5,7,16,18,32};
    cout<<isSorted(arr, 6)<<endl;
    cout<<isSorted(arr2, 5);
    return 0;
}