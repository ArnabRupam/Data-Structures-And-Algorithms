#include<iostream>
using namespace std;

class Node{
    public:
int data;
Node* next;
Node(int val)
{
    data=val;
    next=NULL;
}
};
void insertAtFirst(Node* &head,int val)
{
    Node* n=new Node(val);
    if(head==NULL)
    {
        n->next=n;
        head=n;
        return;
    }

    Node* curr=head;
    while(curr->next!=head)
    {
        curr=curr->next;
    }
    curr->next=n;
    n->next=head;
    head=n;
}
void insertAtTail(Node* &head,int val)
{
     if(head==NULL)
    {
        insertAtFirst(head,val);
        return;
    }

    Node *n=new Node(val);

    Node*curr=head;
    while(curr->next!=head)
    {
        curr=curr->next;
    }
    curr->next=n;
    n->next=head;
}
void display(Node* head)
{
    Node* curr=head;
    do{
        cout<<curr->data<<"-->";
        curr=curr->next;
    }while(curr!=head);
    cout<<"NULL"<<endl;

}
int deleteAthead(Node* &head)
{
    Node* curr=head;
    while(curr->next!=head)
    {
        curr=curr->next;
    }
    Node* todelete=head;
    curr->next=head->next;
    head=head->next;
    return todelete->data;
}
int deletion(Node* &head,int pos)
{
    if(pos==1)
    {
        deleteAthead(head);
        return -1;
    }
    Node* curr=head;
    int count=1;
    while(count!=pos-1)
    {
        curr=curr->next;
        count++;
    }
    Node* todelete=curr->next;
    curr->next=curr->next->next;
    return todelete->data;
}

int main()
{
    Node* head=NULL;
    insertAtFirst(head,5);
    insertAtFirst(head,6);
    display(head);
    cout<<deletion(head,2);
}
