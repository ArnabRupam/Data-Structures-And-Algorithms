#include<bits/stdc++.h>
#include<map>
#include<vector>

using namespace std;
int main()
{
    int n;
    cin>>n;

    vector<int> a(n);

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int prevSum=0;
    map<int,int> cnt;
    for(int i=0;i<n;i++)
    {

        prevSum+=a[i];
        cnt[prevSum]++;
    }
    int ans=0;
    map<int,int>::iterator it;
    for(it=cnt.begin();it!=cnt.end();it++)
    {
        int c=it->second;
        ans+=(c*(c-1))/2;
        if(it->first==0)
        {
            ans+=it->second;
        }
    }
    cout<<ans<<endl;
}
