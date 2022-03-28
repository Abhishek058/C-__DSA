#include <iostream>
using namespace std;

int partition(int arr[], int s, int e)
{

    int pivot = arr[s];

    int cnt = 0;
    for (int i = s + 1; i <= e; i++)
    {
        if (arr[i] <= pivot)
        {
            cnt++;
        }
    }

    // place pivot at right position
    int pivotIndex = s + cnt;
    swap(arr[pivotIndex], arr[s]);

    int i = s, j = e;

    while (i < pivotIndex && j > pivotIndex)
    {
        while (arr[i] < pivot)
        {
            i++;
        }
        while (arr[j] > pivot)
        {
            j--;
        }

        if (i < pivotIndex && j > pivotIndex)
        {
            swap(arr[i++], arr[j--]);
        }
    }
    return pivotIndex;
}

void quick_Sort(int arr[], int s, int e)
{

    // base case
    if (s > e)
    {
        return;
    }

    // partition function
    int p = partition(arr, s, e);

    // sort left
    quick_Sort(arr, s, p - 1);

    // sort right
    quick_Sort(arr, p + 1, e);
}

int main()
{
    int arr[7] = {2, 4, 7, 1, 6, 5, 3};
    quick_Sort(arr, 0, 6);
    for (int i = 0; i < 7; i++){
        cout<<arr[i]<<" ";
    }
        return 0;
}