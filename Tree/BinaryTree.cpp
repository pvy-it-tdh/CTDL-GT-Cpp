#include <iostream>
using namespace std;

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
            delete node; // Xóa node đã tạo nếu giá trị trùng
            return;
        }
        else if (node->data > root->data)
        {
            AddNode(root->right, data);
        }
        else
        {
            AddNode(root->left, data);
        }
    }
    else
    {
        root = node; // Gán root bằng node nếu cây rỗng
    }
}

void Duyet_NLR(Tree t)
{
    if (t != NULL)
    {
        cout << t->data << " "; // Xuất dữ liệu node
        Duyet_NLR(t->left);     // Duyệt qua trái
        Duyet_NLR(t->right);    // Duyệt qua phải
    }
}

void Menu(Tree &t)
{
    while (true)
    {
        cout << "\n\n\t\t ================= MENU ===================";
        cout << "\n1. Nhap du lieu";
        cout << "\n2. Xuat du lieu";
        cout << "\n0. Ket thuc";
        cout << "\n\n\t\t ===========================================";
        int luachon;
        cout << "\nNhap lua chon: ";
        cin >> luachon;
        if (luachon < 0 || luachon > 2)
        {
            cout << "Lua chon khong hop le";
            system("pause");
        }
        else if (luachon == 1)
        {
            int x;
            cout << "Nhap gia tri muon them: ";
            cin >> x;
            AddNode(t, x);
        }
        else if (luachon == 2)
        {
            cout << "\n\t\t Duyet cay theo NLR \n";
            Duyet_NLR(t);
        }
        else
        {
            break;
        }
    }
}

int main()
{
    Tree t;
    CreateTree(t);
    Menu(t);
    system("pause");
    return 0;
}
