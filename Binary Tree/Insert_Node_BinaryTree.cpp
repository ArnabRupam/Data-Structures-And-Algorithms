#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* left;
        Node* right;
    
    Node()
    {
        data=0;
        left=NULL;
        right=NULL;
    }
    Node(int val)
    {
        data=val;
        left=NULL;
        right=NULL;
    }

    

};

class BST{

    public:
        Node* root;
        BST()
        {
            root=NULL;
        }
        bool isEmpty()
        {
            if(root==NULL)
                return true;
            else
                return false;
        }

        void insertNode(Node* new_node)
        {
            if(root==NULL)
            {
                root=new_node;
                cout<<"Value inserted as the root node!"<<endl;
            }
            else{
                Node* temp=root;
                while(temp!=NULL)
                {
                    if(new_node->data==temp->data)
                    {
                        cout<<"Value Already exists!"<<endl;
                        return;
                    }
                    else if(new_node->data<temp->data && temp->left==NULL)
                    {
                        temp->left=new_node;
                        cout<<"value Inserted"<<endl;
                    }
                    else if(new_node->data>temp->data && temp->right==NULL)
                    {
                        temp->right=new_node;
                        cout<<"value Inserted"<<endl;
                    }
                    else if(new_node->data<temp->data)
                    {
                        temp=temp->left;
                    }
                    else
                    {
                        temp=temp->right;
                    }
                }
            }
        }



        void print2D(Node* r,int space)
    {
        if(r==NULL)
            return;
        space+=space;
        print2D(r->right,space);
        cout<<endl;
        for(int i=_SPACE;i<space;i++)
            cout<<" ";
        cout<<r->data<<"\n";
        print2D(r->left,space);
    }
};


int main()
{
    BST obj;
    int option,val;
    do{
        cout<<"what operation do you want to perform"<<endl;
        cout<<"1.Insert Node"<<endl;
        cout<<"2. Search Node"<<endl;
        cout<<"3.Delete Node"<<endl;
        cout<<"4.Print BST values"<<endl;
        cout<<"5.clear screen"<<endl;

        cin>>option;
        Node* new_node=new Node();
        switch(option)
        {
            case 0:
                break;
            case 1:
                cout<<"INSERT"<<endl;
                cout<<"Enter the value of tree node to inser"<<endl;
                cin>>val;
                new_node->data =val;
                obj.insertNode(new_node);
                break;
            case 2:
                break;
            case 3:
                break;
            case 4:
                cout<<"Print"<<endl;
                obj.print2D(obj.root,5);
                break;
            case 5:
            system("cls");
                break;
            default:
                cout<<"Enter the proper option number"<<endl;
                break;


            
        }

    }while(option!=0);


    return 0;
}