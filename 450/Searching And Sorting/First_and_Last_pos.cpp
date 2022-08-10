#include<iostream>
using namespace std;

int* find(int a[],int n,int x)
{
    int ans[2]={-1,-1};
    int l=0;
    int h=n-1;

    while(l<=h)
    {
        int mid=(l+h)/2;
        if(x==a[mid])
        {
            ans[0]=mid;
            h=mid-1;
        }
        else if(x>a[mid])
        {
            l=mid+1;
        }
        else{
            h=mid-1;
        }

    }
    l=0;
    h=n-1;
    while(l<=h)
    {
        int mid=(l+h)/2;
        if(x==a[mid])
        {
            ans[1]=mid;
            l=mid+1;
        }
        else if(x>a[mid])
        {
            l=mid+1;
        }
        else{
            h=mid-1;
        }
    }
    for(int i=0;i<2;i++)
    {
        cout<<ans[i]<<" ";
    }
    return ans;
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
    cout<<"number that we need to find"<<endl;
    int x;
    cin>>x;
    find(a,n,x);

}
