#include <iostream>
using namespace std;

class Node
{

public:
    int data;
    Node *next;

    // Constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }

    // Destructor
    ~Node() {
        int value = this->data;
        if(this->next != NULL){
            delete next;
            next = NULL;
        }
        cout<<value<<" is deleted from Linked List"<<endl;
    }
};

// Inserting elment at starting of Linked List
void insertAtHead(Node *&head, int d)
{
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
}

// Inserting elment at ending of Linked List
void insertAtEnd(Node *&tail, int e)
{
    Node *temp = new Node(e);
    tail->next = temp;
    tail = temp;
}

// Inserting elment in between of Linked List
void insertAtPosition(Node *&head, int m, int pos)
{
    Node *temp = head;
    int cnt = 1;

    if (pos == 1)
    {
        insertAtHead(head, m);
        return;
    }
    while (cnt < pos - 1)
    {
        temp = temp->next;
        cnt++;
    }

    Node *nodeToInsert = new Node(m);
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
}

// Deleting node from Linked List
void deleteNode(Node *&head, int pos)
{
    if(pos == 1){
        Node* temp = head;
        head = head->next;
        delete temp;
        temp->next = NULL;
    }
    else{
        Node* curr = head;
        Node* prev = NULL;

        int cnt = 1;
        while(cnt < pos){
            prev = curr;
            curr = curr->next;
            cnt++;
        }
            prev->next = curr->next;
            curr->next = NULL;
            delete curr;
    }
}

// Printing the created Linked List
void print(Node *&head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    Node *node1 = new Node(11);
    Node *head = node1;
    Node *tail = node1;
    // cout<<node1->data<<endl;
    // cout<<node1->next<<endl;

    // insertAtHead(head, 6);
    // insertAtHead(head, 7);
    // insertAtHead(head, 8);
    // insertAtHead(head, 9);
    // print(head);

    insertAtEnd(tail, 12);
    insertAtEnd(tail, 13);
    insertAtEnd(tail, 14);
    insertAtEnd(tail, 15);
    print(head);

    insertAtPosition(head, 9, 1);
    insertAtPosition(head, 99, 3);
    insertAtPosition(head, 999, 7);
    print(head);

    deleteNode(head, 3);
    print(head);
    return 0;
}