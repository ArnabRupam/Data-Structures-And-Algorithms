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
void addLast(Node* &head,int val)
{

    Node* n= new Node(val);
    if(head==NULL)
    {
        head=n;
        return;
    }
    Node* curr= head;
    while(curr->next!=NULL)
    {
        curr=curr->next;
    }
    curr->next=n;
}
void display(Node* head)
{
    if(head==NULL)
    {
        return;
    }
    Node* curr= head;
    while(curr!=NULL)
    {

        cout<<curr->data<<"-->";
        curr=curr->next;
    }
    cout<<"NULL"<<endl;
}
void makeCycle(Node* &head,int pos)
{
    Node* temp=head;
    Node* startNode;
    int count=1;
    while(temp->next!=NULL)
    {
        if(count==pos)
        {
            startNode=temp;
        }
        temp=temp->next;
        count++;
    }
    temp->next=startNode;

}
bool detectCycle(Node* &head)
{
    Node* slow=head;
    Node* fast=head;
    while(fast!=NULL && fast->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
        if(fast==slow)
        {
            return true;
        }
    }
    return false;
}

void removeCycle(Node* &head)
{

}

int main()
{
    Node *head=NULL;
    addLast(head,10);
    addLast(head,20);
    addLast(head,30);
    addLast(head,40);
    addLast(head,50);
    addLast(head,60);
    makeCycle(head,3);
    cout<<detectCycle(head)<<endl;

}

