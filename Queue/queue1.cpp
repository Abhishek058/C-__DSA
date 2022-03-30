#include<iostream>
#include<queue>
using namespace std;

int main()
{
    queue<int> q;
    q.push(11);
    q.push(18);
    q.push(41);

    cout<<"size of queue is: "<<q.size()<<endl;

    q.front();
    q.pop();
    q.front();

    cout<<"size of queue is: "<<q.size()<<endl;

    if(q.empty()){
        cout<<"queue is empty"<<endl;
    }
    else{
        cout<<"queue is not empty"<<endl;
    }
    return 0;
}