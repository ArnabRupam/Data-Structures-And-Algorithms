#include<bits/stdc++.h>
#include<unordered_map>

int getPairsCount(int a[],int n,int k)
{
    unordered_map<int,int> m;
    int ans=0;
    for(int i=0;i<n;i++)
    {
        int b=k-a[i];
        if(m[b])
        {
            ans+=m[b];
        }
        m[a[i]]++;
    }
    return ans;
}



int main()
{
    int n;
    cin>>n;
    int k;
    cin>>k;
    int a[n];


    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<getPairsCount(a,n,k)<<endl;
}
