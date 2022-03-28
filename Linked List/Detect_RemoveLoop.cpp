#include <iostream>
#include <map>
using namespace std;

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

void print(Node *tail)
{
    Node *temp = tail;
    do
    {
        cout << tail->data << " ";
        tail = tail->next;
    } while (tail != temp);

    cout << endl;
}

bool detectLoop(Node *head)
{
    if (head == NULL)
    {
        return false;
    }

    map<Node *, bool> visited;

    Node *temp = head;
    while (temp != NULL)
    {
        if (visited[temp] == true)
        {
            cout << "present at : " << temp->data << endl;
            return true;
        }

        visited[temp] = true;
        temp = temp->next;
    }

    return false;
}

Node *floydDetectLoop(Node *head)
{

    if (head == NULL)
        return NULL;

    Node *slow = head;
    Node *fast = head;

    while (slow != NULL && fast != NULL)
    {

        fast = fast->next;
        if (fast != NULL)
        {
            fast = fast->next;
        }

        slow = slow->next;

        if (slow == fast)
        {
            return slow;
        }
    }

    return NULL;
}

Node *getStartingNode(Node *head)
{

    if (head == NULL)
    {
        return NULL;
    }

    Node *intersection = floydDetectLoop(head);
    Node *slow = head;

    while (slow != intersection)
    {
        slow = slow->next;
        intersection = intersection->next;
    }
    return slow;
}

void removeLoop(Node* head){
    if(head == NULL){
        return;
    }

    Node* startOfLoop = getStartingNode(head);
    Node* temp = startOfLoop;

    while(temp->next != startOfLoop){
        temp = temp->next;
    }

    temp->next = NULL;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    insertNode(tail, 5, 3);
    insertNode(tail, 3, 7);
    insertNode(tail, 7, 6);
    insertNode(tail, 6, 5);
    print(tail);

    if (detectLoop(tail))
    {
        cout << "loop present" << endl;
    }
    else
    {
        cout << "loop not present" << endl;
    }

    if(floydDetectLoop(head) != NULL){
        cout<<"Cycle is present";
    }
    else{
        cout<<"Cycle is not present";
    }
    cout << getStartingNode(head)->data << endl;
    return 0;
}