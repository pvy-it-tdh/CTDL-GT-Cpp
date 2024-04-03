#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;
};

typedef Node* Tree;

Node *CreateNode(int init)
{
    Node *p=new Node;
    p->data=init;
    p->left=NULL;
    p->right=NULL;
    return p;
}
void CreateTree(Tree &root)
{
    root=NULL;
}
void AddNode(Tree &root,Node *node)
{
    if(root)
    {
        if(root->data==node->data)
        {
            return;
        }
        else if(node->data > root->data)
        {
            AddNode(root->right,node);
        }
        else{
            AddNode(root->left,node);
        }
    }
    else
    {
        // Rỗng thì Node thành node gốc
        root=node;
    }
}
int main()
{
    return 0;
}