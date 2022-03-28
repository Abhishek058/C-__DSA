#include <iostream>
using namespace std;

void update2(int &n)
{
    n++;
}
void update(int n)
{
    n++;
}

int& func(int a)
{
    int num = a;
    int &ans = num;
    return ans;
}

int* fun(int n){
    int* ptr = &n;
    return ptr;
}
int main()
{
    // int i = 5;
    // int& j = i;

    // cout<<i<<endl;
    // i++;
    // cout<<i<<endl;
    // j++;
    // cout<<i<<endl;

    int n = 5;
    cout<<"1st n = "<<n<<endl;
    update(n);
    cout<<"2st n = "<<n<<endl;
    update2(n);
    cout<<"3st n = "<<n<<endl;

    func(n);
    fun(n);
    return 0;
}