#include<bits/stdc++.h>
using namespace std;
int MaxSum(int a[],int n)
{
    if(n==0)
    {
        return 0;
    }
    if(n==1)
    {
        return a[0];
    }
    if(n==2)
    {
        return max(a[0],a[1]);

    }
    int b[n];
    b[0]=a[0];
    b[1]=max(a[0],a[1]);
    for(int i=2;i<n;i++)
    {
        b[i]=max(b[i-2]+a[i],b[i-1]);
    }
    return b[n-1];

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
    cout<<MaxSum(a,n);
}
