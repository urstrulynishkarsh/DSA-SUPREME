#include<iostream>
using namespace std;



class TrieNode{


    public:
    char data;
    TrieNode* Children[26];
    bool isTerminal;

    TrieNode(char d)
    {
        this->data=d;
        for(int i=0;i<26;i++)
        {
            Children[i]=NULL;
        }
        this->isTerminal=false;
    }


};
void insert(TrieNode *root,string word)
{
    if(word.length()==0)
    {
        root->isTerminal=true;
        return;
    }
    char ch=word[0];
    int index=ch-'A';
    TrieNode* child;
    
}

int main()
{
    TrieNode *root=new TrieNode('-');
    insert(root,"code");

}