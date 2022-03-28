#include <iostream>
using namespace std;

int setBit(int n, int pos)
{
    return ((n & (1 << pos)) != 0);
}

bool ispow2(int n)
{
    return (n && !(n & n - 1));
}

int nof1(int n)
{
    int count = 0;
    while (n)
    {
        n = n & n - 1;
        count++;
    }
    return count;
}

void sub(int arr[], int n)
{
    for (int i = 0; i < (1 << n); i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i & (1 << j))
            {
                cout << arr[j];
            }
        }
        cout << endl;
    }
}

int unique(int arr[], int n)
{
    int xorsum = 0;
    for (int i = 0; i < n; i++)
    {
        xorsum = xorsum ^ arr[i];
    }
    return xorsum;
}

int uniqu(int arr[], int n)
{
    int xorsum = 0;
    for (int i = 0; i < n; i++)
    {
        xorsum = xorsum ^ arr[i];
    }
    int txor = xorsum;
    int setbit = 0;
    int pos = 0;
    while (setbit != 1)
    {
        setbit = xorsum & 1;
        pos++;
        xorsum = xorsum >> 1;
    }

    int newxor = 0;
    for (int i = 0; i < n; i++)
    {
        if (setBit(arr[i], pos - 1))
        {
            newxor = newxor ^ arr[i];
        }
    }
    cout << newxor << endl;
    cout << (txor ^ newxor) << endl;
}
int main()
{
    //**********************number is power of 2*******************

    // cout<<ispow2(30)<<endl;

    //********************number of one in binary*****************

    // cout<<nof1(19)<<endl;

    //********************subset of set*************
    // int arr[4]={1,2,3,4};
    // sub(arr,4);

    //***********************one unique*********

    // int arr[]={1,2,3,5,2,3,1};
    // cout<<unique(arr,7)<<endl;

    //*******************two unique***************
    // int arr[]={1,2,3,1,2,3,5,7};
    // uniqu(arr,8);

    return 0;
}