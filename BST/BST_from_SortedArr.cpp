#include<iostream>
using namespace std;

struct Node
{
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

Node* BST(int arr[],int start,int end)
{
    if(start>end)
    {
        return NULL;
    }

    int mid=(start+end)/2;
    Node* root=new Node(arr[mid]);
    root->left=BST(arr,start,mid-1);
    root->right=BST(arr,mid+1,end);

    return root;

}

void preOrder(Node* root)
{
    if(root==NULL)
    {
        return;
    }
    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);
}

int main()
{
    int arr[]={10,20,30,40,50,60};
    Node* root=BST(arr,0,5);
    preOrder(root);
    cout<<endl;
    return 0;
}