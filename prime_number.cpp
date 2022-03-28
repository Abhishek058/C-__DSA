#include<iostream>
using namespace std;

bool prime_number(int n){

    if(n <= 1){
        return false;
    }
    for(int i = 2; i < n; i++){
        if(n%i == 0){
            return false;
        }
    }
    return true;
}

int main()
{
    cout<<prime_number(19);
    return 0;
}