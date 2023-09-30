#include<iostream>
using namespace std;

class TrieNode{
    public:
        char data;
        TrieNode* children[26];
        bool isTerminal;
        int childcount;


        TrieNode(char ch)
        {
            this->data=ch;
            for(int i=0;i<26;i++)
            {
                children[i]=NULL;
            }

            this->isTerminal=false;
            this->childcount=0;
        }
};
void  insertWord(TrieNode *root,string word)
{
    // cout<<"my interation:  "<<word<<endl;
    // base case
    if(word.length()==0)
    {
        root->isTerminal=true;
        return;
    }

    char ch=word[0];
    int index=ch-'a';
    TrieNode *child;

    if(root->children[index]!=NULL)
    {
        child=root->children[index];
    }
    else{
        child=new TrieNode(ch);
        root->childcount++;
        root->children[index]=child;
    }


    // recursion
    insertWord(child,word.substr(1));




}

bool searchWord(TrieNode *root,string word)
{
   
    // base case
    if(word.length()==0)
    {
       return root->isTerminal;
    }

    char ch=word[0];
    int index=ch-'a';
    TrieNode *child;

    if(root->children[index]!=NULL)
    {
        child=root->children[index];
    }
    else{
        return false;
    }


    // recursion
    return  searchWord(child,word.substr(1));


}

void deleteWord(TrieNode *root,string word)
{
    //  cout<<"my interation:  "<<word<<endl;
    // base case
    if(word.length()==0)
    {
       root->isTerminal=false;
       return;
    }

    char ch=word[0];
    int index=ch-'a';
    TrieNode *child;

    if(root->children[index]!=NULL)
    {
        child=root->children[index];
    }
    else{
        cout<<"word is not exist";
        return;
    }


    // recursion
    deleteWord(child,word.substr(1));


}


int main()
{
    TrieNode *root= new TrieNode('-');

    insertWord(root,"codeing");
     insertWord(root,"code");
      insertWord(root,"nishkarsh");
       insertWord(root,"verma");
        insertWord(root,"ritik");
         insertWord(root,"sharma");

        if(searchWord(root,"codeing"))
        {
            cout<<"this data is present in the trie"<<endl;
        }
        else{
            cout<<"this data is not present in the trie"<<endl;
        }

        deleteWord(root,"codeing");
          if(searchWord(root,"codeing"))
        {
            cout<<"this data is present in the trie"<<endl;
        }
        else{
            cout<<"this data is not present in the trie"<<endl;
        }




}