#include<iostream>
using namespace std;

void ReverseArr(int a[],int n)
{
    int s=0;
    int e=n-1;
    while(s<e)
    {
        int temp=a[s];
        a[s]=a[e];
        a[e]=temp;
        s++;
        e--;
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
    ReverseArr(a,n);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}
