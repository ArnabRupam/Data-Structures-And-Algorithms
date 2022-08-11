#include<bits/stdc++.h>
using namespace std;

void find4Numbers(int a[],int n,int k)
{
    sort(a,a+n);
    int l,r;
    for(int i=0;i<n-3;i++)
    {
        for(int j=i+1;j<n-2;j++)
        {
            l=j+1;
            r=n-1;
            while(l<r)
            {


            if(a[i]+a[j]+a[l]+a[r]==k)
            {
                cout<<a[i]<<" "<<a[j]<<" "<<a[l]<<" "<<a[r]<<endl;
                l++;
                r--;
            }
            else if(a[i]+a[j]+a[l]+a[r]<k)
            {
                l++;
            }
            else
            {
                r--;
            }
            }
        }
    }
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
    int k;
    cin>>k;
    find4Numbers(a,n,k);

}
