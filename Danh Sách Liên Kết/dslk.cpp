#include<iostream>
using namespace std;
struct node
{
    int data;
    struct node *next;
};

node* makeNode(int x)
{
    node *newnode=new node();
    newnode->data=x;
    newnode->next=NULL;
    return newnode;
}
// Hàm duyệt dslk
void duyet(node *head)
{
    while(head!=NULL)
    {
        cout << head->data<< " ";
        head= head->next;
    }
}
// Hàm đếm dslk có bao nhiêu node
int count(node *head)
{
    int count=0;
    while(head!=NULL)
    {
        ++count;
        head=head->next;
    }
    return count;
}
// Thêm phần tử vào  đầu dslk
void pushFront(node **head, int x)
{
    // Tạo ra một node mới
    node *newnode=makeNode(x);
    newnode->next=*head; //*head là địa chỉ của node head trong dslk
    // Cập nhật node head= new node
    *head=newnode;
}
// Thêm node vào cuối dslk
void pushBack(node ** head,int x)
{
    node *temp=*head;
    node *newnode=makeNode(x);
    if(temp==NULL)
    {
        temp=newnode;
    }
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=newnode;
}

// Insert

void insert(node **head,int k,int x)
{
    int n=count(*head);
    if(k<1||k>n+1)
    {
        return;
    }
    if(k==1)
    {
        pushFront(head,x);
    }
    node *temp=*head;
    for(int i=1;i<=k-2;i++)
    {
        temp=temp->next;
    }
    node *newNode=makeNode(x);
    newNode->next=temp->next;
    temp->next=newNode;
}
int main()
{
    node *head=NULL;
    for(int i=1;i<=5;i++)
    {
        pushFront(&head,i);
    }
    duyet(head);    
    return 0;
}