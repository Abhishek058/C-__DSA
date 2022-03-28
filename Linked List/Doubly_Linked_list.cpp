#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *prev;
    Node *next;

    // Constructor
    Node(int d)
    {
        this->data = d;
        this->prev = NULL;
        this->next = NULL;
    }

    ~Node()
    {
        int value = this->data;
        if (this->next != NULL)
        {
            delete next;
            next = NULL;
        }
        cout << value << " has been deleted from Linked list"<<endl;
    }
};

void insertAtHead(Node *&head, int d)
{
    Node *temp = new Node(d);
    temp->next = head;
    head->prev = temp;
    head = temp;
}

void insertAtEnd(Node *&tail, int d)
{
    Node *temp = new Node(d);
    tail->next = temp;
    temp->prev = tail;
    tail = temp;
}

void insertBetween(Node *&head, int d, int pos)
{
    if (pos == 1)
    {
        insertAtHead(head, d);
    }

    Node *temp = head;
    int cnt = 1;
    while (cnt < pos)
    {
        temp = temp->next;
        cnt++;
    }

    Node *nodeToInsert = new Node(d);
    nodeToInsert->next = temp->next;
    temp->next->prev = nodeToInsert;
    temp->next = nodeToInsert;
    nodeToInsert->prev = temp;
}

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

int getLength(Node *&head)
{
    int len = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        len++;
        temp = temp->next;
    }

    return len;
}

// Deleting node form Linked List
void deleteNode(Node *&head, int pos)
{
    if (pos == 1)
    {
        Node *temp = head;
        temp->next->prev = NULL;
        head = temp->next;
        temp->next = NULL;
        delete temp;
    }
    else
    {
        Node *curr = head;
        Node *prev = NULL;

        int cnt = 1;
        while (cnt < pos)
        {
            prev = curr;
            curr = curr->next;
            cnt++;
        }

        curr->prev = NULL;
        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
}

int main()
{
    Node *node1 = new Node(11);
    Node *head = node1;
    Node *tail = node1;

    print(head);
    cout << getLength(head) << endl;

    insertAtHead(head, 10);
    insertAtHead(head, 9);
    insertAtHead(head, 8);
    insertAtHead(head, 7);
    print(head);
    cout << getLength(head) << endl;

    insertAtEnd(tail, 12);
    insertAtEnd(tail, 13);
    insertAtEnd(tail, 14);
    insertAtEnd(tail, 15);
    print(head);
    cout << getLength(head) << endl;

    insertBetween(head, 9, 3);
    insertBetween(head, 99, 5);
    print(head);
    cout << getLength(head) << endl;

    deleteNode(head, 2);
    deleteNode(head, 6);
    print(head);
    cout << getLength(head) << endl;
    return 0;
}