#include<iostream>

using namespace std;

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int val)
    {
        data=val;
        left=NULL;
        right=NULL;
    }
};
int calHeight(Node* root)
{
    if(root==NULL);
    {
        return 0;
    }
    int LHeight=calHeight(root->left);
    int RHeight=calHeight(root->right);
    if(LHeight>RHeight)
    {
        return (LHeight+1);
    }
    else
    {
        return (RHeight+1);
    }
    
}



int main()
{
     Node* root=new Node(1);
     root->left=new Node(2);
     root->right=new Node(3);
    root->left->left=new Node(4);
    root->left->right=new Node(5);
    root->right->left=new Node(6);
    root->right->right=new Node(7);
    
    cout<<calHeight(root)<<endl;

    return 0;
    
}