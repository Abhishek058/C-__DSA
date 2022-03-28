#include<iostream>
using namespace std;

bool linear_Search(int arr[], int n, int k){
    if(n == 0){
        return false;
    }
    if(arr[0] == k){
        return true;
    }
    return linear_Search(arr+1, n-1, k);
}

int main()
{
    int arr[6] = {3,4,6,5,7,8};
    cout<<linear_Search(arr, 6, 7);
    return 0;
}