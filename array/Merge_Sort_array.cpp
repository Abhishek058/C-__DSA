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

void MergeSorted_Array(int arr1[], int n1, int arr2[], int n2)
{
    for (int i = n1, j = 0; j < n2; i++, j++)
    {
        arr1[i] = arr2[j];
    }
}

int main()
{
    int arr1[9] = {1, 3, 5, 7, 9};
    int arr2[4] = {2, 4, 6, 8};
    MergeSorted_Array(arr1, 5, arr2, 4);
    Selection_Sort(arr1, 9);
    for (int i = 0; i < 9; i++)
    {
        cout << arr1[i] << " ";
    }
    return 0;
}