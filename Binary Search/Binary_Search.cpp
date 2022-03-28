#include<iostream>
using namespace std;

int BinarySearch(int arr[], int n, int key){

    int s = 0;
    int e = n-1;

    int mid = s + (e - s)/2;

    while(s <= e){
        if(arr[mid] == key){
            return mid;
        }
        if(key > arr[mid]){
            s = mid+1;
        }
        else{
            e = mid-1;
        }

        mid = s + (e - s)/2;
    }
    return -1;
}

int main()
{
    int even[6] = {5,8,13,19,22,27};
    int odd[7] = {9,11,16,20,24,36,78};

    cout<<BinarySearch(even, 6, 19)<<endl;
    cout<<BinarySearch(odd, 7, 36)<<endl;
    return 0;
}