#include<iostream>
#include<cmath>
using namespace std;

#define PI 3.14       //a piece of code in program which create varible in program without using memory

int area_circle(int r){
    return PI * pow(r, 2);
}

int main()
{
    cout<<area_circle(10);
    return 0;
}