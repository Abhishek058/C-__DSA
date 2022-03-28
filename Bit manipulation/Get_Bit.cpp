#include<iostream>
using namespace std;

int getBit(int n, int pos){
    if((n & (1<<pos)) != 0){
        return 1;
    }
    else{
        return 0;
    }
}

int main()
{
    cout<<getBit(4,1);
    return 0;
}