#include<bits/stdc++.h>
#include<vector>
using namespace std;



bool compare(pair<int,int> p1,pair<int,int>p2)
{
    double v1=(double)p1.first/p1.second;
    double v2=(double)p2.first/p2.second;
    return v1>v2;
}


int main()
{
    int n;
    cin>>n;
    vector<pair<int,int>>a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i].first>>a[i].second;
    }


    sort(a.begin(),a.end(),compare);
    int w;
    cin>>w;
    int ans=0;
    int currWeight=0;
    for(int i=0;i<n;i++)
    {
        if(currWeight+a[i].second<=w)
        {
            currWeight+=a[i].second;
            ans+=a[i].first;
        }
        else
        {
            int remain=w-currWeight;
             ans+=a[i].first * ((double)remain/(double)a[i].second);
            break;
        }
    }
    cout<<ans<<endl;

}
