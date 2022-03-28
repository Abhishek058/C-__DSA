#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

/***************Code in codestudio Approach - 1************/
Node* ReverseLL1(Node *head)
{
    if(head == NULL || head->next == NULL){
        return head;
    }
    Node* prev = NULL;
    Node* curr = head;
    Node* fwd = NULL;
    while(curr != NULL){
    	fwd = curr->next;
        curr->next = prev;
        prev = curr;
        curr = fwd;
    }
    return prev;
}

/***************Code in codestudio Approach - 2************/
void solve(Node* &head, Node* curr, Node* prev){ 
    if(curr == NULL){
        head = prev;
        return;
    }

    Node* fwd = curr->next;
    solve(head, fwd, curr);
    curr->next = prev;
}

Node* ReverseLL2(Node * &head)
{
    Node* curr = head;
    Node* prev = NULL;

    solve(head, curr, prev);
    return head;
}

void insertAtHead(Node* &head, int d){
    Node* temp = new Node(d);
    temp->next = head;
    head = temp;
}

void print(Node* &head){
    Node* temp = head;

    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }cout<<endl;
}

int main()
{
    Node* head = new Node(11);

    insertAtHead(head, 10);
    insertAtHead(head, 9);
    insertAtHead(head, 8);
    insertAtHead(head, 7);

    print(head);
    
    // cout<<ReverseLL1(head);
    return 0;
}