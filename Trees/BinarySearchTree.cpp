#include<iostream>
using namespace std;

class Node {
    public:
        int data;
        Node* right;
        Node* left;

        Node(int d){
            this->data = d;
            this->left = NULL;
            this->right = NULL;
        }
};

int main()
{
    
    return 0;
}