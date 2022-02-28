#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {



        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int s=0;
        int f=0;
        unordered_map<int,int> m;
        for(int i=0;i<n;i++)
        {
            s=s+a[i];
            if(s==0 || m[s] || a[i]==0)
            {
                f=1;
                break;
            }
        }
        if(f==1)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }

    }
    return 0;
}
