#include <iostream>
#include <stack>
using namespace std;

class Stack
{
    // properties
    public:
        int *arr;
        int size;
        int top;

    // behaviour
    Stack(int size)
    {
        this->size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int ele)
    {
        if (size - top > 1)
        {
            top++;
            arr[top] = ele;
        }
        else
        {
            cout << "Stack overflow" << endl;
        }
    }

    void pop()
    {
        if (top >= 0)
        {
            top--;
        }
        else
        {
            cout << "Stack Underflow";
        }
    }

    int peek()
    {
        if (top >= 0 && top < size)
        {
            return arr[top];
        }
        else
        {
            cout << "stack is empty" << endl;
            return -1;
        }
    }

    bool empty()
    {
        if (top == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

int main()
{
    // creation of stack
    // stack<int> s;

    // // push operation
    // s.push(2);
    // s.push(3);

    // // pop operation
    // s.pop();

    // // top operation
    // cout << "Printing top element : " << s.top() << endl;

    // // empty operation
    // if (s.empty())
    // {
    //     cout << "Stack is empty" << endl;
    // }
    // else
    // {
    //     cout << "stack is not empty" << endl;
    // }

    // // size operation
    // cout << s.size();

    Stack st(5);

    st.push(22);
    st.push(45);
    st.push(15);

    cout<<st.peek()<<endl;
    st.pop();
    cout<<st.peek()<<endl;
    st.push(56);
    cout<<st.empty()<<endl;
    st.pop();
    st.pop();
    st.pop();
    cout<<st.peek()<<endl;
    return 0;
}