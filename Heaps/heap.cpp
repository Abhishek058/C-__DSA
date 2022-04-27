#include <iostream>
using namespace std;

class Heap
{
public:
    int arr[100];
    int size = 0;

    Heap()
    {
        arr[0] = -1;
        size = 0;
    }

    void Insert(int val)
    {
        size++;
        int index = size;
        arr[index] = val;

        while (index > 1)
        {
            int parent = index / 2;
            if (arr[parent] < arr[index])
            {
                swap(arr[parent], arr[index]);
                index = parent;
            }
            else
            {
                return;
            }
        }
    }

    void Delete()
    {
        if (size == 0)
        {
            cout << "Nothing to delete" << endl;
            return;
        }

        arr[1] = arr[size];
        size--;

        int i = 1;
        while (i < size)
        {
            int leftIndex = 2 * i;
            int rightIndex = 2 * i + 1;

            if (leftIndex < size && arr[i] < arr[leftIndex])
            {
                swap(arr[i], arr[leftIndex]);
                i = leftIndex;
            }
            else if (rightIndex < size && arr[i] < arr[rightIndex])
            {
                swap(arr[i], arr[rightIndex]);
                i = rightIndex;
            }
            else
            {
                return;
            }
        }
    }

    void print()
    {
        for (int i = 1; i <= size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

void Heapify(int arr[], int n, int i)
{
    int largest = 1;
    int left = 2 * i;
    int right = 2 * i + 1;

    if (left < n && arr[largest] < arr[left])
    {
        largest = left;
    }
    if (right < n && arr[largest] < arr[right])
    {
        largest = right;
    }
    if (largest != 1)
    {
        swap(arr[largest], arr[i]);
        Heapify(arr, n, largest);
    }
}

void HeapSort(int arr[], int n){
    int size = n;
    while(size>1){
        swap(arr[size], arr[1]);
        size--;
    }
    Heapify(arr, size, 1);
}

int main()
{
    Heap h;
    h.Insert(50);
    h.Insert(55);
    h.Insert(53);
    h.Insert(52);
    h.Insert(54);
    h.print();

    h.Delete();
    h.print();

    int n=5;
    int arr[6] = {-1, 54, 53, 55, 52, 50};
    for (int i = n / 2; i > 0; i--)
    {
        Heapify(arr, n, i);
    }
    cout<<"Printing the array now"<<endl;
    h.print();

    HeapSort(arr, n);
    cout<<"Printing the Sorted array now"<<endl;
    h.print();

    return 0;
}