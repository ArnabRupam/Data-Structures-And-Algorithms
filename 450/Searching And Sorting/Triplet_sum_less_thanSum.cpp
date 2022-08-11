#include<bits/stdc++.h>
using namespace std;

int FindTriplet(int a[],int n,int sum)
{
    int c=0;
    sort(a,a+n);
    for(int i=0;i<n-2;i++)
    {
        int l=i+1;
        int h=n-1;
        while(l<h)
        {
            int s=a[i]+a[l]+a[h];
            if(s<sum)
            {
                c+=(h-l);
                l++;
            }
            else
                h--;
        }
    }
    return c;
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
    int s;
    cin>>s;
    cout<<FindTriplet(a,n,s)<<endl;
}
