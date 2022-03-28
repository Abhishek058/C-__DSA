#include<iostream>
using namespace std;

int array_sum(int arr[], int n){
    if(n == 0){
        return 0;
    }
    if(n == 1){
        return arr[0];
    }
    return arr[0] + array_sum(arr+1, n-1);
}

int main()
{
    int arr[5] = {3,2,5,1,6};
    cout<<array_sum(arr, 5);

    return 0;
}