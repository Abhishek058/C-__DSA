#include <iostream>
using namespace std;

class Heap
{
public:
    int arr[100];
    int size = 0;

    void insert(int val)
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
    void print()
    {
        for (int i = 1; i < size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    Heap h;
    h.insert(5);
    h.insert(7);
    h.insert(1);
    h.insert(3);
    h.insert(8);

    h.print();
    return 0;
}