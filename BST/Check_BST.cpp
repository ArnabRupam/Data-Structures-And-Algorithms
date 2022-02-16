#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;
    Node(int val)
    {
        data=val;
        left=NULL;
        right=NULL;
    }
};

bool CheckBST(Node* root,Node* min=NULL,Node*max=NULL)
{
    if(root==NULL)
    {
        return true;
    }
    if(min!=NULL && root->data <= min->data)
    {
        return false;
    }
    if(max!=NULL && root->data >= max->data)
    {
        return false;
    }
    bool leftValid=CheckBST(root->left,min,root);
    bool rightValid=CheckBST(root->right,root,max);
    return leftValid and rightValid;
}

int main()
{
    Node *root=new Node(2);
    root->left=new Node(1);
    root->right=new Node(3);
    if(CheckBST(root,NULL,NULL))
    {
        cout<<"Valid"<<endl;
    }
    else{
        cout<<"Not Valid"<<endl;
    }
}