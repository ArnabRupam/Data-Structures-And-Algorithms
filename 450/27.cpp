#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
int main()
{


    int m,n;
    cin>>m>>n;
    int a[m],b[n];
    for(int i=0;i<m;i++)
    {
        cin>>a[i];
    }
    cout<<"2nd array"<<endl;

    for(int i=0;i<n;i++)
    {
        cin>>b[i];
    }
    unordered_map<int,int> m1;

    for(int i=0;i<m;i++)
    {
        m1[a[i]]++;

    }
    int c=0;
    for(int i=0;i<n;i++)
    {
        if(m1[b[i]])
        {
            c++;
        }
    }
    if(c!=n)
    {
        cout<<"no"<<endl;
    }
    else
    {
        cout<<"yes"<<endl;
    }
}
