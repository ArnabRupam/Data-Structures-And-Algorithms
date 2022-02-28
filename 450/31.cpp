#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main()
{
    int n,x;
    cin>>n>>x;

    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int i=0;
    int j=0;
    int s=0;
    int mi=INT_MAX;
    while(i<=j && j<n)
    {
        while(s<=x && j<n)
        {
            s+=a[j];
            j++;

        }
        while(s>x && i<j)
        {
            mi=min(mi,j-i);
            s-=a[i];
            i++;
        }
    }
    cout<<mi<<endl;
}
