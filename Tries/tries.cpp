#include <iostream>
using namespace std;

class trieNode
{
public:
    char data;
    trieNode *children[26];
    bool isTerminal;

    trieNode(char ch)
    {
        data = ch;
        for (int i = 0; i < 26; i++)
        {
            children[i] = NULL;
        }
        isTerminal = false;
    }
};

class trie
{
public:
    trieNode *root;
    trie(){
        root = new trieNode('\0');
    }

    
};
int main()
{
    
    return 0;
}