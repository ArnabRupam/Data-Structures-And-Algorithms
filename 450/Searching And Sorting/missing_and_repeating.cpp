#include<bits/stdc++.h>
using namespace std;
void TwoEle(int a[],int n)
{
    int c,b;
    for(int i=0;i<n;i++)
    {
        if(a[abs(a[i])-1]<0)
        {
            c=abs(a[i]);
        }
        else
        {
            a[abs(a[i])-1]=-a[abs(a[i])-1];
        }
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]>0)
        {
            b=i+1;
        }

    }
    cout<<c<<" "<<b<<endl;

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
    TwoEle(a,n);
}
