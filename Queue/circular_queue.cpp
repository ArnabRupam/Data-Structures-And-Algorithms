#include<iostream>
using namespace std;
class Cqueue{
    public:
int *a;
int size;
int front;
int rear;
int itemcount;
public:
Cqueue(int x)
{
    size=x;
    a=new int[x];
    front=-1;
    rear=-1;
    itemcount=0;
}
bool isFull()
{
    return rear==size-1;
}
bool isEmpty()
{
    if(front==-1&&rear==-1)
        return true;
    else
        return false;
}
void enqueue(int x)
{

    if(isFull())
    {
        cout<<"queue is full"<<endl;
        return;
    }
    else if(isEmpty())
    {
        front=rear=0;
        a[rear]=x;
    }
    else
    {
        rear=(rear+1)%size;
        a[rear]=x;
    }
    itemcount++;
}
int deque()
{
    int x;
    if(isEmpty())
    {
        cout<<"Underflown"<<endl;
        return -1;
    }
    else if(rear==front)
    {
        x=a[front];
        rear=front=-1;
        itemcount--;
        return x;
    }
    else
    {
        x=a[front];
        front=(front+1)%size;
        itemcount--;
        return x;
    }
}
    int count()
    {
        return itemcount;
    }
    void display()
    {
        for(int i=front;i<=rear;i++)
        {
            cout<<a[i]<<" ";
        }
    }

};
int main()
{
    int n;
    cin>>n;
    Cqueue q(n);
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    cout<<q.deque()<<endl;
    q.display();
    cout<<q.count();


}
