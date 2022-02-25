
#include<bits/stdc++.h>
#include<algorithm>
#include<array>
using namespace std;
int kadane(int a[],int n)
{
    int maxSum=0;
    int currSum=0;

    for(int i=0;i<n;i++)
    {
        currSum+=a[i];
        if(currSum>maxSum)
        {
            maxSum=currSum;
        }
        if(currSum<0)
        {
            currSum=0;
        }
    }
    return maxSum;
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
        cout<<kadane(a,n)<<endl;

}

