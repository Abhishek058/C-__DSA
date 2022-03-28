#include<iostream>
using namespace std;

int factorial(int n){
    if(n == 0){
        return 1;           //Base case  Return is mandatory
    }
    return n * factorial(n-1);      //Recursive relation
}

int main()
{
    int n;
    cin>>n;
    cout<<factorial(n);
    return 0;
}