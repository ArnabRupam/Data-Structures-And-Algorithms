#include<bits/stdc++.h>
#include<map>
#include<vector>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    vector<int>a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int s=0;
    int ans=INT_MAX;

    for(int i=0;i<k;i++)
    {
        s+=a[i];
    }
    ans=min(ans,s);
    for(int i=1;i<n-k;i++)
    {
        s-=a[i-1];
        s+=a[i+k-1];
        ans=min(ans,s);
    }
    cout<<ans<<endl;
}
