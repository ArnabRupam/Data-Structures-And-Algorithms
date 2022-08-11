#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int x;
    cin>>x;
    int a[n];
    int ans=-1;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];

    }
    unordered_map<int,int> m;
    for(int i=0;i<n;i++)
    {
        m[a[i]]=1;
    }
    for(int i=0;i<n;i++)
    {
        if(m[a[i]+x])
        {
            ans=1;
            break;
        }
    }
    cout<<ans<<endl;

}
