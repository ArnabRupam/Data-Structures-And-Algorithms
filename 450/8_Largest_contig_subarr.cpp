#include<iostream>
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
    int mx=INT_MIN;
    int max_till_here=0;
    for(int i=0;i<n;i++)
    {
        max_till_here+=a[i];
        if(max_till_here>mx)
        {
            mx=max_till_here;
        }
        if(max_till_here<0)
        {
            max_till_here=0;
        }
    }
    cout<<mx<<endl;


}
