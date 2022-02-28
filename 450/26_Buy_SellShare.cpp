#include<bits/stdc++.h>

using namespace std;

int MaxProfit(int a[],int n)
{
    int b1,b2;
    b1=b2=INT_MAX;
    int p1,p2;
    p1=p2=0;

    for(int i=0;i<n;i++)
    {
        b1=min(b1,a[i]);
        p1=max(p1,a[i]-b1);
        b2=min(b2,a[i]-p1);
        p2=max(p2,a[i]-b2);
    }
    return p2;
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
    cout<<"Maximum Profit-"<<MaxProfit(a,n)<<endl;
}
