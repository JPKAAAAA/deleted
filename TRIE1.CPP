#include<bits/stdc++.h>
using namespace std;

class Node
{   public:
    char data[100];
    Node *child[26];
    bool terminate;
    Node()
    {
        for(int i=0;i<26;i++)
        child[i]=nullptr;
    }
};

class Trie
{
    public:
    Node *root;
    Trie()
    {
        root=new Node();
        root->terminate=false;
    }
    void insert(char str[][100],int n);
    void search(char[]);
};

void Trie::insert(char str[][100],int n)
{
    
for(int i=0;i<n;i++)
{   Node *ptr=root;
    for(int j=0;str[i][j]!='\0';j++)
    {
        int index=str[i][j]-'a';
        if(ptr->child[index]==nullptr)
        {
            Node *newnode=new Node;
            ptr->child[index]=newnode;
        }
        ptr=ptr->child[index];

        
    }
    ptr->terminate=true;
}
}

void Trie::search(char str[100])
{
    Node *ptr=root;
    for(int i=0;str[i]!='\0';i++)
    {
        int index=str[i]-'a';
        if(ptr->child[index]==nullptr)
        {
            cout<<"No such element";
            return;
        }
        ptr=ptr->child[index];
    }
    cout<<"Element present";
}

int main()
{   int n;
    Trie t;
    char str[100][100],str1[100];
    cout<<"Enter no of elements: ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"Enter element(all letter in lowercase): ";
        cin>>str[i];
    }
    t.insert(str,n);
    cout<<"Enter element to be searched: ";
    cin>>str1;
    t.search(str1);

    return 0;

}