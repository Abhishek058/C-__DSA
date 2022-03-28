#include<iostream>
using namespace std;

int gcd(int a, int b){
    if(a==0){
        return b;
    }

    if(b==0){
        return a;
    }

    while(a != b){
 
        if(a>b){
            a = a - b;
        }
        else{
            b = b - a;
        }
    }
    return a;
}

int lcm(int a, int b){
    int n = (a*b)/gcd(a,b);
    return n;
}

int main()
{
    int a,b;
    cin>>a>>b;
    cout<<"HCF of "<<a<<" "<<b<<" : "<<gcd(a,b)<<endl;
    cout<<"lCM of "<<a<<" "<<b<<" : "<<lcm(a,b);
    
    return 0;
}