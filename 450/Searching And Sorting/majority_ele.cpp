#include<bits/stdc++.h>
using namespace std;

int majority(int a[],int n)
{
    int val=n/2;
    map<int,int>m;
    for(int i=0;i<n;i++)
    {
        m[a[i]]++;
    }
    for(auto x:m)
    {
        if(x.second>val)
            return x.first;
    }
    return -1;
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
    cout<<majority(a,n)<<endl;

}
