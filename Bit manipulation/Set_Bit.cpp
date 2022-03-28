#include<iostream>
using namespace std;

int setBit(int n, int pos){
    return n | (1<<pos);
}

int update_Bit(int n, int pos, int val){
    n = n & ~(1<<pos);
    return n | (val<<pos);
}

int main()
{
    cout<<setBit(5, 1)<<endl;
    cout<<update_Bit(5, 3, 1);
    return 0;
}