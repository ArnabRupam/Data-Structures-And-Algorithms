#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int target;
    cout<<"Enter the number of elements in the array"<<endl;
    cin>>n;
    cout<<"Enter the sum or target"<<endl;
    cin>>target;
    bool got=false;
    vector<int> a(n);

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    for(int i=0;i<n;i++)
    {
        int lo=i+1,hi=n-1;
        while(lo<hi)
        {
            int current=a[i]+a[lo]+a[hi];
            if(current==target)
            {
                got=true;
             }
             if(current<target)
             {
                lo++;

            }
            else
            {
                hi++;
             }

        }
    }
    if(got)
        cout<<"true"<<endl;
    else
        cout<<"false";
}
