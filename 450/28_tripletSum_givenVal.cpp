#include<bits/stdc++.h>
#include<array>
using namespace std;
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
    sort(a,a+n);

    int ans=0;
    for(int i=0;i<n;i++)
    {
         int l=i+1;
        int r=n-1;
        while(l<r)
        {
            if(a[i]+a[l]+a[r]==k)
            {
                ans=1;
                break;
            }
            else if(a[i]+a[l]+a[r]<k)
            {
                l++;
            }
            else
            {
                r--;
            }


        }
        if(ans==1)
        {
            break;
        }
    }
    cout<<ans<<endl;
    return 0;
}
