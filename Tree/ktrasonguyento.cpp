#include <iostream>
#include <math.h>
using namespace std;

int dem = 0;

struct Node
{
    int data;
    Node *left;
    Node *right;
};

typedef Node *Tree;

Node *CreateNode(int init)
{
    Node *p = new Node;
    p->data = init;
    p->left = NULL;
    p->right = NULL;
    return p;
}

void CreateTree(Tree &root)
{
    root = NULL;
}

void AddNode(Tree &root, int data)
{
    Node *node = CreateNode(data);
    if (root)
    {
        if (root->data == node->data) 
        {
            delete node;
            return;
        }
        else if (node->data > root->data)
        {
            AddNode(root->right, data);
        }
        else if (node->data < root->data)
        {
            AddNode(root->left, data);
        }
    }
    else
    {
        root = node; // Cây rỗng
    }
}

bool ktra(int n)
{
    if (n < 2)
    {
        return false;
    }

    for (int i = 2; i <= sqrt(n); i++) // Sửa điều kiện lặp
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

void soluong(Tree t)
{
    if (t != NULL)
    {
        if (ktra(t->data))
        {
            dem++;
        }
        soluong(t->left);
        soluong(t->right);
    }
}

int main()
{
    Tree t;
    CreateTree(t);
    int n;
    cout << "Nhap so luong bien can them vao cay: ";
    cin >> n;
    cout << "Nhap " << n << " so: ";
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        AddNode(t, x);
    }
    soluong(t);
    cout << "So luong so nguyen to trong cay: " << dem << endl;
    return 0;
}
