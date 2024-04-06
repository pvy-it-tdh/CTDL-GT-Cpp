#include<iostream>
using namespace std;
int Max=INT16_MIN;

struct Node
{
    int data;
    Node *left;
    Node *right;
};
typedef Node *Tree;

Node *CreateNode(int init)
{
    Node *p= new Node;
    p->data=init;
    p->left=NULL;
    p->right=NULL;
    return p;
}
void CreateTree(Tree &root)
{
    root=NULL;
}
void AddNode(Tree &root, int data)
{
    Node *node =CreateNode(data);
    if(root)
    {
        if(root->data==node->data)
        {
            delete node;
            return;
        }
        else if(node->data > root->data)
        {
            AddNode(root->right,data);
        }
        else{
            AddNode(root->left,data);
        }
    }
    else
    {
        root=node;
    } 
}

void timMax(Tree &t)
{
    if(t==NULL)
    {
        return;
    }
    if(Max< t->data)
    {
        Max=t->data;
    }
    timMax(t->left);
    timMax(t->right);
}
int main()
{
    Tree t;
    CreateTree(t);
    int n;
    cout << "Nhap so luong bien can them vao cay";
    cin >> n;
    for (int i=0;i<n;i++)
    {
        int x;
        cin >> x;
        AddNode(t,x);
    }
    timMax(t);
    cout <<"Phan tu lon nhat trong cay la" << Max;
    return 0;
}