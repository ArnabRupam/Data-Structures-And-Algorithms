#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int lo=0;
    int hi=n-1;
    int mi=0;
    int ma=0;
    int ans=0;

    while(lo<=hi)
    {

            if(a[lo]<a[hi])
            {
                if(a[lo]>mi)
                {
                    mi=a[lo];
                }
                else
                {
                    ans=ans+(mi-a[lo]);
                }
                lo++;
            }
            else
            {
                if(a[hi]>ma)
                {
                    ma=a[hi];
                }
                else
                {
                    ans=ans+(ma-a[hi]);
                }
                hi--;
            }
        }


     cout<<ans<<endl;

}
