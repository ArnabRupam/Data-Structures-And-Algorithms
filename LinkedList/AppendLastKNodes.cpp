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
void insertAtTail(Node* &head,int val)
{
    Node* n=new Node(val);
    Node* curr=head;
    if(head==NULL)
    {
        head=n;
        return;
    }
    while(curr->next!=NULL)
    {
        curr=curr->next;
    }
    curr->next=n;
}
int length(Node* head)
{
    int l=0;
    Node* curr=head;
    while(curr!=NULL)
    {
        l++;
        curr=curr->next;
    }
    return l;
}
void display(Node* head)
{
    if(head==NULL)
    {
        return;
    }
    Node* curr = head;
    while(curr!=NULL)
    {
        cout<<curr->data<<"-->";
        curr=curr->next;
    }
    cout<<"NULL"<<endl;
}

Node* AppendK(Node* &head,int k)
{
    Node* newhead;
    Node* newtail;
    Node* tail=head;
    int l=length(head);
    k=k%l;
    int count=1;
    while(tail->next!=NULL)
    {
        if(count==l-k)
        {
            newtail=tail;
        }
        if(count=l-k+1)
        {
            newhead=tail;
        }
        tail=tail->next;
        count++;
    }
    newtail->next=NULL;
    tail->next=head;
    return newhead;
}

int main()
{
    Node* head=NULL;
    int a[]={1,2,3,4,5,6};
    for(int i=0;i<6;i++)
    {
        insertAtTail(head,a[i]);
    }
    display(head);

   Node* newh=AppendK(head,3);

   display(newh);
   // return 0;
}
