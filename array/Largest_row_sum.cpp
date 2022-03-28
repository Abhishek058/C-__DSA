#include <iostream>
using namespace std;

int largest_row_sum(int arr[][3])
{
    int max = 0;
    int index;
    for (int i = 0; i < 3; i++)
    {
        int sum = 0;
        for (int j = 0; j < 3; j++)
        {
            sum += arr[i][j];
        }
        if(sum > max){
            max = sum;
            index = i;
        }
    }
    cout<<index<<" "<<max;
}

int main()
{
    int arr[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout<<endl;
    }
    largest_row_sum(arr);
    return 0;
}