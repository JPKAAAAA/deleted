#include<bits/stdc++.h>
using namespace std;

class Node
{   public:
    char data;
    Node *child[26];
    bool terminate;
    Node()
    {
        for(int i=0;i<26;i++)
        child[i]=nullptr;
    }
};

class Trie
{   char data[100];
    public:
    Node *root;
    Trie()
    {
        root=new Node();
        root->terminate=false;
    }
    void insert();
    void search(char[]);
};

void Trie::insert()
{
    cout<<"Enter element(all in lowercase): ";
    cin>>data;
{   Node *ptr=root;
    for(int i=0;data[i]!='\0';i++)
    {
        int index=data[i]-'a';
        if(ptr->child[index]==nullptr)
        {
            Node *newnode=new Node;
            ptr->child[index]=newnode;
            ptr->data=data[i];
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
        cout<<ptr->data;
        ptr=ptr->child[index];
    }
    cout<<endl<<"Element present";
}

int main()
{   int n;
    Trie t;
    char str[100];
    cout<<"Enter no of elements: ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        t.insert();
    }
    cout<<"Enter element to be searched(all in lowercase): ";
    cin>>str;
    t.search(str);

    return 0;

}