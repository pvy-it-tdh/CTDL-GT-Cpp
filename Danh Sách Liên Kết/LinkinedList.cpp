#include<iostream>
using namespace std;
struct Node{
    int data;
    Node *next;
};
// Hàm duyệt và in ra từng node
void printLinkinedList(Node *head)
{
    Node* current= head;
    while (current!=nullptr)
    {
        cout<< current->data;
        current=current->next;
    }
    
}
int main()
{
    Node *head=new Node();
    Node *second=new Node();
    Node *third=new Node();
    head->data=1;
    head->next=second;
    second->data=2;
    second->next=third;
    third->data=3;
    third->next=nullptr;
    printLinkinedList(head);
    // giải phóng bộ nhó
    delete head;
    delete second;
    delete third;
    return 0;
}