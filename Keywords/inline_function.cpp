#include<iostream>
using namespace std;

inline getMax(int& a, int& b){
    return (a>b) ? a : b;
}

int main()
{
    // if(a>b){
    //     ans = a;
    // }                the whole statement can be written as (a>b) ? a : b
    // else{
    //     ans = b;
    // }
    int a = 1, b = 2;
    int ans = 0;

    ans = getMax(a, b);
    cout<<ans<<endl;

    a = a + 3;
    b = b + 1;

    ans = getMax(a, b);
    cout<<ans<<endl;

    return 0;
}