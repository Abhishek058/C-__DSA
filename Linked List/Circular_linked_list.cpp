#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int d)
    {
        this->data = d;
        this->next = NULL;
    }

    ~Node()
    {
        int value = this->data;
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
        cout << value << " is deleted from Linked List" << endl;
    }
};

void insertNode(Node *&tail, int ele, int d)
{

    if (tail == NULL)
    {
        Node *newNode = new Node(d);
        tail = newNode;
        newNode->next = newNode;
    }
    else
    {
        Node *curr = tail;
        while (curr->data != ele)
        {
            curr = curr->next;
        }

        Node *temp = new Node(d);
        temp->next = curr->next;
        curr->next = temp;
    }
}

void deleteNode(Node *tail, int val)
{

    if (tail == NULL)
    {
        cout << " List is Empty" << endl;
        return ;
    }
    else
    {
        Node *prev = tail;
        Node *curr = prev->next;

        while (curr->data != val)
        {
            prev = curr;
            curr = curr->next;
        }

        prev->next = curr->next;
        if(curr == prev){
            tail = NULL;
        }
        else if(tail == curr){
            tail = prev;
        }
        curr->next = NULL;
        delete curr;
    }
}

void print(Node *tail)
{
    Node *temp = tail;
    do
    {
        cout << tail->data << " ";
        tail = tail->next;
    } while (tail != temp);

    cout<<endl;
}

bool detectCircular(Node* head){
    if(head == NULL){
        return false;
    }
    Node* temp = head->next;
    while(temp != NULL && temp != head){
        temp = temp->next;
    }
    if(temp == head){
        return true;
    }

    return false;
}

int main()
{
    Node* head = NULL;
    Node *tail = NULL;
    insertNode(tail, 5, 3);
    insertNode(tail, 3, 7);
    insertNode(tail, 7, 6);
    insertNode(tail, 6, 5);
    print(tail);

    deleteNode(tail, 6);
    print(tail);

    if(detectCircular(tail)){
        cout<<"Circular List"<<endl;
    }
    else{
        cout<<"Not circular List"<<endl;
    }
    return 0;
}