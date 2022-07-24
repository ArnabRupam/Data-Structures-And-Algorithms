#include<iostream>
using namespace std;

class Queue{
int *a;
int size;
int rear;
int front;
public:
Queue(int n)
{
    size=n;
    a=new int[n];
    front=-1;
    rear=-1;
}

bool isEmpty()
{
    if(front==-1 && rear==-1)
        return true;
    else
        return false;
}
bool isFull()
{
    return rear==size-1;
}

void enqueue(int val)
{
    if(isFull())
    {
        cout<<"Overflown"<<endl;
    }
    else if(isEmpty())
    {
        rear=front=0;
    }
    else
    {
        rear++;
    }
    a[rear]=val;
}
int dequeue()
{
    int x;
    if(isEmpty())
    {
        cout<<"Underflown"<<endl;
        return -1;
    }
    else if(front==rear)
    {
        x=a[front];
        front=rear=-1;
    }
    else
    {
        x=a[front];
        front++;
    }
    return x;
}
void display()
{
    for(int i=front;i<=rear;i++)
    {
        cout<<a[i]<<" ";
    }
}
int count()
{
    return rear-front+1;
}

};
int main()
{
    int n;
    cin>>n;
    Queue q(n);
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    cout<<q.dequeue()<<endl;
    q.display();
}
