#include<iostream>
using namespace std;

int printArr(int arr[], int n, int start = 0){

    // int start = 0 is a default argument and it always starts with right most element
    for(int i = start; i < n; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}

int main()
{
    int arr[5] = {1,7,3,8,2};
    printArr(arr, 5);  // it wil take start as default value which is 0
    printArr(arr, 5, 2);
    return 0;
}