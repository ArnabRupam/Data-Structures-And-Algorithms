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
void addFirst(Node* &head,int val)
{
    Node* n=new Node(val);
    if(head==NULL)
    {
        head=n;
        return;
    }
    n->next=head;
    head=n;

}
void addLast(Node* &head,int val)
{
    Node* n=new Node(val);
    if(head==NULL)
    {
        head=n;
        return;
    }
    Node* currNode=head;
    while(currNode->next!=NULL)
    {
        currNode=currNode->next;
    }
    currNode->next=n;
}
int deleteFirst(Node* &head)
{
    int top=head->data;
    if(head==NULL)
    {

        return -1;
    }

    head=head->next;
    return top;
}
int deleteLast(Node* &head)
{
    if(head==NULL)
    {

        return -1;
    }
    Node* SLast=head;
    Node* Last=head->next;
    while(Last->next!=NULL)
    {
        SLast=SLast->next;
        Last=Last->next;
    }
    int L=Last->data;
    SLast->next=NULL;
    return L;
}
Node* reverse(Node* &head)
{
    Node* prev=NULL;
    Node* curr=head;
    Node* nextptr;
    while(curr!=NULL)
    {
        nextptr=curr->next;
        curr->next=prev;

        prev=curr;
        curr=nextptr;
    }
    return prev;
}
void display(Node* head)
{
    if(head==NULL)
    {
        return;

    }
    Node* curr=head;
    while(curr!=NULL)
    {
        cout<<curr->data<<"-->";
        curr=curr->next;
    }
    cout<<"NULL"<<endl;
}
Node* reverseK(Node* &head,int k)
{
    Node* prev=NULL;
    Node* curr=head;
    Node* nextptr;
    int count=0;
    while(curr!=NULL&&count<k)
    {
        nextptr=curr->next;
        curr->next=prev;
        prev=curr;
        curr=nextptr;
        count++;
    }
    if(nextptr!=NULL)
    {
      head->next = reverseK(nextptr,k);
    }
    return prev;

}
bool Search(Node* head,int k)
{
    if(head==NULL)
    {
        return false;
    }
    Node* curr=head;
    while(curr!=NULL)
    {
        if(curr->data==k)
        {
            return true;

        }
        curr=curr->next;
    }
    return false;
}

int main()
{
    Node* head=NULL;
    addFirst(head,10);
    addLast(head,20);
    addLast(head,30);
    addLast(head,40);
   cout<< Search(head,20)<<endl;
   // cout<<deleteFirst(head)<<endl;
  //  cout<<deleteLast(head)<<endl;
    display(head);
    Node *newNode=reverseK(head,2);
    display(newNode);

}
