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

    void insertUntil(trieNode *root, string word)
    {
        if (word.length() == 0)
        {
            root->isTerminal = true;
            return ;
        }

        int index = word[0] - 'A';
        trieNode *child;

        if (root->children[index] != NULL)
        {
            child = root->children[index];
        }
        else
        {
            child = new trieNode(word[0]);
            root->children[index] = child;
        }
        insertUntil(child, word.substr(1));
    }

    void insertWord(string word)
    {
        insertUntil(root, word);
    }
};
int main()
{
    trie *t = new trie();
    t->insertWord("abcd");
    return 0;
}