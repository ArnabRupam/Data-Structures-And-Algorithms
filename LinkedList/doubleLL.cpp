#include<iostream>
using namespace std;

class Node{
    public:
int data;
Node* next;
Node* prev;
Node(int val)
    {
        data=val;
        next=prev=NULL;
    }
};
void insertAtHead(Node* &head,int val)
{
    Node* n=new Node(val);

    n->next=head;
    if(head!=NULL)
    {
            n->prev=n;
    }

    head=n;
}

void insertAtTail(Node* &head,int val)
{
    Node* n=new Node(val);
    if(head==NULL)
    {
        insertAtHead(head,val);
    }
    Node* temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=n;
    n->prev=temp;
}
void display(Node* head)
{
    Node* curr=head;
    while(curr!=NULL)
    {
        cout<<curr->data<<"-->";
        curr=curr->next;
    }
    cout<<"NULL"<<endl;
}
int main()
{
    Node* head=NULL;

    insertAtHead(head,10);
    insertAtTail(head,20);
    insertAtTail(head,30);
    insertAtHead(head,40);
    display(head);
}
