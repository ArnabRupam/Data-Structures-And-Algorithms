#include<iostream>
using namespace std;

void swap(int &a,int &b)
{
    int temp=a;
    a=b;
    b=temp;

}

void rotate(int a[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        swap(a[i],a[n-1]);
    }
}

int main()
{

    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    rotate(a,n);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}
