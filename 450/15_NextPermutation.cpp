#include<bits/stdc++.h>
#include<vector>
using namespace std;

void nextPermutation(vector<int>&a)
{
    int idx=-1;
    int n=a.size();
    for(int i=n-1;i>0;i--)
    {
        if(a[i]>a[i-1])
        {
            idx=i;
            break;
        }
    }
    if(idx==-1)
    {
        reverse(a.begin(),a.end());
    }
    else
    {
        int prev=idx;
        for(int i=idx+1;i<n;i++)
        {
            if(a[i]>a[idx-1]&& a[i]<=a[prev])
            {
                prev=i;
            }
        }
        swap(a[idx-1],a[prev]);
        reverse(a.begin()+idx,a.end());
    }
}



int main()
{
    int n;
    cin>>n;
    vector<int> a;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        a.push_back(x);
    }
    nextPermutation(a);
    for(int i=0;i<a.size();i++)
    {

        cout<<a[i]<<" ";
    }
    return 0;
}
