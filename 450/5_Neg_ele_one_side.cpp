#include<iostream>
using namespace std;


int main()
{

    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];

    }
    int i=-1;
    int pivot=0;
    for(int j=0;j<n;j++)
    {
        if(a[j]<pivot)
        {
            i++;
            int temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }
    for(int j=0;j<n;j++)
    {

        cout<<a[j]<<" ";
    }
    cout<<endl;
}
